# This file was automatically generated by bifcl from /home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/udp/events.bif (plugin mode).

## Generated for each packet sent by a UDP flow's originator. This a potentially
## expensive event due to the volume of UDP traffic and should be used with
## care.
##
## u: The connection record for the corresponding UDP flow.
##
## .. bro:see:: udp_contents udp_reply  udp_session_done
export {
global udp_request: event(u: connection );


## Generated for each packet sent by a UDP flow's responder. This a potentially
## expensive event due to the volume of UDP traffic and should be used with
## care.
##
## u: The connection record for the corresponding UDP flow.
##
## .. bro:see:: udp_contents  udp_request udp_session_done
global udp_reply: event(u: connection );


## Generated for UDP packets to pass on their payload. As the number of UDP
## packets can be very large, this event is normally raised only for those on
## ports configured in :bro:id:`udp_content_delivery_ports_orig` (for packets
## sent by the flow's originator) or :bro:id:`udp_content_delivery_ports_resp`
## (for packets sent by the flow's responder). However, delivery can be enabled
## for all UDP request and reply packets by setting
## :bro:id:`udp_content_deliver_all_orig` or
## :bro:id:`udp_content_deliver_all_resp`, respectively. Note that this
## event is also raised for all matching UDP packets, including empty ones.
##
## u: The connection record for the corresponding UDP flow.
##
## is_orig: True if the event is raised for the originator side.
##
## contents: TODO.
##
## .. bro:see::  udp_reply udp_request udp_session_done
##    udp_content_deliver_all_orig udp_content_deliver_all_resp
##    udp_content_delivery_ports_orig udp_content_delivery_ports_resp
global udp_contents: event(u: connection , is_orig: bool , contents: string );

} # end of export section
module GLOBAL;
