
#!/bin/bash

#scheduler: 1(proposed), 0(original)
#retx: retransmission of the proposed scheduler, 1(ON), 0(OFF)
#printlog: 1(print), 0(no print)
#nPath: number of paths
#rate: maximum data rate of each path
#delay: delay of each path
#error: packet error rate of each path
#queue: queue length of each path
#mtu: maximum transfer unit (mtu) of all paths
#rbufSize: size of the read buffer of meta socket of mptcp
#wbufSize: size of the write buffer of meta socket of mptcp
#tcpPage: number of pages for tcp sockets
#tcpCC: congestion control algorithm (reno, reno, reno...)
#sndwnd: fixed send window size in bytes (if it is 0, send window size is variable)
#cwnd: fixed congestion window size in # of segments for each path (if it is 0, congestion window size is controlled by the congestion control algorithm)
#scheduleRatio: Fixed schedule ratio of each path. Sum of the schedule ratio should be (number of links) * 10000000. Remove this for automatic schedule ratio control
#interferer: data rate of interferer on each path in Mbps
#Example
#./waf --run "dce-mp -scheduler=1 -retx=1 -printlog=1 -nPath=4 -rate=10Mbps,20Mbps,10Mbps,35Mbps -delay=30ms,40ms,20ms,20ms -error=0.1,0,0.1,0 -queue=10000,10000,10000,10000 -mtu=1500 -rbufSize=80000000 -wbufSize=10000000 -tcpPage=100000 -tcpCC=reno -sndwnd=100000 -cwnd=100,200,300,400 -scheduleRatio=5000000,10000000,15000000,10000000 -interferer=0,5,10,10" --vis
#./waf --run "dce-mp -scheduler=0 -retx=1 -printlog=1 -nPath=4 -rate=10Mbps,30Mbps,10Mbps,35Mbps -delay=100ms,30ms,50ms,20ms -error=0,0,0,0 -queue=10000,10000,10000,10000 -mtu=1500 -rbufSize=1000000 -wbufSize=10000000 -tcpPage=100000 -tcpCC=reno -sndwnd=100000 -cwnd=0,0,0,0 -interferer=5,0,9,10" --vis

#./waf --run "dce-mp -scheduler=1 -retx=0 -printlog=1 -nPath=1 -rate=10Mbps -delay=100ms -error=0 -queue=10000 -mtu=1500 -rbufSize=10000000 -wbufSize=10000000 -tcpPage=1000000 -tcpCC=reno -sndwnd=10000000 -cwnd=10000000 -interferer=0" --vis
#./waf --run "dce-mp -scheduler=1 -retx=1 -printlog=1 -nPath=2 -rate=20Mbps,10Mbps -delay=10ms,15ms -error=0,0 -interferer=2,2 -queue=10000,10000 -mtu=1500 -rbufSize=100000000 -wbufSize=100000000 -tcpPage=100000 -tcpCC=reno -sndwnd=100000 -cwnd=20,20"

#while [ $sndwnd -le 100000 ]; do
#for i in {1..19}
#do
#./waf --run "dce-mp -scheduler=1 -retx=0 -printlog=1 -nPath=2 -rate=20Mbps,10Mbps -delay=10ms,50ms -error=0,0 -queue=10000,10000 -mtu=1500 -rbufSize=100000000 -wbufSize=100000000 -tcpPage=100000 -tcpCC=reno -sndwnd=100000 -cwnd=200,200 -scheduleRatio=`expr 20000000 - $i \* 1000000`,`expr $i \* 1000000` -interferer=2,2"
#./waf --run "dce-mp -scheduler=1 -retx=0 -printlog=1 -nPath=1 -rate=10Mbps -delay=50ms -error=0 -queue=10000 -mtu=1500 -rbufSize=10000000 -wbufSize=10000000 -tcpPage=1000000 -tcpCC=reno -sndwnd=$sndwnd -cwnd=10000000 -interferer=2"
#./waf --run "dce-mp -scheduler=0 -retx=1 -printlog=1 -nPath=2 -rate=20Mbps,10Mbps -delay=10ms,10ms -interferer=0,0 -cwnd=0,0 -error=0,0 -queue=10,10 -mtu=1500 -rbufSize=200000 -wbufSize=200000 -tcpPage=100000 -tcpCC=reno -sndwnd=0"
#mkdir -p ./result
#cp ./files-0/var/log/messages ./result/msg.dat
#cat ./result/msg.dat | grep time > ./result/log.dat
#tail -n 1 ./result/log.dat
#cp ./result/log.dat ~/Dropbox/Laboratory/log.dat
#sndwnd=$((sndwnd + 5000))
#done

for i in {1..10}
do
./waf --run "dce-mp -scheduler=0 -retx=1 -printlog=1 -nPath=2 -rate=20Mbps,10Mbps -delay=10ms,20ms -interferer=0,0 -cwnd=0,0 -error=0,0 -queue=10000000,10000000 -mtu=1500 -rbufSize=`expr $i \* 40000` -wbufSize=`expr $i \* 40000` -tcpPage=100000 -tcpCC=reno -sndwnd=0"
mkdir -p ./result
cp ./files-0/var/log/messages ./result/msg.dat
cat ./result/msg.dat | grep time > ./result/log.dat
tail -n 1 ./result/log.dat
./waf --run "dce-mp -scheduler=1 -retx=1 -printlog=1 -nPath=2 -rate=20Mbps,10Mbps -delay=10ms,20ms -interferer=0,0 -cwnd=0,0 -error=0,0 -queue=10000000,10000000 -mtu=1500 -rbufSize=`expr $i \* 40000` -wbufSize=`expr $i \* 40000` -tcpPage=100000 -tcpCC=reno -sndwnd=0"
mkdir -p ./result
cp ./files-0/var/log/messages ./result/msg.dat
cat ./result/msg.dat | grep time > ./result/log.dat
tail -n 1 ./result/log.dat
done

for i in {1..10}
do
./waf --run "dce-mp -scheduler=0 -retx=1 -printlog=1 -nPath=2 -rate=20Mbps,20Mbps -delay=10ms,80ms -interferer=0,0 -cwnd=0,0 -error=0,0 -queue=10000000,10000000 -mtu=1500 -rbufSize=`expr $i \* 40000` -wbufSize=`expr $i \* 40000` -tcpPage=100000 -tcpCC=reno -sndwnd=0"
mkdir -p ./result
cp ./files-0/var/log/messages ./result/msg.dat
cat ./result/msg.dat | grep time > ./result/log.dat
tail -n 1 ./result/log.dat
./waf --run "dce-mp -scheduler=1 -retx=1 -printlog=1 -nPath=2 -rate=20Mbps,20Mbps -delay=10ms,80ms -interferer=0,0 -cwnd=0,0 -error=0,0 -queue=10000000,10000000 -mtu=1500 -rbufSize=`expr $i \* 40000` -wbufSize=`expr $i \* 40000` -tcpPage=100000 -tcpCC=reno -sndwnd=0"
mkdir -p ./result
cp ./files-0/var/log/messages ./result/msg.dat
cat ./result/msg.dat | grep time > ./result/log.dat
tail -n 1 ./result/log.dat
done
