
// A work-around the problem that for static libraries unused globals
// aren't linked into the final binary. CMake automatically inserts
// code here to reference the globals that initializes each of the
// statically compiled plugins.
//
// Note: This won't be necessary anymore once we can assume CMake >2.8.8
// as a required depencendy. If so, switch bro_HAVE_OBJECT_LIBRARIES
// in src/CMakeLists.txt to TRUE and remove this.

#include <stdlib.h>

namespace plugin { namespace Bro_ARP { class Plugin; extern Plugin __plugin; } };
namespace plugin { namespace Bro_AYIYA { class Plugin; extern Plugin __plugin; } };
namespace plugin { namespace Bro_BackDoor { class Plugin; extern Plugin __plugin; } };
namespace plugin { namespace Bro_BitTorrent { class Plugin; extern Plugin __plugin; } };
namespace plugin { namespace Bro_ConnSize { class Plugin; extern Plugin __plugin; } };
namespace plugin { namespace Bro_DCE_RPC { class Plugin; extern Plugin __plugin; } };
namespace plugin { namespace Bro_DHCP { class Plugin; extern Plugin __plugin; } };
namespace plugin { namespace Bro_DNP3 { class Plugin; extern Plugin __plugin; } };
namespace plugin { namespace Bro_DNS { class Plugin; extern Plugin __plugin; } };
namespace plugin { namespace Bro_File { class Plugin; extern Plugin __plugin; } };
namespace plugin { namespace Bro_Finger { class Plugin; extern Plugin __plugin; } };
namespace plugin { namespace Bro_FTP { class Plugin; extern Plugin __plugin; } };
namespace plugin { namespace Bro_Gnutella { class Plugin; extern Plugin __plugin; } };
namespace plugin { namespace Bro_GTPv1 { class Plugin; extern Plugin __plugin; } };
namespace plugin { namespace Bro_HTTP { class Plugin; extern Plugin __plugin; } };
namespace plugin { namespace Bro_ICMP { class Plugin; extern Plugin __plugin; } };
namespace plugin { namespace Bro_Ident { class Plugin; extern Plugin __plugin; } };
namespace plugin { namespace Bro_InterConn { class Plugin; extern Plugin __plugin; } };
namespace plugin { namespace Bro_IRC { class Plugin; extern Plugin __plugin; } };
namespace plugin { namespace Bro_Login { class Plugin; extern Plugin __plugin; } };
namespace plugin { namespace Bro_MIME { class Plugin; extern Plugin __plugin; } };
namespace plugin { namespace Bro_Modbus { class Plugin; extern Plugin __plugin; } };
namespace plugin { namespace Bro_NCP { class Plugin; extern Plugin __plugin; } };
namespace plugin { namespace Bro_NetBIOS { class Plugin; extern Plugin __plugin; } };
namespace plugin { namespace Bro_NetFlow { class Plugin; extern Plugin __plugin; } };
namespace plugin { namespace Bro_NTP { class Plugin; extern Plugin __plugin; } };
namespace plugin { namespace Bro_PIA { class Plugin; extern Plugin __plugin; } };
namespace plugin { namespace Bro_POP3 { class Plugin; extern Plugin __plugin; } };
namespace plugin { namespace Bro_RADIUS { class Plugin; extern Plugin __plugin; } };
namespace plugin { namespace Bro_RPC { class Plugin; extern Plugin __plugin; } };
namespace plugin { namespace Bro_SNMP { class Plugin; extern Plugin __plugin; } };
namespace plugin { namespace Bro_SMB { class Plugin; extern Plugin __plugin; } };
namespace plugin { namespace Bro_SMTP { class Plugin; extern Plugin __plugin; } };
namespace plugin { namespace Bro_SOCKS { class Plugin; extern Plugin __plugin; } };
namespace plugin { namespace Bro_SSH { class Plugin; extern Plugin __plugin; } };
namespace plugin { namespace Bro_SSL { class Plugin; extern Plugin __plugin; } };
namespace plugin { namespace Bro_SteppingStone { class Plugin; extern Plugin __plugin; } };
namespace plugin { namespace Bro_Syslog { class Plugin; extern Plugin __plugin; } };
namespace plugin { namespace Bro_TCP { class Plugin; extern Plugin __plugin; } };
namespace plugin { namespace Bro_Teredo { class Plugin; extern Plugin __plugin; } };
namespace plugin { namespace Bro_UDP { class Plugin; extern Plugin __plugin; } };
namespace plugin { namespace Bro_ZIP { class Plugin; extern Plugin __plugin; } };
namespace plugin { namespace Bro_FileDataEvent { class Plugin; extern Plugin __plugin; } };
namespace plugin { namespace Bro_FileExtract { class Plugin; extern Plugin __plugin; } };
namespace plugin { namespace Bro_FileHash { class Plugin; extern Plugin __plugin; } };
namespace plugin { namespace Bro_Unified2 { class Plugin; extern Plugin __plugin; } };
namespace plugin { namespace Bro_X509 { class Plugin; extern Plugin __plugin; } };


