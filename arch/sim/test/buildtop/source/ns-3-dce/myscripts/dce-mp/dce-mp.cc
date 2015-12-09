#include "ns3/network-module.h"
#include "ns3/core-module.h"
#include "ns3/internet-module.h"
#include "ns3/dce-module.h"
#include "ns3/point-to-point-module.h"
#include "ns3/applications-module.h"
#include "ns3/netanim-module.h"
#include "ns3/constant-position-mobility-model.h"
#include <string>
#include "stdio.h"

using namespace ns3;

NS_LOG_COMPONENT_DEFINE("DCEMP");

void setPos (Ptr<Node> n, int x, int y, int z)
{
   Ptr<ConstantPositionMobilityModel> loc = CreateObject<ConstantPositionMobilityModel> ();
   n->AggregateObject (loc);
   Vector locVec2 (x, y, z);
   loc->SetPosition (locVec2);
}

void setQueueSize (NetDeviceContainer devices, int idx, StringValue queueSize)
{
   Ptr<Object> txQueue;
   Ptr<DropTailQueue> dtq;
   PointerValue tmp;
   devices.Get (idx)->GetAttribute ("TxQueue", tmp);
   txQueue = tmp.GetObject ();
   dtq = txQueue->GetObject <DropTailQueue> ();
   dtq->SetAttribute ("MaxPackets", queueSize);
}

std::string strOps (std::string *instr)
{
   int pos;
   std::string st;
   pos = instr->find_first_of(",");
   if(pos == -1) {
       st = (*instr);
       (*instr) = "";
       return st;
   } else {
       st = instr->substr (0,pos);
       instr->erase(0,pos+1);
       return st;
   }
}

