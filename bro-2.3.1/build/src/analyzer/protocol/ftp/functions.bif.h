// This file was automatically generated by bifcl from /home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/ftp/functions.bif (plugin mode).

#if defined(BRO_IN_NETVAR) || ! defined(_home_benjamin_Bro_bro_2_3_1_build_src_analyzer_protocol_ftp_functions_bif)
#ifndef BRO_IN_NETVAR
#ifndef _home_benjamin_Bro_bro_2_3_1_build_src_analyzer_protocol_ftp_functions_bif
#define _home_benjamin_Bro_bro_2_3_1_build_src_analyzer_protocol_ftp_functions_bif
#include "bro-bif.h"
#endif
#endif

namespace BifType { namespace Record{  extern RecordType * ftp_port;  } }
namespace BifFunc { extern Val* bro_parse_ftp_port(Frame* frame, val_list*); } 
namespace BifFunc { extern Val* bro_parse_eftp_port(Frame* frame, val_list*); } 
namespace BifFunc { extern Val* bro_parse_ftp_pasv(Frame* frame, val_list*); } 
namespace BifFunc { extern Val* bro_parse_ftp_epsv(Frame* frame, val_list*); } 
namespace BifFunc { extern Val* bro_fmt_ftp_port(Frame* frame, val_list*); } 

#endif
