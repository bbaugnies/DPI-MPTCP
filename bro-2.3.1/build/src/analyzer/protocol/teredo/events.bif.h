// This file was automatically generated by bifcl from /home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/teredo/events.bif (plugin mode).

#if defined(BRO_IN_NETVAR) || ! defined(_home_benjamin_Bro_bro_2_3_1_build_src_analyzer_protocol_teredo_events_bif)
#ifndef BRO_IN_NETVAR
#ifndef _home_benjamin_Bro_bro_2_3_1_build_src_analyzer_protocol_teredo_events_bif
#define _home_benjamin_Bro_bro_2_3_1_build_src_analyzer_protocol_teredo_events_bif
#include "bro-bif.h"
#endif
#endif

extern EventHandlerPtr teredo_packet; 
namespace BifEvent {  void generate_teredo_packet(analyzer::Analyzer* analyzer, Connection* outer, Val* inner);  } 
extern EventHandlerPtr teredo_authentication; 
namespace BifEvent {  void generate_teredo_authentication(analyzer::Analyzer* analyzer, Connection* outer, Val* inner);  } 
extern EventHandlerPtr teredo_origin_indication; 
namespace BifEvent {  void generate_teredo_origin_indication(analyzer::Analyzer* analyzer, Connection* outer, Val* inner);  } 
extern EventHandlerPtr teredo_bubble; 
namespace BifEvent {  void generate_teredo_bubble(analyzer::Analyzer* analyzer, Connection* outer, Val* inner);  } 

#endif
