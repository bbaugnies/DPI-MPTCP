// This file was automatically generated by bifcl from /home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/stepping-stone/events.bif (plugin mode).

#if defined(BRO_IN_NETVAR) || ! defined(_home_benjamin_Bro_bro_2_3_1_build_src_analyzer_protocol_stepping_stone_events_bif)
#ifndef BRO_IN_NETVAR
#ifndef _home_benjamin_Bro_bro_2_3_1_build_src_analyzer_protocol_stepping_stone_events_bif
#define _home_benjamin_Bro_bro_2_3_1_build_src_analyzer_protocol_stepping_stone_events_bif
#include "bro-bif.h"
#endif
#endif

extern EventHandlerPtr stp_create_endp; 
namespace BifEvent {  void generate_stp_create_endp(analyzer::Analyzer* analyzer, Connection* c, bro_int_t e, int is_orig);  } 
extern EventHandlerPtr stp_resume_endp; 
namespace BifEvent {  void generate_stp_resume_endp(analyzer::Analyzer* analyzer, bro_int_t e);  } 
extern EventHandlerPtr stp_correlate_pair; 
namespace BifEvent {  void generate_stp_correlate_pair(analyzer::Analyzer* analyzer, bro_int_t e1, bro_int_t e2);  } 
extern EventHandlerPtr stp_remove_pair; 
namespace BifEvent {  void generate_stp_remove_pair(analyzer::Analyzer* analyzer, bro_int_t e1, bro_int_t e2);  } 
extern EventHandlerPtr stp_remove_endp; 
namespace BifEvent {  void generate_stp_remove_endp(analyzer::Analyzer* analyzer, bro_int_t e);  } 

#endif
