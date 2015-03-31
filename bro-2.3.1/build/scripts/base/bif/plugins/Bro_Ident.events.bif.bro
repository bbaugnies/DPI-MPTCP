# This file was automatically generated by bifcl from /home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/ident/events.bif (plugin mode).

## Generated for Ident requests.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/ident_protocol>`__ for more
## information about the Ident protocol.
##
## c: The connection.
##
## lport: The request's local port.
##
## rport: The request's remote port.
##
## .. bro:see:: ident_error ident_reply
##
## .. todo:: Bro's current default configuration does not activate the protocol
##    analyzer that generates this event; the corresponding script has not yet
##    been ported to Bro 2.x. To still enable this event, one needs to
##    register a port for it or add a DPD payload signature.
export {
global ident_request: event(c: connection , lport: port , rport: port );


## Generated for Ident replies.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/ident_protocol>`__ for more
## information about the Ident protocol.
##
## c: The connection.
##
## lport: The corresponding request's local port.
##
## rport: The corresponding request's remote port.
##
## user_id: The user id returned by the reply.
##
## system: The operating system returned by the reply.
##
## .. bro:see:: ident_error  ident_request
##
## .. todo:: Bro's current default configuration does not activate the protocol
##    analyzer that generates this event; the corresponding script has not yet
##    been ported to Bro 2.x. To still enable this event, one needs to
##    register a port for it or add a DPD payload signature.
global ident_reply: event(c: connection , lport: port , rport: port , user_id: string , system: string );


## Generated for Ident error replies.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/ident_protocol>`__ for more
## information about the Ident protocol.
##
## c: The connection.
##
## lport: The corresponding request's local port.
##
## rport: The corresponding request's remote port.
##
## line: The error description returned by the reply.
##
## .. bro:see:: ident_reply ident_request
##
## .. todo:: Bro's current default configuration does not activate the protocol
##    analyzer that generates this event; the corresponding script has not yet
##    been ported to Bro 2.x. To still enable this event, one needs to
##    register a port for it or add a DPD payload signature.
global ident_error: event(c: connection , lport: port , rport: port , line: string );


} # end of export section
module GLOBAL;
