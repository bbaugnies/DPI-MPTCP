# This file was automatically generated by bifcl from /home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/radius/events.bif (plugin mode).

## Generated for RADIUS messages.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/RADIUS>`__ for more
## information about RADIUS.
##
## c: The connection.
##
## result: A record containing fields parsed from a RADIUS packet.
##
export {
global radius_message: event(c: connection , result: RADIUS::Message );


## Generated for each RADIUS attribute.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/RADIUS>`__ for more
## information about RADIUS.
##
## c: The connection.
##
## attr_type: The value of the code field (1 == User-Name, 2 == User-Password, etc.).
##
## value: The data/value bound to the attribute.
##
global radius_attribute: event(c: connection , attr_type: count , value: string );





} # end of export section
module GLOBAL;
