# This file was automatically generated by bifcl from /home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/login/events.bif (plugin mode).

## Generated for client side commands on an RSH connection.
##
## See :rfc:`1258` for more information about the Rlogin/Rsh protocol.
##
## c: The connection.
##
## client_user: The client-side user name as sent in the initial protocol
##       handshake.
##
## server_user: The server-side user name as sent in the initial protocol
##       handshake.
##
## line: The command line sent in the request.
##
## new_session: True if this is the first command of the Rsh session.
##
## .. bro:see:: rsh_reply login_confused login_confused_text login_display
##    login_failure login_input_line login_output_line login_prompt login_success
##    login_terminal
##
## .. note:: For historical reasons, these events are separate from the
##    ``login_`` events. Ideally, they would all be handled uniquely.
##
## .. todo:: Bro's current default configuration does not activate the protocol
##    analyzer that generates this event; the corresponding script has not yet
##    been ported to Bro 2.x. To still enable this event, one needs to
##    register a port for it or add a DPD payload signature.
export {
global rsh_request: event(c: connection , client_user: string , server_user: string , line: string , new_session: bool );


## Generated for client side commands on an RSH connection.
##
## See :rfc:`1258` for more information about the Rlogin/Rsh protocol.
##
## c: The connection.
##
## client_user: The client-side user name as sent in the initial protocol
##       handshake.
##
## server_user: The server-side user name as sent in the initial protocol
##       handshake.
##
## line: The command line sent in the request.
##
## .. bro:see:: rsh_request login_confused login_confused_text login_display
##    login_failure login_input_line login_output_line login_prompt login_success
##    login_terminal
##
## .. note:: For historical reasons, these events are separate from the
##    ``login_`` events. Ideally, they would all be handled uniquely.
##
## .. todo:: Bro's current default configuration does not activate the protocol
##    analyzer that generates this event; the corresponding script has not yet
##    been ported to Bro 2.x. To still enable this event, one needs to
##    register a port for it or add a DPD payload signature.
global rsh_reply: event(c: connection , client_user: string , server_user: string , line: string );


## Generated for Telnet/Rlogin login failures. The *login* analyzer inspects
## Telnet/Rlogin sessions to heuristically extract username and password
## information as well as the text returned by the login server. This event is
## raised if a login attempt appears to have been unsuccessful.
##
## c: The connection.
##
## user: The user name tried.
##
## client_user: For Telnet connections, this is an empty string, but for Rlogin
##       connections, it is the client name passed in the initial authentication
##       information (to check against .rhosts).
##
## password:  The password tried.
##
## line:  The line of text that led the analyzer to conclude that the
##        authentication had failed.
##
## .. bro:see:: login_confused login_confused_text login_display login_input_line
##    login_output_line login_prompt login_success login_terminal direct_login_prompts
##    get_login_state login_failure_msgs login_non_failure_msgs login_prompts login_success_msgs
##    login_timeouts set_login_state
##
## .. note:: The login analyzer depends on a set of script-level variables that
##    need to be configured with patterns identifying login attempts. This
##    configuration has not yet been ported over from Bro 1.5 to Bro 2.x, and
##    the analyzer is therefore not directly usable at the moment.
##
## .. todo:: Bro's current default configuration does not activate the protocol
##    analyzer that generates this event; the corresponding script has not yet
##    been ported to Bro 2.x. To still enable this event, one needs to add a
##    call to :bro:see:`Analyzer::register_for_ports` or a DPD payload
##    signature.
global login_failure: event(c: connection , user: string , client_user: string , password: string , line: string );


## Generated for successful Telnet/Rlogin logins. The *login* analyzer inspects
## Telnet/Rlogin sessions to heuristically extract username and password
## information as well as the text returned by the login server. This event is
## raised if a login attempt appears to have been successful.
##
## c: The connection.
##
## user: The user name used.
##
## client_user: For Telnet connections, this is an empty string, but for Rlogin
##       connections, it is the client name passed in the initial authentication
##       information (to check against .rhosts).
##
## password: The password used.
##
## line:  The line of text that led the analyzer to conclude that the
##        authentication had succeeded.
##
## .. bro:see:: login_confused login_confused_text login_display login_failure
##    login_input_line login_output_line login_prompt login_terminal
##    direct_login_prompts get_login_state login_failure_msgs login_non_failure_msgs
##    login_prompts login_success_msgs login_timeouts set_login_state
##
## .. note:: The login analyzer depends on a set of script-level variables that
##    need to be configured with patterns identifying login attempts. This
##    configuration has not yet been ported over from Bro 1.5 to Bro 2.x, and
##    the analyzer is therefore not directly usable at the moment.
##
## .. todo:: Bro's current default configuration does not activate the protocol
##    analyzer that generates this event; the corresponding script has not yet
##    been ported to Bro 2.x. To still enable this event, one needs to add a
##    call to :bro:see:`Analyzer::register_for_ports` or a DPD payload
##    signature.
global login_success: event(c: connection , user: string , client_user: string , password: string , line: string );


## Generated for lines of input on Telnet/Rlogin sessions. The line will have
## control characters (such as in-band Telnet options) removed.
##
## c: The connection.
##
## line: The input line.
##
## .. bro:see:: login_confused login_confused_text login_display login_failure
##    login_output_line login_prompt login_success login_terminal    rsh_request
##
## .. todo:: Bro's current default configuration does not activate the protocol
##    analyzer that generates this event; the corresponding script has not yet
##    been ported to Bro 2.x. To still enable this event, one needs to add a
##    call to :bro:see:`Analyzer::register_for_ports` or a DPD payload
##    signature.
global login_input_line: event(c: connection , line: string );


## Generated for lines of output on Telnet/Rlogin sessions. The line will have
## control characters (such as in-band Telnet options) removed.
##
## c: The connection.
##
## line: The ouput line.
##
## .. bro:see:: login_confused login_confused_text login_display login_failure
##    login_input_line  login_prompt login_success login_terminal rsh_reply
##
## .. todo:: Bro's current default configuration does not activate the protocol
##    analyzer that generates this event; the corresponding script has not yet
##    been ported to Bro 2.x. To still enable this event, one needs to add a
##    call to :bro:see:`Analyzer::register_for_ports` or a DPD payload
##    signature.
global login_output_line: event(c: connection , line: string );


## Generated when tracking of Telnet/Rlogin authentication failed. As Bro's
## *login* analyzer uses a number of heuristics to extract authentication
## information, it may become confused. If it can no longer correctly track
## the authentication dialog, it raises this event.
##
## c: The connection.
##
## msg: Gives the particular problem the heuristics detected (for example,
##      ``multiple_login_prompts`` means that the engine saw several login
##      prompts in a row, without the type-ahead from the client side presumed
##      necessary to cause them)
##
## line: The line of text that caused the heuristics to conclude they were
##       confused.
##
## .. bro:see::  login_confused_text login_display login_failure login_input_line login_output_line
##    login_prompt login_success login_terminal direct_login_prompts get_login_state
##    login_failure_msgs login_non_failure_msgs login_prompts login_success_msgs
##    login_timeouts set_login_state
##
## .. todo:: Bro's current default configuration does not activate the protocol
##    analyzer that generates this event; the corresponding script has not yet
##    been ported to Bro 2.x. To still enable this event, one needs to add a
##    call to :bro:see:`Analyzer::register_for_ports` or a DPD payload
##    signature.
global login_confused: event(c: connection , msg: string , line: string );


## Generated after getting confused while tracking a Telnet/Rlogin
## authentication dialog. The *login* analyzer generates this even for every
## line of user input after it has reported :bro:id:`login_confused` for a
## connection.
##
## c: The connection.
##
## line: The line the user typed.
##
## .. bro:see:: login_confused  login_display login_failure login_input_line
##    login_output_line login_prompt login_success login_terminal direct_login_prompts
##    get_login_state login_failure_msgs login_non_failure_msgs login_prompts
##    login_success_msgs login_timeouts set_login_state
##
## .. todo:: Bro's current default configuration does not activate the protocol
##    analyzer that generates this event; the corresponding script has not yet
##    been ported to Bro 2.x. To still enable this event, one needs to add a
##    call to :bro:see:`Analyzer::register_for_ports` or a DPD payload
##    signature.
global login_confused_text: event(c: connection , line: string );


## Generated for clients transmitting a terminal type in a Telnet session.  This
## information is extracted out of environment variables sent as Telnet options.
##
## c: The connection.
##
## terminal: The TERM value transmitted.
##
## .. bro:see:: login_confused login_confused_text login_display login_failure
##    login_input_line login_output_line login_prompt login_success
##
## .. todo:: Bro's current default configuration does not activate the protocol
##    analyzer that generates this event; the corresponding script has not yet
##    been ported to Bro 2.x. To still enable this event, one needs to add a
##    call to :bro:see:`Analyzer::register_for_ports` or a DPD payload
##    signature.
global login_terminal: event(c: connection , terminal: string );


## Generated for clients transmitting an X11 DISPLAY in a Telnet session. This
## information is extracted out of environment variables sent as Telnet options.
##
## c: The connection.
##
## display: The DISPLAY transmitted.
##
## .. bro:see:: login_confused login_confused_text  login_failure login_input_line
##    login_output_line login_prompt login_success login_terminal
##
## .. todo:: Bro's current default configuration does not activate the protocol
##    analyzer that generates this event; the corresponding script has not yet
##    been ported to Bro 2.x. To still enable this event, one needs to add a
##    call to :bro:see:`Analyzer::register_for_ports` or a DPD payload
##    signature.
global login_display: event(c: connection , display: string );


## Generated when a Telnet authentication has been successful. The Telnet
## protocol includes options for negotiating authentication. When such an
## option is sent from client to server and the server replies that it accepts
## the authentication, then the event engine generates this event.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Telnet>`__ for more information
## about the Telnet protocol.
##
## name: The authenticated name.
##
## c: The connection.
##
## .. bro:see::  authentication_rejected authentication_skipped login_success
##
## .. note::  This event inspects the corresponding Telnet option
##    while :bro:id:`login_success` heuristically determines success by watching
##    session data.
##
## .. todo:: Bro's current default configuration does not activate the protocol
##    analyzer that generates this event; the corresponding script has not yet
##    been ported to Bro 2.x. To still enable this event, one needs to add a
##    call to :bro:see:`Analyzer::register_for_ports` or a DPD payload
##    signature.
global authentication_accepted: event(name: string , c: connection );


## Generated when a Telnet authentication has been unsuccessful. The Telnet
## protocol includes options for negotiating authentication. When such an option
## is sent from client to server and the server replies that it did not accept
## the authentication, then the event engine generates this event.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Telnet>`__ for more information
## about the Telnet protocol.
##
## name: The attempted authentication name.
##
## c: The connection.
##
## .. bro:see:: authentication_accepted authentication_skipped login_failure
##
## .. note::  This event inspects the corresponding Telnet option
##    while :bro:id:`login_success` heuristically determines failure by watching
##    session data.
##
## .. todo:: Bro's current default configuration does not activate the protocol
##    analyzer that generates this event; the corresponding script has not yet
##    been ported to Bro 2.x. To still enable this event, one needs to add a
##    call to :bro:see:`Analyzer::register_for_ports` or a DPD payload
##    signature.
global authentication_rejected: event(name: string , c: connection );


## Generated for Telnet/Rlogin sessions when a pattern match indicates
## that no authentication is performed.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Telnet>`__ for more information
## about the Telnet protocol.
##
## c: The connection.
##
## .. bro:see:: authentication_accepted authentication_rejected direct_login_prompts
##    get_login_state login_failure_msgs login_non_failure_msgs login_prompts
##    login_success_msgs login_timeouts set_login_state
##
## .. note:: The login analyzer depends on a set of script-level variables that
##    need to be configured with patterns identifying activity. This
##    configuration has not yet been ported over from Bro 1.5 to Bro 2.x, and
##    the analyzer is therefore not directly usable at the moment.
##
## .. todo:: Bro's current default configuration does not activate the protocol
##    analyzer that generates this event; the corresponding script has not yet
##    been ported to Bro 2.x. To still enable this event, one needs to add a
##    call to :bro:see:`Analyzer::register_for_ports` or a DPD payload
##    signature.
global authentication_skipped: event(c: connection );


## Generated for clients transmitting a terminal prompt in a Telnet session.
## This information is extracted out of environment variables sent as Telnet
## options.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Telnet>`__ for more information
## about the Telnet protocol.
##
## c: The connection.
##
## prompt: The TTYPROMPT transmitted.
##
## .. bro:see:: login_confused login_confused_text login_display login_failure
##    login_input_line login_output_line  login_success login_terminal
##
## .. todo:: Bro's current default configuration does not activate the protocol
##    analyzer that generates this event; the corresponding script has not yet
##    been ported to Bro 2.x. To still enable this event, one needs to add a
##    call to :bro:see:`Analyzer::register_for_ports` or a DPD payload
##    signature.
global login_prompt: event(c: connection , prompt: string );


## Generated for Telnet sessions when encryption is activated. The Telnet
## protocol includes options for negotiating encryption. When such a series of
## options is successfully negotiated, the event engine generates this event.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Telnet>`__ for more information
## about the Telnet protocol.
##
## c: The connection.
##
## .. bro:see:: authentication_accepted authentication_rejected authentication_skipped
##    login_confused login_confused_text login_display login_failure login_input_line
##    login_output_line login_prompt login_success login_terminal
global activating_encryption: event(c: connection );


## Generated for an inconsistent Telnet option. Telnet options are specified
## by the client and server stating which options they are willing to
## support vs. which they are not, and then instructing one another which in
## fact they should or should not use for the current connection. If the event
## engine sees a peer violate either what the other peer has instructed it to
## do, or what it itself offered in terms of options in the past, then the
## engine generates this event.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Telnet>`__ for more information
## about the Telnet protocol.
##
## c: The connection.
##
## .. bro:see:: bad_option bad_option_termination  authentication_accepted
##    authentication_rejected authentication_skipped login_confused
##    login_confused_text login_display login_failure login_input_line
##    login_output_line login_prompt login_success login_terminal
global inconsistent_option: event(c: connection );


## Generated for an ill-formed or unrecognized Telnet option.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Telnet>`__ for more information
## about the Telnet protocol.
##
## c: The connection.
##
## .. bro:see:: inconsistent_option bad_option_termination authentication_accepted
##    authentication_rejected authentication_skipped login_confused
##    login_confused_text login_display login_failure login_input_line
##    login_output_line login_prompt login_success login_terminal
##
## .. todo:: Bro's current default configuration does not activate the protocol
##    analyzer that generates this event; the corresponding script has not yet
##    been ported to Bro 2.x. To still enable this event, one needs to add a
##    call to :bro:see:`Analyzer::register_for_ports` or a DPD payload
##    signature.
global bad_option: event(c: connection );


## Generated for a Telnet option that's incorrectly terminated.
##
## See `Wikipedia <http://en.wikipedia.org/wiki/Telnet>`__ for more information
## about the Telnet protocol.
##
## c: The connection.
##
## .. bro:see:: inconsistent_option bad_option authentication_accepted
##    authentication_rejected authentication_skipped login_confused
##    login_confused_text login_display login_failure login_input_line
##    login_output_line login_prompt login_success login_terminal
##
## .. todo:: Bro's current default configuration does not activate the protocol
##    analyzer that generates this event; the corresponding script has not yet
##    been ported to Bro 2.x. To still enable this event, one needs to add a
##    call to :bro:see:`Analyzer::register_for_ports` or a DPD payload
##    signature.
global bad_option_termination: event(c: connection );

} # end of export section
module GLOBAL;
