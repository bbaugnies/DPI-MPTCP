# This file was automatically generated by bifcl from /home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/http/events.bif (plugin mode).


## Generated for HTTP requests. Bro supports persistent and pipelined HTTP
## sessions and raises corresponding events as it parses client/server
## dialogues. This event is generated as soon as a request's initial line has
## been parsed, and before any :bro:id:`http_header` events are raised.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Hypertext_Transfer_Protocol>`__
## for more information about the HTTP protocol.
##
## c: The connection.
##
## method: The HTTP method extracted from the request (e.g., ``GET``, ``POST``).
##
## original_URI: The unprocessed URI as specified in the request.
##
## unescaped_URI: The URI with all percent-encodings decoded.
##
## version: The version number specified in the request (e.g., ``1.1``).
##
## .. bro:see:: http_all_headers http_begin_entity http_content_type http_end_entity
##    http_entity_data http_event http_header http_message_done http_reply http_stats
##    truncate_http_URI
export {
global http_request: event(c: connection , method: string , original_URI: string , unescaped_URI: string , version: string );


## Generated for HTTP replies. Bro supports persistent and pipelined HTTP
## sessions and raises corresponding events as it parses client/server
## dialogues. This event is generated as soon as a reply's initial line has
## been parsed, and before any :bro:id:`http_header` events are raised.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Hypertext_Transfer_Protocol>`__
## for more information about the HTTP protocol.
##
## c: The connection.
##
## version: The version number specified in the reply (e.g., ``1.1``).
##
## code: The numerical response code returned by the server.
##
## reason: The textual description returned by the server along with *code*.
##
## .. bro:see:: http_all_headers http_begin_entity http_content_type http_end_entity
##    http_entity_data http_event http_header http_message_done http_request
##    http_stats
global http_reply: event(c: connection , version: string , code: count , reason: string );


## Generated for HTTP headers. Bro supports persistent and pipelined HTTP
## sessions and raises corresponding events as it parses client/server
## dialogues.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Hypertext_Transfer_Protocol>`__
## for more information about the HTTP protocol.
##
## c: The connection.
##
## is_orig: True if the header was sent by the originator of the TCP connection.
##
## name: The name of the header.
##
## value: The value of the header.
##
## .. bro:see:: http_all_headers http_begin_entity http_content_type http_end_entity
##    http_entity_data http_event  http_message_done http_reply http_request
##    http_stats
##
## .. note:: This event is also raised for headers found in nested body
##    entities.
global http_header: event(c: connection , is_orig: bool , name: string , value: string );


## Generated for HTTP headers, passing on all headers of an HTTP message at
## once. Bro supports persistent and pipelined HTTP sessions and raises
## corresponding events as it parses client/server dialogues.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Hypertext_Transfer_Protocol>`__
## for more information about the HTTP protocol.
##
## c: The connection.
##
## is_orig: True if the header was sent by the originator of the TCP connection.
##
## hlist: A *table* containing all headers extracted from the current entity.
##        The table is indexed by the position of the header (1 for the first,
##        2 for the second, etc.).
##
## .. bro:see::  http_begin_entity http_content_type http_end_entity http_entity_data
##    http_event http_header http_message_done http_reply http_request http_stats
##
## .. note:: This event is also raised for headers found in nested body
##    entities.
global http_all_headers: event(c: connection , is_orig: bool , hlist: mime_header_list );


## Generated when starting to parse an HTTP body entity. This event is generated
## at least once for each non-empty (client or server) HTTP body; and
## potentially more than once if the body contains further nested MIME
## entities. Bro raises this event just before it starts parsing each entity's
## content.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Hypertext_Transfer_Protocol>`__
## for more information about the HTTP protocol.
##
## c: The connection.
##
## is_orig: True if the entity was sent by the originator of the TCP
##          connection.
##
## .. bro:see:: http_all_headers  http_content_type http_end_entity http_entity_data
##    http_event http_header http_message_done http_reply http_request http_stats
##    mime_begin_entity
global http_begin_entity: event(c: connection , is_orig: bool );


## Generated when finishing parsing an HTTP body entity. This event is generated
## at least once for each non-empty (client or server) HTTP body; and
## potentially more than once if the body contains further nested MIME
## entities. Bro raises this event at the point when it has finished parsing an
## entity's content.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Hypertext_Transfer_Protocol>`__
## for more information about the HTTP protocol.
##
## c: The connection.
##
## is_orig: True if the entity was sent by the originator of the TCP
##          connection.
##
## .. bro:see:: http_all_headers http_begin_entity http_content_type http_entity_data
##    http_event http_header http_message_done http_reply http_request
##    http_stats   mime_end_entity
global http_end_entity: event(c: connection , is_orig: bool );


## Generated when parsing an HTTP body entity, passing on the data. This event
## can potentially be raised many times for each entity, each time passing a
## chunk of the data of not further defined size.
##
## A common idiom for using this event is to first *reassemble* the data
## at the scripting layer by concatenating it to a successively growing
## string; and only perform further content analysis once the corresponding
## :bro:id:`http_end_entity` event has been raised. Note, however, that doing so
## can be quite expensive for HTTP tranders. At the very least, one should
## impose an upper size limit on how much data is being buffered.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Hypertext_Transfer_Protocol>`__
## for more information about the HTTP protocol.
##
## c: The connection.
##
## is_orig: True if the entity was sent by the originator of the TCP
##          connection.
##
## length: The length of *data*.
##
## data: One chunk of raw entity data.
##
## .. bro:see:: http_all_headers http_begin_entity http_content_type http_end_entity
##    http_event http_header http_message_done http_reply http_request http_stats
##    mime_entity_data http_entity_data_delivery_size skip_http_data
global http_entity_data: event(c: connection , is_orig: bool , length: count , data: string );


## Generated for reporting an HTTP body's content type.  This event is
## generated at the end of parsing an HTTP header, passing on the MIME
## type as specified by the ``Content-Type`` header. If that header is
## missing, this event is still raised with a default value of ``text/plain``.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Hypertext_Transfer_Protocol>`__
## for more information about the HTTP protocol.
##
## c: The connection.
##
## is_orig: True if the entity was sent by the originator of the TCP
##          connection.
##
## ty: The main type.
##
## subty: The subtype.
##
## .. bro:see:: http_all_headers http_begin_entity  http_end_entity http_entity_data
##    http_event http_header http_message_done http_reply http_request http_stats
##
## .. note:: This event is also raised for headers found in nested body
##    entities.
global http_content_type: event(c: connection , is_orig: bool , ty: string , subty: string );


## Generated once at the end of parsing an HTTP message. Bro supports persistent
## and pipelined HTTP sessions and raises corresponding events as it parses
## client/server dialogues. A "message" is one top-level HTTP entity, such as a
## complete request or reply. Each message can have further nested sub-entities
## inside. This event is raised once all sub-entities belonging to a top-level
## message have been processed (and their corresponding ``http_entity_*`` events
## generated).
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Hypertext_Transfer_Protocol>`__
## for more information about the HTTP protocol.
##
## c: The connection.
##
## is_orig: True if the entity was sent by the originator of the TCP
##          connection.
##
## stat: Further meta information about the message.
##
## .. bro:see:: http_all_headers http_begin_entity http_content_type http_end_entity
##    http_entity_data http_event http_header  http_reply http_request http_stats
global http_message_done: event(c: connection , is_orig: bool , stat: http_message_stat );


## Generated for errors found when decoding HTTP requests or replies.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Hypertext_Transfer_Protocol>`__
## for more information about the HTTP protocol.
##
## c: The connection.
##
## event_type: A string describing the general category of the problem found
##             (e.g., ``illegal format``).
##
## detail: Further more detailed description of the error.
##
## .. bro:see:: http_all_headers http_begin_entity http_content_type http_end_entity
##    http_entity_data  http_header http_message_done http_reply http_request
##    http_stats mime_event
global http_event: event(c: connection , event_type: string , detail: string );


## Generated at the end of an HTTP session to report statistics about it. This
## event is raised after all of an HTTP session's requests and replies have been
## fully processed.
##
## c: The connection.
##
## stats: Statistics summarizing HTTP-level properties of the finished
##        connection.
##
## .. bro:see:: http_all_headers http_begin_entity http_content_type http_end_entity
##    http_entity_data http_event http_header http_message_done http_reply
##    http_request
global http_stats: event(c: connection , stats: http_stats_rec );

} # end of export section
module GLOBAL;
