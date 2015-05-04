// This file was automatically generated by bifcl from /home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/tcp/events.bif (plugin mode).

#if defined(BRO_IN_NETVAR) || ! defined(_home_benjamin_Bro_bro_2_3_1_build_src_analyzer_protocol_tcp_events_bif)
#ifndef BRO_IN_NETVAR
#ifndef _home_benjamin_Bro_bro_2_3_1_build_src_analyzer_protocol_tcp_events_bif
#define _home_benjamin_Bro_bro_2_3_1_build_src_analyzer_protocol_tcp_events_bif
#include "bro-bif.h"
#endif
#endif

extern EventHandlerPtr new_connection_contents; 
namespace BifEvent {  void generate_new_connection_contents(analyzer::Analyzer* analyzer, Connection* c);  } 
extern EventHandlerPtr connection_attempt; 
namespace BifEvent {  void generate_connection_attempt(analyzer::Analyzer* analyzer, Connection* c);  } 
extern EventHandlerPtr connection_established; 
namespace BifEvent {  void generate_connection_established(analyzer::Analyzer* analyzer, Connection* c);  } 
extern EventHandlerPtr partial_connection; 
namespace BifEvent {  void generate_partial_connection(analyzer::Analyzer* analyzer, Connection* c);  } 
extern EventHandlerPtr connection_partial_close; 
namespace BifEvent {  void generate_connection_partial_close(analyzer::Analyzer* analyzer, Connection* c);  } 
extern EventHandlerPtr connection_finished; 
namespace BifEvent {  void generate_connection_finished(analyzer::Analyzer* analyzer, Connection* c);  } 
extern EventHandlerPtr connection_half_finished; 
namespace BifEvent {  void generate_connection_half_finished(analyzer::Analyzer* analyzer, Connection* c);  } 
extern EventHandlerPtr connection_rejected; 
namespace BifEvent {  void generate_connection_rejected(analyzer::Analyzer* analyzer, Connection* c);  } 
extern EventHandlerPtr connection_reset; 
namespace BifEvent {  void generate_connection_reset(analyzer::Analyzer* analyzer, Connection* c);  } 
extern EventHandlerPtr connection_pending; 
namespace BifEvent {  void generate_connection_pending(analyzer::Analyzer* analyzer, Connection* c);  } 
extern EventHandlerPtr connection_SYN_packet; 
namespace BifEvent {  void generate_connection_SYN_packet(analyzer::Analyzer* analyzer, Connection* c, Val* pkt);  } 
extern EventHandlerPtr connection_first_ACK; 
namespace BifEvent {  void generate_connection_first_ACK(analyzer::Analyzer* analyzer, Connection* c);  } 
extern EventHandlerPtr connection_EOF; 
namespace BifEvent {  void generate_connection_EOF(analyzer::Analyzer* analyzer, Connection* c, int is_orig);  } 
extern EventHandlerPtr tcp_packet; 
namespace BifEvent {  void generate_tcp_packet(analyzer::Analyzer* analyzer, Connection* c, int is_orig, StringVal* flags, bro_uint_t seq, bro_uint_t ack, bro_uint_t len, StringVal* payload);  } 
extern EventHandlerPtr tcp_option; 
namespace BifEvent {  void generate_tcp_option(analyzer::Analyzer* analyzer, Connection* c, int is_orig, bro_uint_t opt, bro_uint_t optlen);  } 
extern EventHandlerPtr tcp_contents; 
namespace BifEvent {  void generate_tcp_contents(analyzer::Analyzer* analyzer, Connection* c, int is_orig, bro_uint_t seq, StringVal* contents);  } 
extern EventHandlerPtr tcp_rexmit; 
namespace BifEvent {  void generate_tcp_rexmit(analyzer::Analyzer* analyzer, Connection* c, int is_orig, bro_uint_t seq, bro_uint_t len, bro_uint_t data_in_flight, bro_uint_t window);  } 
extern EventHandlerPtr contents_file_write_failure; 
namespace BifEvent {  void generate_contents_file_write_failure(analyzer::Analyzer* analyzer, Connection* c, int is_orig, StringVal* msg);  } 
extern EventHandlerPtr mptcp; 
namespace BifEvent {  void generate_mptcp(analyzer::Analyzer* analyzer, Connection* c, bro_uint_t len, bro_uint_t subtype, int is_orig);  } 
extern EventHandlerPtr mp_capable; 
namespace BifEvent {  void generate_mp_capable(analyzer::Analyzer* analyzer, Connection* c, bro_uint_t len, bro_uint_t version, bro_uint_t flags, bro_uint_t sender_key, bro_uint_t receiver_key, int is_orig);  } 
extern EventHandlerPtr mp_join; 
namespace BifEvent {  void generate_mp_join(analyzer::Analyzer* analyzer, Connection* c, bro_uint_t len, bro_uint_t flags, bro_uint_t addr_id, bro_uint_t rand, bro_uint_t token, StringVal* hmac, int is_orig);  } 
extern EventHandlerPtr mp_dss; 
namespace BifEvent {  void generate_mp_dss(analyzer::Analyzer* analyzer, Connection* c, bro_uint_t len, bro_uint_t flags, bro_uint_t data_ack, bro_uint_t dsn, bro_uint_t ssn, bro_uint_t dll, bro_uint_t checksum, int is_orig);  } 
extern EventHandlerPtr mp_add_addr; 
namespace BifEvent {  void generate_mp_add_addr(analyzer::Analyzer* analyzer, Connection* c, bro_uint_t len, bro_uint_t ipver, bro_uint_t addr_id, AddrVal* address, PortVal* portn, int is_orig);  } 
extern EventHandlerPtr mp_remove_addr; 
namespace BifEvent {  void generate_mp_remove_addr(analyzer::Analyzer* analyzer, Connection* c, bro_uint_t len, bro_uint_t resvd, bro_uint_t addr_id, int is_orig);  } 
extern EventHandlerPtr mp_prio; 
namespace BifEvent {  void generate_mp_prio(analyzer::Analyzer* analyzer, Connection* c, bro_uint_t len, bro_uint_t flags, bro_uint_t addr_id, int is_orig);  } 
extern EventHandlerPtr mp_fastclose; 
namespace BifEvent {  void generate_mp_fastclose(analyzer::Analyzer* analyzer, Connection* c, bro_uint_t len, bro_uint_t resvd, bro_uint_t receiver_key, int is_orig);  } 
extern EventHandlerPtr mp_fail; 
namespace BifEvent {  void generate_mp_fail(analyzer::Analyzer* analyzer, Connection* c, bro_uint_t len, bro_uint_t resvd, bro_uint_t dsn, int is_orig);  } 
extern EventHandlerPtr mp_error; 
namespace BifEvent {  void generate_mp_error(analyzer::Analyzer* analyzer, Connection* c, bro_uint_t len, bro_uint_t subtype, int is_orig);  } 

#endif
