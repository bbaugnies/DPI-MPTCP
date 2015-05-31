# DPI-MPTCP
Git repository for the "Deep Packet Inspection and Multipath TCP" master thesis

This project consists of extending the Bro IDS to raise MPTCP-related events, and to use these in script to log MPTCP
traffic and detect odd behavior.

/bro-2.3.1 contains the modified source code for Bro. It is compiled and installed like the release versions.
/Scripts contains various scripts used to test the implementation and explore MPTCP behavior.
/Capture contains packet capture files (both of real a generated traffic) used to test the scripts.
/Text contains the LaTeX code for the thesis.


For more information on Bro and MPTCP, vist:
https://www.bro.org/
http://multipath-tcp.org/