size_t __make_sure_to_use_plugin_globals()
{
    // This function is never actually called.

	size_t i = 0;
    i += (size_t)(&(plugin::Bro_ARP::__plugin));
i += (size_t)(&(plugin::Bro_AYIYA::__plugin));
i += (size_t)(&(plugin::Bro_BackDoor::__plugin));
i += (size_t)(&(plugin::Bro_BitTorrent::__plugin));
i += (size_t)(&(plugin::Bro_ConnSize::__plugin));
i += (size_t)(&(plugin::Bro_DCE_RPC::__plugin));
i += (size_t)(&(plugin::Bro_DHCP::__plugin));
i += (size_t)(&(plugin::Bro_DNP3::__plugin));
i += (size_t)(&(plugin::Bro_DNS::__plugin));
i += (size_t)(&(plugin::Bro_File::__plugin));
i += (size_t)(&(plugin::Bro_Finger::__plugin));
i += (size_t)(&(plugin::Bro_FTP::__plugin));
i += (size_t)(&(plugin::Bro_Gnutella::__plugin));
i += (size_t)(&(plugin::Bro_GTPv1::__plugin));
i += (size_t)(&(plugin::Bro_HTTP::__plugin));
i += (size_t)(&(plugin::Bro_ICMP::__plugin));
i += (size_t)(&(plugin::Bro_Ident::__plugin));
i += (size_t)(&(plugin::Bro_InterConn::__plugin));
i += (size_t)(&(plugin::Bro_IRC::__plugin));
i += (size_t)(&(plugin::Bro_Login::__plugin));
i += (size_t)(&(plugin::Bro_MIME::__plugin));
i += (size_t)(&(plugin::Bro_Modbus::__plugin));
i += (size_t)(&(plugin::Bro_NCP::__plugin));
i += (size_t)(&(plugin::Bro_NetBIOS::__plugin));
i += (size_t)(&(plugin::Bro_NetFlow::__plugin));
i += (size_t)(&(plugin::Bro_NTP::__plugin));
i += (size_t)(&(plugin::Bro_PIA::__plugin));
i += (size_t)(&(plugin::Bro_POP3::__plugin));
i += (size_t)(&(plugin::Bro_RADIUS::__plugin));
i += (size_t)(&(plugin::Bro_RPC::__plugin));
i += (size_t)(&(plugin::Bro_SNMP::__plugin));
i += (size_t)(&(plugin::Bro_SMB::__plugin));
i += (size_t)(&(plugin::Bro_SMTP::__plugin));
i += (size_t)(&(plugin::Bro_SOCKS::__plugin));
i += (size_t)(&(plugin::Bro_SSH::__plugin));
i += (size_t)(&(plugin::Bro_SSL::__plugin));
i += (size_t)(&(plugin::Bro_SteppingStone::__plugin));
i += (size_t)(&(plugin::Bro_Syslog::__plugin));
i += (size_t)(&(plugin::Bro_TCP::__plugin));
i += (size_t)(&(plugin::Bro_Teredo::__plugin));
i += (size_t)(&(plugin::Bro_UDP::__plugin));
i += (size_t)(&(plugin::Bro_ZIP::__plugin));
i += (size_t)(&(plugin::Bro_FileDataEvent::__plugin));
i += (size_t)(&(plugin::Bro_FileExtract::__plugin));
i += (size_t)(&(plugin::Bro_FileHash::__plugin));
i += (size_t)(&(plugin::Bro_Unified2::__plugin));
i += (size_t)(&(plugin::Bro_X509::__plugin));

	return i;
}
