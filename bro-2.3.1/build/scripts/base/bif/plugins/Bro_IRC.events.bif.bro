# This file was automatically generated by bifcl from /home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/irc/events.bif (plugin mode).


## Generated for all client-side IRC commands.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Internet_Relay_Chat>`__ for more
## information about the IRC protocol.
##
## c: The connection.
##
## is_orig: Always true.
##
## prefix: The optional prefix coming with the command. IRC uses the prefix to
##         indicate the true origin of a message.
##
## command: The command.
##
## arguments: The arguments for the command.
##
## .. bro:see:: irc_channel_info irc_channel_topic irc_dcc_message irc_error_message
##    irc_global_users irc_invalid_nick irc_invite_message irc_join_message
##    irc_kick_message irc_message irc_mode_message irc_names_info irc_network_info
##    irc_nick_message irc_notice_message irc_oper_message irc_oper_response
##    irc_part_message irc_password_message
##
## .. note:: This event is generated only for messages that originate
##    at the client-side. Commands coming in from remote trigger
##    the :bro:id:`irc_message` event instead.
export {
global irc_request: event(c: connection , is_orig: bool , prefix: string , command: string , arguments: string );


## Generated for all IRC replies. IRC replies are sent in response to a
## request and come with a reply code.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Internet_Relay_Chat>`__ for more
## information about the IRC protocol.
##
## c: The connection.
##
## is_orig: True if the command was sent by the originator of the TCP
##          connection.
##
## prefix: The optional prefix coming with the reply. IRC uses the prefix to
##         indicate the true origin of a message.
##
## code: The reply code, as specified by the protocol.
##
## params: The reply's parameters.
##
## .. bro:see:: irc_channel_info irc_channel_topic irc_dcc_message irc_error_message
##    irc_global_users irc_invalid_nick irc_invite_message irc_join_message
##    irc_kick_message irc_message irc_mode_message irc_names_info irc_network_info
##    irc_nick_message irc_notice_message irc_oper_message irc_oper_response
##    irc_part_message irc_password_message
global irc_reply: event(c: connection , is_orig: bool , prefix: string , code: count , params: string );


## Generated for IRC commands forwarded from the server to the client.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Internet_Relay_Chat>`__ for more
## information about the IRC protocol.
##
## c: The connection.
##
## is_orig: Always false.
##
## prefix: The optional prefix coming with the command. IRC uses the prefix to
##         indicate the true origin of a message.
##
## command: The command.
##
## message: TODO.
##
## .. bro:see:: irc_channel_info irc_channel_topic irc_dcc_message irc_error_message
##    irc_global_users irc_invalid_nick irc_invite_message irc_join_message
##    irc_kick_message  irc_mode_message irc_names_info irc_network_info
##    irc_nick_message irc_notice_message irc_oper_message irc_oper_response
##    irc_part_message irc_password_message
##
## .. note::
##
##    This event is generated only for messages that are forwarded by the server
##    to the client. Commands coming from client trigger the
##    :bro:id:`irc_request` event instead.
global irc_message: event(c: connection , is_orig: bool , prefix: string , command: string , message: string );


## Generated for IRC messages of type *quit*. This event is generated for
## messages coming from both the client and the server.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Internet_Relay_Chat>`__ for more
## information about the IRC protocol.
##
## c: The connection.
##
## is_orig: True if the command was sent by the originator of the TCP
##          connection.
##
## nick: The nickname coming with the message.
##
## message: The text included with the message.
##
## .. bro:see:: irc_channel_info irc_channel_topic irc_dcc_message irc_error_message
##    irc_global_users irc_invalid_nick irc_invite_message irc_join_message
##    irc_kick_message irc_message irc_mode_message irc_names_info irc_network_info
##    irc_nick_message irc_notice_message irc_oper_message irc_oper_response
##    irc_part_message irc_password_message
global irc_quit_message: event(c: connection , is_orig: bool , nick: string , message: string );


## Generated for IRC messages of type *privmsg*. This event is generated for
## messages coming from both the client and the server.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Internet_Relay_Chat>`__ for more
## information about the IRC protocol.
##
## c: The connection.
##
## is_orig: True if the command was sent by the originator of the TCP
##          connection.
##
## source: The source of the private communication.
##
## target: The target of the private communication.
##
## message: The text of communication.
##
## .. bro:see:: irc_channel_info irc_channel_topic irc_dcc_message irc_error_message
##    irc_global_users irc_invalid_nick irc_invite_message irc_join_message
##    irc_kick_message irc_message irc_mode_message irc_names_info irc_network_info
##    irc_nick_message irc_notice_message irc_oper_message irc_oper_response
##    irc_part_message irc_password_message
global irc_privmsg_message: event(c: connection , is_orig: bool , source: string , target: string , message: string );


## Generated for IRC messages of type *notice*. This event is generated for
## messages coming from both the client and the server.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Internet_Relay_Chat>`__ for more
## information about the IRC protocol.
##
## c: The connection.
##
## is_orig: True if the command was sent by the originator of the TCP
##          connection.
##
## source: The source of the private communication.
##
## target: The target of the private communication.
##
## message: The text of communication.
##
## .. bro:see:: irc_channel_info irc_channel_topic irc_dcc_message irc_error_message
##    irc_global_users irc_invalid_nick irc_invite_message irc_join_message
##    irc_kick_message irc_message irc_mode_message irc_names_info irc_network_info
##    irc_nick_message  irc_oper_message irc_oper_response irc_part_message
##    irc_password_message
global irc_notice_message: event(c: connection , is_orig: bool , source: string , target: string , message: string );


## Generated for IRC messages of type *squery*. This event is generated for
## messages coming from both the client and the server.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Internet_Relay_Chat>`__ for more
## information about the IRC protocol.
##
## c: The connection.
##
## is_orig: True if the command was sent by the originator of the TCP
##          connection.
##
## source: The source of the private communication.
##
## target: The target of the private communication.
##
## message: The text of communication.
##
## .. bro:see:: irc_channel_info irc_channel_topic irc_dcc_message irc_error_message
##    irc_global_users irc_invalid_nick irc_invite_message irc_join_message
##    irc_kick_message irc_message irc_mode_message irc_names_info irc_network_info
##    irc_nick_message irc_notice_message irc_oper_message irc_oper_response
##    irc_part_message irc_password_message
global irc_squery_message: event(c: connection , is_orig: bool , source: string , target: string , message: string );


## Generated for IRC messages of type *join*. This event is generated for
## messages coming from both the client and the server.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Internet_Relay_Chat>`__ for more
## information about the IRC protocol.
##
## c: The connection.
##
## is_orig: True if the command was sent by the originator of the TCP
##          connection.
##
## info_list: The user information coming with the command.
##
## .. bro:see:: irc_channel_info irc_channel_topic irc_dcc_message irc_error_message
##    irc_global_users irc_invalid_nick irc_invite_message irc_kick_message
##    irc_message irc_mode_message irc_names_info irc_network_info irc_nick_message
##    irc_notice_message irc_oper_message irc_oper_response irc_part_message
##    irc_password_message
global irc_join_message: event(c: connection , is_orig: bool , info_list: irc_join_list );


## Generated for IRC messages of type *part*. This event is generated for
## messages coming from both the client and the server.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Internet_Relay_Chat>`__ for more
## information about the IRC protocol.
##
## c: The connection.
##
## is_orig: True if the command was sent by the originator of the TCP
##          connection.
##
## nick: The nickname coming with the message.
##
## chans: The set of channels affected.
##
## message: The text coming with the message.
##
## .. bro:see:: irc_channel_info irc_channel_topic irc_dcc_message irc_error_message
##    irc_global_users irc_invalid_nick irc_invite_message irc_join_message
##    irc_kick_message irc_message irc_mode_message irc_names_info irc_network_info
##    irc_nick_message irc_notice_message irc_oper_message irc_oper_response
##    irc_password_message
global irc_part_message: event(c: connection , is_orig: bool , nick: string , chans: string_set , message: string );


## Generated for IRC messages of type *nick*. This event is generated for
## messages coming from both the client and the server.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Internet_Relay_Chat>`__ for more
## information about the IRC protocol.
##
## c: The connection.
##
## is_orig: True if the command was sent by the originator of the TCP
##          connection.
##
## who: The user changing its nickname.
##
## newnick: The new nickname.
##
## .. bro:see:: irc_channel_info irc_channel_topic irc_dcc_message irc_error_message
##    irc_global_users irc_invalid_nick irc_invite_message irc_join_message
##    irc_kick_message irc_message irc_mode_message irc_names_info irc_network_info
##    irc_notice_message irc_oper_message irc_oper_response irc_part_message
##    irc_password_message
global irc_nick_message: event(c: connection , is_orig: bool , who: string , newnick: string );


## Generated when a server rejects an IRC nickname.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Internet_Relay_Chat>`__ for more
## information about the IRC protocol.
##
## c: The connection.
##
## is_orig: True if the command was sent by the originator of the TCP
##          connection.
##
## .. bro:see:: irc_channel_info irc_channel_topic irc_dcc_message irc_error_message
##    irc_global_users  irc_invite_message irc_join_message irc_kick_message
##    irc_message irc_mode_message irc_names_info irc_network_info irc_nick_message
##    irc_notice_message irc_oper_message irc_oper_response irc_part_message
##    irc_password_message
global irc_invalid_nick: event(c: connection , is_orig: bool );


## Generated for an IRC reply of type *luserclient*.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Internet_Relay_Chat>`__ for more
## information about the IRC protocol.
##
## c: The connection.
##
## is_orig: True if the command was sent by the originator of the TCP
##          connection.
##
## users: The number of users as returned in the reply.
##
## services: The number of services as returned in the reply.
##
## servers: The number of servers as returned in the reply.
##
## .. bro:see:: irc_channel_info irc_channel_topic irc_dcc_message irc_error_message
##    irc_global_users irc_invalid_nick irc_invite_message irc_join_message
##    irc_kick_message irc_message irc_mode_message irc_names_info irc_nick_message
##    irc_notice_message irc_oper_message irc_oper_response irc_part_message
##    irc_password_message
global irc_network_info: event(c: connection , is_orig: bool , users: count , services: count , servers: count );


## Generated for an IRC reply of type *luserme*.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Internet_Relay_Chat>`__ for more
## information about the IRC protocol.
##
## c: The connection.
##
## is_orig: True if the command was sent by the originator of the TCP
##          connection.
##
## users: The number of users as returned in the reply.
##
## services: The number of services as returned in the reply.
##
## servers: The number of servers as returned in the reply.
##
## .. bro:see:: irc_channel_info irc_channel_topic irc_dcc_message irc_error_message
##    irc_global_users irc_invalid_nick irc_invite_message irc_join_message
##    irc_kick_message irc_message irc_mode_message irc_names_info irc_network_info
##    irc_nick_message irc_notice_message irc_oper_message irc_oper_response
##    irc_part_message irc_password_message
global irc_server_info: event(c: connection , is_orig: bool , users: count , services: count , servers: count );


## Generated for an IRC reply of type *luserchannels*.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Internet_Relay_Chat>`__ for more
## information about the IRC protocol.
##
## c: The connection.
##
## is_orig: True if the command was sent by the originator of the TCP
##          connection.
##
## chans: The number of channels as returned in the reply.
##
## .. bro:see::  irc_channel_topic irc_dcc_message irc_error_message irc_global_users
##    irc_invalid_nick irc_invite_message irc_join_message irc_kick_message
##    irc_message irc_mode_message irc_names_info irc_network_info irc_nick_message
##    irc_notice_message irc_oper_message irc_oper_response irc_part_message
##    irc_password_message
global irc_channel_info: event(c: connection , is_orig: bool , chans: count );


## Generated for an IRC reply of type *whoreply*.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Internet_Relay_Chat>`__ for more
## information about the IRC protocol.
##
## c: The connection.
##
## is_orig: True if the command was sent by the originator of the TCP
##          connection.
##
## target_nick: The target nickname.
##
## channel: The channel.
##
## user: The user.
##
## host: The host.
##
## server: The server.
##
## nick: The nickname.
##
## params: The parameters.
##
## hops: The hop count.
##
## real_name: The real name.
##
## .. bro:see:: irc_channel_info irc_channel_topic irc_dcc_message irc_error_message
##    irc_global_users irc_invalid_nick irc_invite_message irc_join_message
##    irc_kick_message irc_message irc_mode_message irc_names_info irc_network_info
##    irc_nick_message irc_notice_message irc_oper_message irc_oper_response
##    irc_part_message irc_password_message
global irc_who_line: event(c: connection , is_orig: bool , target_nick: string , channel: string , user: string , host: string , server: string , nick: string , params: string , hops: count , real_name: string );



## Generated for an IRC reply of type *namereply*.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Internet_Relay_Chat>`__ for more
## information about the IRC protocol.
##
## c: The connection.
##
## is_orig: True if the command was sent by the originator of the TCP
##          connection.
##
## c_type: The channel type.
##
## channel: The channel.
##
## users: The set of users.
##
## .. bro:see:: irc_channel_info irc_channel_topic irc_dcc_message irc_error_message
##    irc_global_users irc_invalid_nick irc_invite_message irc_join_message
##    irc_kick_message irc_message irc_mode_message  irc_network_info irc_nick_message
##    irc_notice_message irc_oper_message irc_oper_response irc_part_message
##    irc_password_message
global irc_names_info: event(c: connection , is_orig: bool , c_type: string , channel: string , users: string_set );


## Generated for an IRC reply of type *whoisoperator*.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Internet_Relay_Chat>`__ for more
## information about the IRC protocol.
##
## c: The connection.
##
## is_orig: True if the command was sent by the originator of the TCP
##          connection.
##
## nick: The nickname specified in the reply.
##
## .. bro:see:: irc_channel_info irc_channel_topic irc_dcc_message irc_error_message
##    irc_global_users irc_invalid_nick irc_invite_message irc_join_message
##    irc_kick_message irc_message irc_mode_message irc_names_info irc_network_info
##    irc_nick_message irc_notice_message irc_oper_message irc_oper_response
##    irc_part_message irc_password_message
global irc_whois_operator_line: event(c: connection , is_orig: bool , nick: string );


## Generated for an IRC reply of type *whoischannels*.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Internet_Relay_Chat>`__ for more
## information about the IRC protocol.
##
## c: The connection.
##
## is_orig: True if the command was sent by the originator of the TCP
##          connection.
##
## nick: The nickname specified in the reply.
##
## chans: The set of channels returned.
##
## .. bro:see:: irc_channel_info irc_channel_topic irc_dcc_message irc_error_message
##    irc_global_users irc_invalid_nick irc_invite_message irc_join_message
##    irc_kick_message irc_message irc_mode_message irc_names_info irc_network_info
##    irc_nick_message irc_notice_message irc_oper_message irc_oper_response
##    irc_part_message irc_password_message
global irc_whois_channel_line: event(c: connection , is_orig: bool , nick: string , chans: string_set );


## Generated for an IRC reply of type *whoisuser*.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Internet_Relay_Chat>`__ for more
## information about the IRC protocol.
##
## c: The connection.
##
## is_orig: True if the command was sent by the originator of the TCP
##          connection.
##
## nick: The nickname specified in the reply.
##
## user: The user name specified in the reply.
##
## host: The host name specified in the reply.
##
## real_name: The real name specified in the reply.
##
## .. bro:see:: irc_channel_info irc_channel_topic irc_dcc_message irc_error_message
##    irc_global_users irc_invalid_nick irc_invite_message irc_join_message
##    irc_kick_message irc_message irc_mode_message irc_names_info irc_network_info
##    irc_nick_message irc_notice_message irc_oper_message irc_oper_response
##    irc_part_message irc_password_message
global irc_whois_user_line: event(c: connection , is_orig: bool , nick: string , user: string , host: string , real_name: string );


## Generated for IRC replies of type *youreoper* and *nooperhost*.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Internet_Relay_Chat>`__ for more
## information about the IRC protocol.
##
## c: The connection.
##
## is_orig: True if the command was sent by the originator of the TCP
##          connection.
##
## got_oper: True if the *oper* command was executed successfully
##           (*youreport*) and false otherwise (*nooperhost*).
##
## .. bro:see:: irc_channel_info irc_channel_topic irc_dcc_message irc_error_message
##    irc_global_users irc_invalid_nick irc_invite_message irc_join_message
##    irc_kick_message irc_message irc_mode_message irc_names_info irc_network_info
##    irc_nick_message irc_notice_message irc_oper_message irc_part_message
##    irc_password_message
global irc_oper_response: event(c: connection , is_orig: bool , got_oper: bool );


## Generated for an IRC reply of type *globalusers*.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Internet_Relay_Chat>`__ for more
## information about the IRC protocol.
##
## c: The connection.
##
## is_orig: True if the command was sent by the originator of the TCP
##          connection.
##
## prefix: The optional prefix coming with the command. IRC uses the prefix to
##         indicate the true origin of a message.
##
## msg: The message coming with the reply.
##
## .. bro:see:: irc_channel_info irc_channel_topic irc_dcc_message irc_error_message
##    irc_invalid_nick irc_invite_message irc_join_message irc_kick_message
##    irc_message irc_mode_message irc_names_info irc_network_info irc_nick_message
##    irc_notice_message irc_oper_message irc_oper_response irc_part_message
##    irc_password_message
global irc_global_users: event(c: connection , is_orig: bool , prefix: string , msg: string );


## Generated for an IRC reply of type *topic*.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Internet_Relay_Chat>`__ for more
## information about the IRC protocol.
##
## c: The connection.
##
## is_orig: True if the command was sent by the originator of the TCP
##          connection.
##
## channel: The channel name specified in the reply.
##
## topic: The topic specified in the reply.
##
## .. bro:see:: irc_channel_info  irc_dcc_message irc_error_message irc_global_users
##    irc_invalid_nick irc_invite_message irc_join_message irc_kick_message
##    irc_message irc_mode_message irc_names_info irc_network_info irc_nick_message
##    irc_notice_message irc_oper_message irc_oper_response irc_part_message
##    irc_password_message
global irc_channel_topic: event(c: connection , is_orig: bool , channel: string , topic: string );


## Generated for IRC messages of type *who*. This event is generated for
## messages coming from both the client and the server.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Internet_Relay_Chat>`__ for more
## information about the IRC protocol.
##
## c: The connection.
##
## is_orig: True if the command was sent by the originator of the TCP
##          connection.
##
## mask: The mask specified in the message.
##
## oper: True if the operator flag was set.
##
## .. bro:see:: irc_channel_info irc_channel_topic irc_dcc_message irc_error_message
##    irc_global_users irc_invalid_nick irc_invite_message irc_join_message
##    irc_kick_message irc_message irc_mode_message irc_names_info irc_network_info
##    irc_nick_message irc_notice_message irc_oper_message irc_oper_response
##    irc_part_message irc_password_message
global irc_who_message: event(c: connection , is_orig: bool , mask: string , oper: bool );


## Generated for IRC messages of type *whois*. This event is generated for
## messages coming from both the client and the server.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Internet_Relay_Chat>`__ for more
## information about the IRC protocol.
##
## c: The connection.
##
## is_orig: True if the command was sent by the originator of the TCP
##          connection.
##
## server: TODO.
##
## users: TODO.
##
## .. bro:see:: irc_channel_info irc_channel_topic irc_dcc_message irc_error_message
##    irc_global_users irc_invalid_nick irc_invite_message irc_join_message
##    irc_kick_message irc_message irc_mode_message irc_names_info irc_network_info
##    irc_nick_message irc_notice_message irc_oper_message irc_oper_response
##    irc_part_message irc_password_message
global irc_whois_message: event(c: connection , is_orig: bool , server: string , users: string );


## Generated for IRC messages of type *oper*. This event is generated for
## messages coming from both the client and the server.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Internet_Relay_Chat>`__ for more
## information about the IRC protocol.
##
## c: The connection.
##
## is_orig: True if the command was sent by the originator of the TCP
##          connection.
##
## user: The user specified in the message.
##
## password: The password specified in the message.
##
## .. bro:see:: irc_channel_info irc_channel_topic irc_dcc_message irc_error_message
##    irc_global_users irc_invalid_nick irc_invite_message irc_join_message
##    irc_kick_message irc_message irc_mode_message irc_names_info irc_network_info
##    irc_nick_message irc_notice_message  irc_oper_response irc_part_message
##    irc_password_message
global irc_oper_message: event(c: connection , is_orig: bool , user: string , password: string );


## Generated for IRC messages of type *kick*. This event is generated for
## messages coming from both the client and the server.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Internet_Relay_Chat>`__ for more
## information about the IRC protocol.
##
## c: The connection.
##
## is_orig: True if the command was sent by the originator of the TCP
##          connection.
##
## prefix: The optional prefix coming with the command. IRC uses the prefix to
##         indicate the true origin of a message.
##
## chans: The channels specified in the message.
##
## users: The users specified in the message.
##
## comment: The comment specified in the message.
##
## .. bro:see:: irc_channel_info irc_channel_topic irc_dcc_message irc_error_message
##    irc_global_users irc_invalid_nick irc_invite_message irc_join_message
##    irc_message irc_mode_message irc_names_info irc_network_info irc_nick_message
##    irc_notice_message irc_oper_message irc_oper_response irc_part_message
##    irc_password_message
global irc_kick_message: event(c: connection , is_orig: bool , prefix: string , chans: string , users: string , comment: string );


## Generated for IRC messages of type *error*. This event is generated for
## messages coming from both the client and the server.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Internet_Relay_Chat>`__ for more
## information about the IRC protocol.
##
## c: The connection.
##
## is_orig: True if the command was sent by the originator of the TCP
##          connection.
##
## prefix: The optional prefix coming with the command. IRC uses the prefix to
##         indicate the true origin of a message.
##
## message: The textual description specified in the message.
##
## .. bro:see:: irc_channel_info irc_channel_topic irc_dcc_message irc_global_users
##    irc_invalid_nick irc_invite_message irc_join_message irc_kick_message
##    irc_message irc_mode_message irc_names_info irc_network_info irc_nick_message
##    irc_notice_message irc_oper_message irc_oper_response irc_part_message
##    irc_password_message
global irc_error_message: event(c: connection , is_orig: bool , prefix: string , message: string );


## Generated for IRC messages of type *invite*. This event is generated for
## messages coming from both the client and the server.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Internet_Relay_Chat>`__ for more
## information about the IRC protocol.
##
## c: The connection.
##
## is_orig: True if the command was sent by the originator of the TCP
##          connection.
##
## prefix: The optional prefix coming with the command. IRC uses the prefix to
##         indicate the true origin of a message.
##
## nickname: The nickname specified in the message.
##
## channel: The channel specified in the message.
##
## .. bro:see:: irc_channel_info irc_channel_topic irc_dcc_message irc_error_message
##    irc_global_users irc_invalid_nick  irc_join_message irc_kick_message
##    irc_message irc_mode_message irc_names_info irc_network_info irc_nick_message
##    irc_notice_message irc_oper_message irc_oper_response irc_part_message
##    irc_password_message
global irc_invite_message: event(c: connection , is_orig: bool , prefix: string , nickname: string , channel: string );


## Generated for IRC messages of type *mode*. This event is generated for
## messages coming from both the client and the server.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Internet_Relay_Chat>`__ for more
## information about the IRC protocol.
##
## c: The connection.
##
## is_orig: True if the command was sent by the originator of the TCP
##          connection.
##
## prefix: The optional prefix coming with the command. IRC uses the prefix to
##         indicate the true origin of a message.
##
## params: The parameters coming with the message.
##
## .. bro:see:: irc_channel_info irc_channel_topic irc_dcc_message irc_error_message
##    irc_global_users irc_invalid_nick irc_invite_message irc_join_message
##    irc_kick_message irc_message  irc_names_info irc_network_info irc_nick_message
##    irc_notice_message irc_oper_message irc_oper_response irc_part_message
##    irc_password_message
global irc_mode_message: event(c: connection , is_orig: bool , prefix: string , params: string );


## Generated for IRC messages of type *squit*. This event is generated for
## messages coming from both the client and the server.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Internet_Relay_Chat>`__ for more
## information about the IRC protocol.
##
## c: The connection.
##
## is_orig: True if the command was sent by the originator of the TCP
##          connection.
##
## prefix: The optional prefix coming with the command. IRC uses the prefix to
##         indicate the true origin of a message.
##
## server: The server specified in the message.
##
## message: The textual description specified in the message.
##
## .. bro:see:: irc_channel_info irc_channel_topic irc_dcc_message irc_error_message
##    irc_global_users irc_invalid_nick irc_invite_message irc_join_message
##    irc_kick_message irc_message irc_mode_message irc_names_info irc_network_info
##    irc_nick_message irc_notice_message irc_oper_message irc_oper_response
##    irc_part_message irc_password_message
global irc_squit_message: event(c: connection , is_orig: bool , prefix: string , server: string , message: string );


## Generated for IRC messages of type *dcc*. This event is generated for
## messages coming from both the client and the server.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Internet_Relay_Chat>`__ for more
## information about the IRC protocol.
##
## c: The connection.
##
## is_orig: True if the command was sent by the originator of the TCP
##          connection.
##
## prefix: The optional prefix coming with the command. IRC uses the prefix to
##         indicate the true origin of a message.
##
## target: The target specified in the message.
##
## dcc_type: The DCC type specified in the message.
##
## argument:  The argument specified in the message.
##
## address: The address specified in the message.
##
## dest_port: The destination port specified in the message.
##
## size: The size specified in the message.
##
## .. bro:see:: irc_channel_info irc_channel_topic  irc_error_message irc_global_users
##    irc_invalid_nick irc_invite_message irc_join_message irc_kick_message
##    irc_message irc_mode_message irc_names_info irc_network_info irc_nick_message
##    irc_notice_message irc_oper_message irc_oper_response irc_part_message
##    irc_password_message
global irc_dcc_message: event(c: connection , is_orig: bool , prefix: string , target: string , dcc_type: string , argument: string , address: addr , dest_port: count , size: count );


## Generated for IRC messages of type *user*. This event is generated for
## messages coming from both the client and the server.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Internet_Relay_Chat>`__ for more
## information about the IRC protocol.
##
## c: The connection.
##
## is_orig: True if the command was sent by the originator of the TCP
##          connection.
##
## user: The user specified in the message.
##
## host: The host name specified in the message.
##
## server: The server name specified in the message.
##
## real_name: The real name specified in the message.
##
## .. bro:see:: irc_channel_info irc_channel_topic irc_dcc_message irc_error_message
##    irc_global_users irc_invalid_nick irc_invite_message irc_join_message
##    irc_kick_message irc_message irc_mode_message irc_names_info irc_network_info
##    irc_nick_message irc_notice_message irc_oper_message irc_oper_response
##    irc_part_message irc_password_message
global irc_user_message: event(c: connection , is_orig: bool , user: string , host: string , server: string , real_name: string );


## Generated for IRC messages of type *password*. This event is generated for
## messages coming from both the client and the server.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Internet_Relay_Chat>`__ for more
## information about the IRC protocol.
##
## c: The connection.
##
## is_orig: True if the command was sent by the originator of the TCP
##          connection.
##
## password: The password specified in the message.
##
## .. bro:see:: irc_channel_info irc_channel_topic irc_dcc_message irc_error_message
##    irc_global_users irc_invalid_nick irc_invite_message irc_join_message
##    irc_kick_message irc_message irc_mode_message irc_names_info irc_network_info
##    irc_nick_message irc_notice_message irc_oper_message irc_oper_response
##    irc_part_message
global irc_password_message: event(c: connection , is_orig: bool , password: string );

} # end of export section
module GLOBAL;