int main (int argc, char *argv[])
{
  LogComponentEnable("DCEMP", LOG_LEVEL_ALL);
  std::string nPath = "";
  std::string rate = "";
  std::string delay = "";
  std::string error = "";
  std::string queue = "";
  std::string mtu = "";
  std::string rbufSize = "";
  std::string wbufSize = "";
  std::string tcpPage = "";
  std::string tcpCC = "coupled";
  std::string scheduler = "1";
  std::string retx = "1";
  std::string printlog = "0";
  std::string sndwnd = "0";
  std::string cwnd = "";
  std::string sratio = "";
  std::string idr = "";
  CommandLine cmd;
  cmd.AddValue ("nPath", "Number of paths", nPath);
  cmd.AddValue ("rate", "Data rate of links", rate);
  cmd.AddValue ("delay", "Delay of links", delay);
  cmd.AddValue ("error", "Error rate of links", error);
  cmd.AddValue ("queue", "Drop tail queue size of links", queue);
  cmd.AddValue ("mtu", "MTU of links", mtu);
  cmd.AddValue ("rbufSize", "Receive Buffer Size", rbufSize);
  cmd.AddValue ("wbufSize", "Write Buffer Size", wbufSize);
  cmd.AddValue ("tcpPage", "Number of maximum pages for TCP", tcpPage);
  cmd.AddValue ("tcpCC", "Congestion Control Algorithm: coupled, reno, cubic", tcpCC);
  cmd.AddValue ("scheduler", "Scheduler: original(0), modified(1)", scheduler);
  cmd.AddValue ("retx", "Retransmission: OFF(0), ON(1)", retx);
  cmd.AddValue ("printlog", "Print Log: OFF(0), ON(1)", printlog);
  cmd.AddValue ("sndwnd", "Send window size (variable if 0)", sndwnd);
  cmd.AddValue ("cwnd", "Congestion window size (variable if 0)", cwnd);
  cmd.AddValue ("scheduleRatio", "Scheduling ratio (variable if 0)", sratio);
  cmd.AddValue ("interferer", "Data rate of interferers", idr);
  cmd.Parse (argc, argv);

    // obtain the number of routers
  uint32_t nRtrs = (uint32_t)std::atoi(nPath.c_str());

  // create nodes, routers, interferers
  NodeContainer nodes, routers0, routers1, routers2, interferer0, interferer1;
  nodes.Create (2);
  routers0.Create (nRtrs);
  routers1.Create (nRtrs);
  routers2.Create (1);
  interferer0.Create (nRtrs);
  interferer1.Create (nRtrs);

  // set up linux stack on the nodes and the routers
  DceManagerHelper dceManager;
  dceManager.SetTaskManagerAttribute ("FiberManagerType",
                                      StringValue ("UcontextFiberManager"));
  dceManager.SetNetworkStack ("ns3::LinuxSocketFdFactory",
                              "Library", StringValue ("liblinux.so"));
  LinuxStackHelper stack;
  stack.Install (nodes);
  stack.Install (routers0);
  stack.Install (routers1);
  stack.Install (routers2);

  dceManager.Install (nodes);
  dceManager.Install (routers0);
  dceManager.Install (routers1);
  dceManager.Install (routers2);

  // set up ns3 internet stack in the interferers
  InternetStackHelper internet;
  internet.Install (interferer0);
  internet.Install (interferer1);
  GlobalValue::Bind ("ChecksumEnabled", BooleanValue (true));

  // set sysctl parameters
  stack.SysctlSet (nodes, ".net.ipv4.tcp_congestion_control", tcpCC);
  stack.SysctlSet (nodes, ".net.core.netdev_max_backlog", "1000000");
  stack.SysctlSet (nodes, ".net.mptcp.mptcp_scheduler", scheduler);
  stack.SysctlSet (nodes, ".net.mptcp.mptcp_retx", retx);
  stack.SysctlSet (nodes, ".net.mptcp.mptcp_print_log", printlog);
  stack.SysctlSet (routers0, ".net.core.netdev_max_backlog", "1000000");
  stack.SysctlSet (routers1, ".net.core.netdev_max_backlog", "1000000");
  stack.SysctlSet (routers2, ".net.core.netdev_max_backlog", "1000000");
  if (rbufSize.length () != 0) {
      stack.SysctlSet (nodes, ".net.ipv4.tcp_rmem", rbufSize + " " + rbufSize + " " + rbufSize);
      stack.SysctlSet (nodes, ".net.core.rmem_max", rbufSize + "0");
  } else {
      stack.SysctlSet (nodes, ".net.ipv4.tcp_rmem", "524288 1048576 2097152");
      stack.SysctlSet (nodes, ".net.core.rmem_max", "2097152");
  }
  if (wbufSize.length () != 0) {
      stack.SysctlSet (nodes, ".net.ipv4.tcp_wmem", wbufSize + " " + wbufSize + " " + wbufSize);
      stack.SysctlSet (nodes, ".net.core.wmem_max", wbufSize + "0");
  } else {
      stack.SysctlSet (nodes, ".net.ipv4.tcp_wmem", "4096 16384 4194304");
      stack.SysctlSet (nodes, ".net.core.wmem_max", "4194304");
  }
  if (tcpPage.length () != 0) {
      stack.SysctlSet (nodes, ".net.ipv4.tcp_mem", tcpPage + " " + tcpPage + " " + tcpPage);
  }
  stack.SysctlSet (nodes, ".net.mptcp.mptcp_sndwnd", sndwnd);
  std::string str = "";
  for (int it = 0;it < 8;it ++) {
      std::string st = strOps(&cwnd);
      str.append(st);
      if(cwnd.length() == 0) break;
      str.append(" ");
  }
  stack.SysctlSet (nodes, ".net.mptcp.mptcp_cwnd", str);
  str = "";
  for (int it = 0;it < 8;it ++) {
      std::string st = strOps(&sratio);
      str.append(st);
      if(sratio.length() == 0) break;
      str.append(" ");
  }
  stack.SysctlSet (nodes, ".net.mptcp.mptcp_schedule_ratio", str);

  // prepare channel, device, interface
  PointToPointHelper pointToPointGood, pointToPoint;
  pointToPointGood.SetDeviceAttribute ("DataRate", StringValue("1000Gbps"));
  pointToPointGood.SetChannelAttribute ("Delay", StringValue("1ns"));
  if (mtu.length () == 0) mtu = "1500";
  pointToPointGood.SetDeviceAttribute ("Mtu", StringValue(mtu));
  pointToPoint.SetDeviceAttribute ("Mtu", StringValue(mtu));
  NetDeviceContainer devices0, devices1, devices2, devices3, devices4, devices5;
  Ipv4AddressHelper address0, address1, address2, address3, address4, address5;
  Ptr<Ipv4> ipv4Interferer;
  Ipv4StaticRoutingHelper ipv4RoutingHelper;
  Ptr<Ipv4StaticRouting> staticRouting;
  std::ostringstream cmd_oss;
  std::stringstream ss;
  address0.SetBase ("10.0.0.0", "255.255.255.0");
  address1.SetBase ("10.1.0.0", "255.255.255.0");
  address2.SetBase ("10.2.0.0", "255.255.255.0");
  address3.SetBase ("10.3.0.0", "255.255.255.0");
  address4.SetBase ("10.4.0.0", "255.255.255.0");
  address5.SetBase ("10.5.0.0", "255.255.255.0");
  StringValue largeQueueSize = StringValue("1000000"); //default large queue size

  for (uint32_t i = 0; i < nRtrs; i++)
  {
      //////////////////////////// Left link
      // install point-to-point channel
      devices0 = pointToPointGood.Install (nodes.Get (0), routers0.Get (i));
      setQueueSize (devices0, 0, largeQueueSize);
      setQueueSize (devices0, 1, largeQueueSize);
      // assign ip addresses
      Ipv4InterfaceContainer if0 = address0.Assign (devices0);
      address0.NewNetwork ();
      // setup ip routes
      cmd_oss.str ("");
      cmd_oss << "route add 10.0." << i << ".0/24 dev sim" << i << " scope link";
      LinuxStackHelper::RunIp (nodes.Get (0), Seconds (0.1), cmd_oss.str ().c_str ());
      if (i == 0) {
            cmd_oss.str ("");
            cmd_oss << "route add default via 10.0.0.2 dev sim0";
            LinuxStackHelper::RunIp (nodes.Get (0), Seconds (0.1), cmd_oss.str ().c_str ());
      }
      cmd_oss.str ("");
      cmd_oss << "rule add from " << if0.GetAddress (0, 0) << " table " << (i+1);
      LinuxStackHelper::RunIp (nodes.Get (0), Seconds (0.1), cmd_oss.str ().c_str ());
      cmd_oss.str ("");
      cmd_oss << "route add 10.0." << i << ".0/24 dev sim" << i << " scope link table " << (i+1);
      LinuxStackHelper::RunIp (nodes.Get (0), Seconds (0.1), cmd_oss.str ().c_str ());
      cmd_oss.str ("");
      cmd_oss << "route add default via " << if0.GetAddress (1, 0) << " dev sim" << i << " table " << (i+1);
      LinuxStackHelper::RunIp (nodes.Get (0), Seconds (0.1), cmd_oss.str ().c_str ());
      cmd_oss.str ("");
      cmd_oss << "route add 10.0." << i << ".0/24 dev sim0 scope link";
      LinuxStackHelper::RunIp (routers0.Get (i), Seconds (0.1), cmd_oss.str ().c_str ());

      //////////////////////////// Middle link
      std::string st;
      Ptr<RateErrorModel> em;
      // setting data rate
      if (rate.length () != 0) st = strOps (&rate);
      else st = "0Mbps";
      pointToPoint.SetDeviceAttribute ("DataRate", StringValue(st));
      // setting delay
      if (delay.length () != 0) st = strOps (&delay);
      else st = "0ms";
      pointToPoint.SetChannelAttribute ("Delay", StringValue(st));
      // create error model
      if (error.length () != 0) st = strOps (&error);
      else st = "0";
      em = CreateObject<RateErrorModel> ();
      em -> SetAttribute ("ErrorRate", StringValue (st));
      em -> SetAttribute ("ErrorUnit", StringValue ("ERROR_UNIT_PACKET"));
      // install point-to-point channel
      devices1 = pointToPoint.Install (routers0.Get (i), routers1.Get (i));
      devices1.Get (1)->SetAttribute ("ReceiveErrorModel", PointerValue (em));
      // setting queue size
      StringValue queueSize;
      if (queue.length () != 0) {
          st = strOps (&queue);
          queueSize = StringValue(st);
      } else queueSize = largeQueueSize;
      setQueueSize (devices1, 0, queueSize);
      setQueueSize (devices1, 1, largeQueueSize);
      //assign ip addresses
      Ipv4InterfaceContainer if1 = address1.Assign (devices1);
      address1.NewNetwork ();
      //setup ip routes
      cmd_oss.str ("");
      cmd_oss << "route add 10.1." << i << ".0/24 dev sim1 scope link";
      LinuxStackHelper::RunIp (routers0.Get (i), Seconds (0.1), cmd_oss.str ().c_str ());
      cmd_oss.str ("");
      cmd_oss << "route add 10.3.0.0/24 via " << if1.GetAddress (1, 0) << " dev sim1";
      LinuxStackHelper::RunIp (routers0.Get (i), Seconds (0.1), cmd_oss.str ().c_str ());
      cmd_oss.str ("");
      cmd_oss << "route add 10.5." << i << ".0/24 via " << if1.GetAddress (1, 0) << " dev sim1";
      LinuxStackHelper::RunIp (routers0.Get (i), Seconds (0.1), cmd_oss.str ().c_str ());
      cmd_oss.str ("");
      cmd_oss << "route add 10.1." << i << ".0/24 dev sim0 scope link";
      LinuxStackHelper::RunIp (routers1.Get (i), Seconds (0.1), cmd_oss.str ().c_str ());
      cmd_oss.str ("");
      cmd_oss << "route add 10.0." << i << ".0/24 via " << if1.GetAddress (0, 0) << " dev sim0";
      LinuxStackHelper::RunIp (routers1.Get (i), Seconds (0.1), cmd_oss.str ().c_str ());
      cmd_oss.str ("");
      cmd_oss << "route add 10.4." << i << ".0/24 via " << if1.GetAddress (0, 0) << " dev sim0";
      LinuxStackHelper::RunIp (routers1.Get (i), Seconds (0.1), cmd_oss.str ().c_str ());


      //////////////////////////// Right link
      // install point-to-point channel
      devices2 = pointToPointGood.Install (routers1.Get (i), routers2.Get (0));
      setQueueSize (devices2, 0, largeQueueSize);
      setQueueSize (devices2, 1, largeQueueSize);
      // assign ip addresses
      Ipv4InterfaceContainer if2 = address2.Assign (devices2);
      address2.NewNetwork ();
      // setup ip routes
      cmd_oss.str ("");
      cmd_oss << "route add 10.2." << i << ".0/24 dev sim1 scope link";
      LinuxStackHelper::RunIp (routers1.Get (i), Seconds (0.1), cmd_oss.str ().c_str ());
      cmd_oss.str ("");
      cmd_oss << "route add 10.3.0.0/24 via " << if2.GetAddress (1, 0) << " dev sim1";
      LinuxStackHelper::RunIp (routers1.Get (i), Seconds (0.1), cmd_oss.str ().c_str ());
      cmd_oss.str ("");
      cmd_oss << "route add 10.2." << i << ".0/24 dev sim" << i << " scope link";
      LinuxStackHelper::RunIp (routers2.Get (0), Seconds (0.1), cmd_oss.str ().c_str ());
      cmd_oss.str ("");
      cmd_oss << "route add 10.0." << i << ".0/24 via " << if2.GetAddress (0, 0) << " dev sim" << i;
      LinuxStackHelper::RunIp (routers2.Get (0), Seconds (0.1), cmd_oss.str ().c_str ());

      //////////////////////////// Left interferer link
      devices4 = pointToPointGood.Install (interferer0.Get (i), routers0.Get (i));
      setQueueSize (devices4, 0, largeQueueSize);
      setQueueSize (devices4, 1, largeQueueSize);
      // assign ip addresses
      Ipv4InterfaceContainer if4 = address4.Assign (devices4);
      address4.NewNetwork ();
      // setup ip routes
      cmd_oss.str ("");
      cmd_oss << "route add 10.4." << i << ".0/24 dev sim2 scope link";
      LinuxStackHelper::RunIp (routers0.Get (i), Seconds (0.1), cmd_oss.str ().c_str ());
      ipv4Interferer = interferer0.Get (i)->GetObject<Ipv4> ();
      staticRouting = ipv4RoutingHelper.GetStaticRouting (ipv4Interferer);
      ss.str ("");
      ss << "10.4." << i << ".0";
      staticRouting->AddNetworkRouteTo (Ipv4Address (ss.str ().c_str ()), Ipv4Mask("255.255.255.0"), Ipv4Address ("0.0.0.0"), 1);
      ss.str ("");
      ss << "10.5." << i << ".0";
      staticRouting->AddNetworkRouteTo (Ipv4Address (ss.str ().c_str ()), Ipv4Mask("255.255.255.0"), if4.GetAddress (1,0), 1);

      //////////////////////////// Right interferer link
      devices5 = pointToPointGood.Install (interferer1.Get (i), routers1.Get (i));
      setQueueSize (devices5, 0, largeQueueSize);
      setQueueSize (devices5, 1, largeQueueSize);
      // assign ip addresses
      Ipv4InterfaceContainer if5 = address5.Assign (devices5);
      address5.NewNetwork ();
      // setup ip routes
      cmd_oss.str ("");
      cmd_oss << "route add 10.5." << i << ".0/24 dev sim2 scope link";
      LinuxStackHelper::RunIp (routers1.Get (i), Seconds (0.1), cmd_oss.str ().c_str ());
      ipv4Interferer = interferer1.Get (i)->GetObject<Ipv4> ();
      staticRouting = ipv4RoutingHelper.GetStaticRouting (ipv4Interferer);
      ss.str ("");
      ss << "10.5." << i << ".0";
      staticRouting->AddNetworkRouteTo (Ipv4Address (ss.str ().c_str ()), Ipv4Mask("255.255.255.0"), Ipv4Address ("0.0.0.0"), 1);
      ss.str ("");
      ss << "10.4." << i << ".0";
      staticRouting->AddNetworkRouteTo (Ipv4Address (ss.str ().c_str ()), Ipv4Mask("255.255.255.0"), if5.GetAddress (1,0), 1);
  }

  ///////////////////////////// Rightmost link
  // install point-to-point channel
  devices3 = pointToPointGood.Install (routers2.Get (0), nodes.Get (1));
  setQueueSize (devices3, 0, largeQueueSize);
  setQueueSize (devices3, 1, largeQueueSize);
  // assign ip addresses
  Ipv4InterfaceContainer if3 = address3.Assign (devices3);
  // setup ip routes
  cmd_oss.str ("");
  cmd_oss << "route add 10.3.0.0/24 dev sim" << nRtrs << " scope link";
  LinuxStackHelper::RunIp (routers2.Get (0), Seconds (0.1), cmd_oss.str ().c_str ());
  cmd_oss.str ("");
  cmd_oss << "route add 10.3.0.0/24 dev sim0 scope link";
  LinuxStackHelper::RunIp (nodes.Get (1), Seconds (0.1), cmd_oss.str ().c_str ());
  cmd_oss.str ("");
  cmd_oss << "route add default via 10.3.0.1 dev sim0";
  LinuxStackHelper::RunIp (nodes.Get (1), Seconds (0.1), cmd_oss.str ().c_str ());


  /////////////////////////// Setting node, router, interferer position
  setPos (nodes.Get (0), 0, 30 * (nRtrs - 1) / 2, 0);
  for (uint32_t i = 0; i < nRtrs; i++) {
      setPos (routers0.Get (i), 20, i * 30, 0);
      setPos (routers1.Get (i), 70, i * 30, 0);
      setPos (interferer0.Get (i), 20, i * 30 + 10, 0);
      setPos (interferer1.Get (i), 70, i * 30 + 10, 0);
  }
  setPos (routers2.Get (0), 90, 30 * (nRtrs - 1) / 2, 0);
  setPos (nodes.Get (1), 140, 30 * (nRtrs - 1) / 2, 0);



  // address show
  LinuxStackHelper::RunIp (nodes.Get (0), Seconds (0.2), "address show");
  LinuxStackHelper::RunIp (nodes.Get (1), Seconds (0.2), "address show");
  for (uint32_t i = 0; i < nRtrs; i++) {
      LinuxStackHelper::RunIp (routers0.Get (i), Seconds (0.2), "address show");
      LinuxStackHelper::RunIp (routers1.Get (i), Seconds (0.2), "address show");
  }
  LinuxStackHelper::RunIp (routers2.Get (0), Seconds (0.2), "address show");

  // rule show
  LinuxStackHelper::RunIp (nodes.Get (0), Seconds (0.2), "rule show");
  LinuxStackHelper::RunIp (nodes.Get (1), Seconds (0.2), "rule show");
  for (uint32_t i = 0; i < nRtrs; i++) {
      LinuxStackHelper::RunIp (routers0.Get (i), Seconds (0.2), "rule show");
      LinuxStackHelper::RunIp (routers1.Get (i), Seconds (0.2), "rule show");
  }
  LinuxStackHelper::RunIp (routers2.Get (0), Seconds (0.2), "rule show");

  // route show
  LinuxStackHelper::RunIp (nodes.Get (0), Seconds (0.2), "route show table main");
  LinuxStackHelper::RunIp (nodes.Get (1), Seconds (0.2), "route show table main");
  for (uint32_t i = 0; i < nRtrs; i++) {
      LinuxStackHelper::RunIp (routers0.Get (i), Seconds (0.2), "route show table main");
      LinuxStackHelper::RunIp (routers1.Get (i), Seconds (0.2), "route show table main");
  }
  LinuxStackHelper::RunIp (routers2.Get (0), Seconds (0.2), "route show table main");
  for (uint32_t i = 0; i < nRtrs; i++) {
      cmd_oss.str ("");
      cmd_oss << "route show table " << (i+1);
      LinuxStackHelper::RunIp (nodes.Get (0), Seconds (0.2), cmd_oss.str ().c_str ());
  }

  // setting intereferer UDP application
  for (uint32_t i = 0; i < nRtrs; i++) {
      uint16_t port = 4000;
      uint32_t MaxPacketSize;
      Time interPacketInterval;
      uint32_t maxPacketCount;
      // setting udp server
      UdpServerHelper server (port);
      ApplicationContainer apps = server.Install (interferer1.Get (i));
      apps.Start (Seconds (1.0));
      apps.Stop (Seconds (35.0));
      // setting destination ip address for the udp client
      std::string st;
      ss.str ("");
      ss << "10.5." << i << ".1";
      UdpClientHelper client (Ipv4Address (ss.str ().c_str ()), port);
      // setting data rate
      if (idr.length () != 0) st = strOps (&idr);
      else st = "0";
      uint32_t rate = (uint32_t)std::atoi(st.c_str()); // Mbps
      if (rate != 0) {
          MaxPacketSize = 972; // bytes
          interPacketInterval = Seconds (((double)(MaxPacketSize+28)*8)/((double)rate*1000000));
          maxPacketCount = 1000000000;
      } else {
          MaxPacketSize = 972;
          interPacketInterval = Seconds(0);
          maxPacketCount = 0;
      }
      client.SetAttribute ("MaxPackets", UintegerValue (maxPacketCount));
      client.SetAttribute ("Interval", TimeValue (interPacketInterval));
      client.SetAttribute ("PacketSize", UintegerValue (MaxPacketSize));
      apps = client.Install (interferer0.Get (i));
      apps.Start (Seconds (2.0));
      apps.Stop (Seconds (33.0));
  }

  // iperf application
  DceApplicationHelper dce;
  ApplicationContainer apps;

  dce.SetStackSize (1 << 20);

  // Launch iperf client on node 0
  dce.SetBinary ("iperf");
  dce.ResetArguments ();
  dce.ResetEnvironment ();
  dce.AddArgument ("-c");
  dce.AddArgument ("10.3.0.2");
  dce.AddArgument ("-i");
  dce.AddArgument ("1");
  dce.AddArgument ("--time");
  dce.AddArgument ("32");

  apps = dce.Install (nodes.Get (0));
  apps.Start (Seconds (2.0));
  apps.Stop (Seconds (33));

  // Launch iperf server on node 1
  dce.SetBinary ("iperf");
  dce.ResetArguments ();
  dce.ResetEnvironment ();
  dce.AddArgument ("-s");
  dce.AddArgument ("-P");
  dce.AddArgument ("1");
  apps = dce.Install (nodes.Get (1));

  pointToPoint.EnablePcapAll ("iperf-mptcp", false);

  apps.Start (Seconds (1));


  Simulator::Stop (Seconds (35));
  Simulator::Run ();
  Simulator::Destroy ();

  return 0;
}
