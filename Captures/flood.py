
#! /usr/bin/env python

from scapy.all import *

import copy
import random
from netaddr.ip import IPNetwork, IPAddress


ip_a = IPAddress('2001::cafe:0') + random.getrandbits(16)



a = rdpcap("mp.pcap")

t = a[16][TCPOption_Timestamp].timestamp_value


b = []
for i in range(0, 10000):
	b.append(copy.deepcopy(a[16]))
	b[i][IPv6].src = str(IPAddress('2001::cafe:0') + random.getrandbits(16))
	b[i][TCPOption_Timestamp].timestamp_value = t + i*10
	del(b[i][TCP].chksum)
	b[i].show2()
	
	
wrpcap("flood.pcap", b)
