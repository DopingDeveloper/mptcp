#include "ns3/network-module.h"
#include "ns3/core-module.h"
#include "ns3/internet-module.h"
#include "ns3/dce-module.h"
#include "ns3/point-to-point-module.h"
#include "ns3/applications-module.h"
#include "ns3/netanim-module.h"
#include "ns3/constant-position-mobility-model.h"

using namespace ns3;
using namespace std;
void setPos (Ptr<Node> n, int x, int y, int z)
{
  Ptr<ConstantPositionMobilityModel> loc = CreateObject<ConstantPositionMobilityModel> ();
  n->AggregateObject (loc);
  Vector locVec2 (x, y, z);
  loc->SetPosition (locVec2);
}

int main (int argc, char *argv[])
{
  uint32_t nRtrs = 8;
  CommandLine cmd;
  cmd.AddValue ("nRtrs", "Number of routers. Default 2", nRtrs);
  cmd.Parse (argc, argv);
//  nRtrs *= 2;
  cout << nRtrs << endl;
  NodeContainer nodes, routers, interfers;
  nodes.Create (2);
  routers.Create (nRtrs);
  interfers.Create (nRtrs);


  DceManagerHelper dceManager;
  dceManager.SetTaskManagerAttribute ("FiberManagerType",
                                      StringValue ("UcontextFiberManager"));

  dceManager.SetNetworkStack ("ns3::LinuxSocketFdFactory",
                              "Library", StringValue ("liblinux.so"));
  LinuxStackHelper stack;
  stack.Install (nodes);
  stack.Install (routers);
  stack.Install (interfers);

  dceManager.Install (nodes);
  dceManager.Install (routers);
  dceManager.Install (interfers);

  PointToPointHelper pointToPoint;
  NetDeviceContainer devices1, devices2, devices3, devices4, devices5;
  Ipv4AddressHelper address1, address2, address3, address4, address5;
  std::ostringstream cmd_oss;
  address1.SetBase ("10.1.0.0", "255.255.255.0");
  address2.SetBase ("10.2.0.0", "255.255.255.0");
  address3.SetBase ("10.3.0.0", "255.255.255.0");
  address4.SetBase ("10.4.0.0", "255.255.255.0");
  address5.SetBase ("10.5.0.0", "255.255.255.0");

  for (uint32_t i = 0; i < nRtrs; i+=2)
    {
      // Left link
      pointToPoint.SetDeviceAttribute ("DataRate", StringValue ("5Mbps"));
      pointToPoint.SetChannelAttribute ("Delay", StringValue ("10ms"));
      devices1 = pointToPoint.Install (nodes.Get (0), routers.Get (i));
      // Assign ip addresses
      Ipv4InterfaceContainer if1 = address1.Assign (devices1);
      address1.NewNetwork ();
      // setup ip routes
      cmd_oss.str ("");
      cmd_oss << "rule add from " << if1.GetAddress (0, 0) << " table " << (i/2+1);
      LinuxStackHelper::RunIp (nodes.Get (0), Seconds (0.1), cmd_oss.str ().c_str ());
//      cout << "Node 0 : " << cmd_oss.str().c_str() << endl;
      cmd_oss.str ("");
      cmd_oss << "route add 10.1." << i/2 << ".0/24 dev sim" << i/2 << " scope link table " << (i/2+1);
      LinuxStackHelper::RunIp (nodes.Get (0), Seconds (0.1), cmd_oss.str ().c_str ());
//     cout << "Node 0 : " << cmd_oss.str().c_str() << endl;
      cmd_oss.str ("");
      cmd_oss << "route add default via " << if1.GetAddress (1, 0) << " dev sim" << i/2 << " table " << (i/2+1);
      LinuxStackHelper::RunIp (nodes.Get (0), Seconds (0.1), cmd_oss.str ().c_str ());
//      cout << "Node 0 : " << cmd_oss.str().c_str() << endl;
      cmd_oss.str ("");
      cmd_oss << "route add 10.1." << i/2 << ".0/24 via " << if1.GetAddress (1, 0) << " dev sim0";
      LinuxStackHelper::RunIp (routers.Get (i), Seconds (0.2), cmd_oss.str ().c_str ());
//      cout << "Router " << i << " : " << cmd_oss.str().c_str() << endl;

      // Right link
      pointToPoint.SetDeviceAttribute ("DataRate", StringValue ("100Mbps"));
      pointToPoint.SetChannelAttribute ("Delay", StringValue ("1ns"));
      devices2 = pointToPoint.Install (nodes.Get (1), routers.Get (i+1));
      // Assign ip addresses
      Ipv4InterfaceContainer if2 = address2.Assign (devices2);
      address2.NewNetwork ();
      // setup ip routes
      cmd_oss.str ("");
      cmd_oss << "rule add from " << if2.GetAddress (0, 0) << " table " << (i/2+1);
      LinuxStackHelper::RunIp (nodes.Get (1), Seconds (0.1), cmd_oss.str ().c_str ());
//      cout << "Node 1 : " << cmd_oss.str().c_str() << endl;
      cmd_oss.str ("");
      cmd_oss << "route add 10.2." << i/2 << ".0/24 dev sim" << i/2 << " scope link table " << (i/2+1);
      LinuxStackHelper::RunIp (nodes.Get (1), Seconds (0.1), cmd_oss.str ().c_str ());
//      cout << "Node 1 : " << cmd_oss.str().c_str() << endl;
      cmd_oss.str ("");
      cmd_oss << "route add default via " << if2.GetAddress (1, 0) << " dev sim" << i/2 << " table " << (i/2+1);
      LinuxStackHelper::RunIp (nodes.Get (1), Seconds (0.1), cmd_oss.str ().c_str ());
//      cout << "Node 1 : " << cmd_oss.str().c_str() << endl;
      cmd_oss.str ("");
      cmd_oss << "route add 10.2." <<i/2 << ".0/24 via " << if2.GetAddress (1, 0) << " dev sim0";
      LinuxStackHelper::RunIp (routers.Get (i+1), Seconds (0.2), cmd_oss.str ().c_str ());
//      cout << "Router " << i+1 << " : " << cmd_oss.str().c_str() << endl;

      // Center link
      pointToPoint.SetDeviceAttribute ("DataRate", StringValue("1Gbps"));
      pointToPoint.SetChannelAttribute ("Delay", StringValue("1ns"));
      devices3 = pointToPoint.Install (routers.Get(i), routers.Get(i+1));
      // Assign ip address
      Ipv4InterfaceContainer if3 = address3.Assign (devices3);
      address3.NewNetwork ();
      // setup ip routes
      cmd_oss.str("");
      cmd_oss << "route add 10.2." << i/2 << ".0/24 via " << if3.GetAddress(1, 0) << " dev sim1";
      LinuxStackHelper::RunIp (routers.Get(i), Seconds (0.3), cmd_oss.str ().c_str ());
//      cout << "Router " << i << " : " << cmd_oss.str().c_str() << endl;
      cmd_oss.str("");
      cmd_oss << "route add 10.1." << i/2 << ".0/24 via " << if3.GetAddress(0, 0) << " dev sim1";
      LinuxStackHelper::RunIp (routers.Get(i+1), Seconds (0.3), cmd_oss.str ().c_str ());
//      cout << "Router " << i+1 << " : " << cmd_oss.str().c_str() << endl;

      //Interfering Sender
      pointToPoint.SetDeviceAttribute ("DataRate", StringValue("100Mbps"));
      pointToPoint.SetChannelAttribute ("Delay", StringValue("10ms"));
      devices4 = pointToPoint.Install (interfers.Get(i), routers.Get(i));
      // Assign ip address
      Ipv4InterfaceContainer if4 = address4.Assign (devices4);
      address4.NewNetwork ();
      // setup ip routes
      cmd_oss.str ("");
      cmd_oss << "rule add from " << if4.GetAddress (0, 0);
      LinuxStackHelper::RunIp (interfers.Get (i), Seconds (0.1), cmd_oss.str ().c_str ());
      cout << "Interfers " << i << " : " << cmd_oss.str().c_str() << endl;
      cmd_oss.str ("");
      cmd_oss << "route add 10.4." << i/2 << ".0/24 dev sim0 scope link";
      LinuxStackHelper::RunIp (interfers.Get (i), Seconds (0.1), cmd_oss.str ().c_str ());
      cout << "Interfers " << i << " : " << cmd_oss.str().c_str() << endl;
      cmd_oss.str ("");
      cmd_oss << "route add 10.5."<< i/2 <<".0/24 via " << if4.GetAddress (1, 0) << " dev sim0";
      LinuxStackHelper::RunIp (interfers.Get (i), Seconds (0.1), cmd_oss.str ().c_str ());
      cout << "Interfers " << i << " : " << cmd_oss.str().c_str() << endl;
      cmd_oss.str ("");
      cmd_oss << "route add 10.4." <<i/2 << ".0/24 via " << if4.GetAddress (1, 0) << " dev sim2";
      LinuxStackHelper::RunIp (routers.Get (i), Seconds (0.2), cmd_oss.str ().c_str ());
      cout << "Router " << i << " : " << cmd_oss.str().c_str() << endl;
      cmd_oss.str ("");
      cmd_oss << "route add 10.5." <<i/2 << ".0/24 via " << if3.GetAddress (1, 0) << " dev sim1";
      LinuxStackHelper::RunIp (routers.Get (i), Seconds (0.2), cmd_oss.str ().c_str ());
      cout << "Router " << i << " : " << cmd_oss.str().c_str() << endl;


      //Interfering Receiver
      pointToPoint.SetDeviceAttribute ("DataRate", StringValue("100Mbps"));
      pointToPoint.SetChannelAttribute ("Delay", StringValue("10ms"));
      devices5 = pointToPoint.Install (interfers.Get(i+1), routers.Get(i+1));
      // Assign ip address
      Ipv4InterfaceContainer if5 = address5.Assign (devices5);
      address5.NewNetwork ();
      // setup ip routes

      cmd_oss.str ("");
      cmd_oss << "rule add from " << if5.GetAddress (0, 0);
      LinuxStackHelper::RunIp (interfers.Get (i+1), Seconds (0.1), cmd_oss.str ().c_str ());
      cout << "Interfers " << i+1 << " : " << cmd_oss.str().c_str() << endl;
      cmd_oss.str ("");
      cmd_oss << "route add 10.5." << i/2 << ".0/24 dev sim0 scope link";
      LinuxStackHelper::RunIp (interfers.Get (i+1), Seconds (0.1), cmd_oss.str ().c_str ());
      cout << "Interfers " << i+1 << " : " << cmd_oss.str().c_str() << endl;
      cmd_oss.str ("");
      cmd_oss << "route add 10.4."<< i/2 <<".0/24 via " << if5.GetAddress (1, 0) << " dev sim0";
      LinuxStackHelper::RunIp (interfers.Get (i+1), Seconds (0.1), cmd_oss.str ().c_str ());
      cout << "Interfers " << i+1 << " : " << cmd_oss.str().c_str() << endl;
      cmd_oss.str ("");
      cmd_oss << "route add 10.5." <<i/2 << ".0/24 via " << if5.GetAddress (1, 0) << " dev sim2";
      LinuxStackHelper::RunIp (routers.Get (i+1), Seconds (0.2), cmd_oss.str ().c_str ());
      cout << "Router " << i+1 << " : " << cmd_oss.str().c_str() << endl;
      cmd_oss.str ("");
      cmd_oss << "route add 10.4." <<i/2 << ".0/24 via " << if3.GetAddress (0, 0) << " dev sim1";
      LinuxStackHelper::RunIp (routers.Get (i+1), Seconds (0.2), cmd_oss.str ().c_str ());
      cout << "Router " << i+1 << " : " << cmd_oss.str().c_str() << endl;

      setPos (routers.Get (i),   25, i * 20, 0);
      setPos (routers.Get (i+1), 75, i * 20, 0);
      setPos (interfers.Get (i), 35, (i+0.5) * 20, 0);
      setPos (interfers.Get (i+1), 65, (i+0.5) * 20, 0);
    }

  // default route
  LinuxStackHelper::RunIp (nodes.Get (0), Seconds (0.1), "route add default via 10.1.0.2 dev sim0");
  LinuxStackHelper::RunIp (nodes.Get (1), Seconds (0.1), "route add default via 10.2.0.2 dev sim0");
//  LinuxStackHelper::RunIp (interfers.Get (0), Seconds (0.1), "route add default via 10.4.0.2 dev sim0");
//  LinuxStackHelper::RunIp (interfers.Get (1), Seconds (0.1), "route add default via 10.5.0.2 dev sim0");
  LinuxStackHelper::RunIp (nodes.Get (0), Seconds (0.1), "rule show");

  // Schedule Up/Down (XXX: didn't work...)
  LinuxStackHelper::RunIp (nodes.Get (1), Seconds (1.0), "link set dev sim0 multipath off");
  LinuxStackHelper::RunIp (nodes.Get (1), Seconds (15.0), "link set dev sim0 multipath on");
  LinuxStackHelper::RunIp (nodes.Get (1), Seconds (30.0), "link set dev sim0 multipath off");


  // debug
  stack.SysctlSet (nodes, ".net.mptcp.mptcp_debug", "1");

  DceApplicationHelper dce;
  ApplicationContainer apps;

  dce.SetStackSize (1 << 20);

  // Launch iperf client on node 0
  dce.SetBinary ("iperf");
  dce.ResetArguments ();
  dce.ResetEnvironment ();
  dce.AddArgument ("-c");
  dce.AddArgument ("10.2.0.1");
  dce.AddArgument ("-i");
  dce.AddArgument ("1");
  dce.AddArgument ("--time");
  dce.AddArgument ("50");

  apps = dce.Install (nodes.Get (0));
  apps.Start (Seconds (5.0));
  apps.Stop (Seconds (50));

  // Launch iperf server on node 1
  dce.SetBinary ("iperf");
  dce.ResetArguments ();
  dce.ResetEnvironment ();
  dce.AddArgument ("-s");
  dce.AddArgument ("-P");
  dce.AddArgument ("1");
  apps = dce.Install (nodes.Get (1));

  pointToPoint.EnablePcapAll ("iperf-mptcp", false);

  apps.Start (Seconds (4));

  std::ostringstream udp_address;
  for (uint32_t i = 0; i < nRtrs; i+=2)
    {
      dce.SetBinary("udp-perf");
      dce.ResetArguments();
      dce.AddArgument("--duration=10");
      dce.AddArgument("--nodes=4");
      apps = dce.Install(interfers.Get(i+1));
      apps.Start (Seconds (4.0));

      dce.SetBinary("udp-perf");
      dce.ResetArguments();
      udp_address.str("");
      dce.AddArgument("--client");
      dce.AddArgument("--nodes=4");
      udp_address << "--host=10.5." << i/2 << ".1";
      dce.AddArgument(udp_address.str().c_str());
      dce.AddArgument("--duration=10");
      apps = dce.Install(interfers.Get(i));
      apps.Start (Seconds (4.5));


    }




  setPos (nodes.Get (0), 0, 20 * (nRtrs - 1) / 2, 0);
  setPos (nodes.Get (1), 100, 20 * (nRtrs - 1) / 2, 0);

  Simulator::Stop (Seconds (50.0));
  Simulator::Run ();
  Simulator::Destroy ();

  return 0;
}
