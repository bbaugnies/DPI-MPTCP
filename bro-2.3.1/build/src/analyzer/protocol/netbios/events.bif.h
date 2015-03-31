// This file was automatically generated by bifcl from /home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/netbios/events.bif (plugin mode).

#if defined(BRO_IN_NETVAR) || ! defined(_home_benjamin_Bro_bro_2_3_1_build_src_analyzer_protocol_netbios_events_bif)
#ifndef BRO_IN_NETVAR
#ifndef _home_benjamin_Bro_bro_2_3_1_build_src_analyzer_protocol_netbios_events_bif
#define _home_benjamin_Bro_bro_2_3_1_build_src_analyzer_protocol_netbios_events_bif
#include "bro-bif.h"
#endif
#endif

extern EventHandlerPtr netbios_session_message; 
namespace BifEvent {  void generate_netbios_session_message(analyzer::Analyzer* analyzer, Connection* c, int is_orig, bro_uint_t msg_type, bro_uint_t data_len);  } 
extern EventHandlerPtr netbios_session_request; 
namespace BifEvent {  void generate_netbios_session_request(analyzer::Analyzer* analyzer, Connection* c, StringVal* msg);  } 
extern EventHandlerPtr netbios_session_accepted; 
namespace BifEvent {  void generate_netbios_session_accepted(analyzer::Analyzer* analyzer, Connection* c, StringVal* msg);  } 
extern EventHandlerPtr netbios_session_rejected; 
namespace BifEvent {  void generate_netbios_session_rejected(analyzer::Analyzer* analyzer, Connection* c, StringVal* msg);  } 
extern EventHandlerPtr netbios_session_raw_message; 
namespace BifEvent {  void generate_netbios_session_raw_message(analyzer::Analyzer* analyzer, Connection* c, int is_orig, StringVal* msg);  } 
extern EventHandlerPtr netbios_session_ret_arg_resp; 
namespace BifEvent {  void generate_netbios_session_ret_arg_resp(analyzer::Analyzer* analyzer, Connection* c, StringVal* msg);  } 
extern EventHandlerPtr netbios_session_keepalive; 
namespace BifEvent {  void generate_netbios_session_keepalive(analyzer::Analyzer* analyzer, Connection* c, StringVal* msg);  } 

#endif
