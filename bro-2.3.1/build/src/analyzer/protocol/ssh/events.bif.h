// This file was automatically generated by bifcl from /home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/ssh/events.bif (plugin mode).

#if defined(BRO_IN_NETVAR) || ! defined(_home_benjamin_Bro_bro_2_3_1_build_src_analyzer_protocol_ssh_events_bif)
#ifndef BRO_IN_NETVAR
#ifndef _home_benjamin_Bro_bro_2_3_1_build_src_analyzer_protocol_ssh_events_bif
#define _home_benjamin_Bro_bro_2_3_1_build_src_analyzer_protocol_ssh_events_bif
#include "bro-bif.h"
#endif
#endif

extern EventHandlerPtr ssh_client_version; 
namespace BifEvent {  void generate_ssh_client_version(analyzer::Analyzer* analyzer, Connection* c, StringVal* version);  } 
extern EventHandlerPtr ssh_server_version; 
namespace BifEvent {  void generate_ssh_server_version(analyzer::Analyzer* analyzer, Connection* c, StringVal* version);  } 

#endif
