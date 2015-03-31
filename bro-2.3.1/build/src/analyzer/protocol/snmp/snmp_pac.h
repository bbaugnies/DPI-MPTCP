// This file is automatically generated from /home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/snmp/snmp.pac.

#ifndef _home_benjamin_Bro_bro_2_3_1_src_analyzer_protocol_snmp_snmp_pac_h
#define _home_benjamin_Bro_bro_2_3_1_src_analyzer_protocol_snmp_snmp_pac_h

#include <vector>

#include "binpac.h"


#include "binpac_bro.h"


#include "types.bif.h"
#include "events.bif.h"


#include <cstdlib>
#include <vector>
#include <string>

#include "net_util.h"
#include "util.h"

namespace binpac {

namespace SNMP {
class ContextSNMP;
class SNMP_Conn;
class TopLevelMessage;
enum SNMP_VersionTag {
	SNMPV1_TAG = 0,
	SNMPV2_TAG = 1,
	SNMPV3_TAG = 3,
};
class Header;
class PDU_Choice;
class PDU;
class v1Header;
class v2Header;
class v3Header;
class v3HeaderData;
class v3ScopedPDU;
class EncryptedPDU;
class UnknownScopedPDU;
class UnknownVersionHeader;
class CommonPDU;
class GetRequestPDU;
class GetNextRequestPDU;
class ResponsePDU;
class SetRequestPDU;
class TrapPDU;
class GetBulkRequestPDU;
class InformRequestPDU;
class v2TrapPDU;
class ReportPDU;
class UnknownPDU;
class VarBindList;
class VarBind;
class ObjectName;
class ObjectSyntax;
class NetworkAddress;
class TimeTicks;
enum AppSyntaxTypeTag {
	APP_IPADDRESS_TAG = 64,
	APP_COUNTER32_TAG = 65,
	APP_UNSIGNED32_TAG = 66,
	APP_TIMETICKS_TAG = 67,
	APP_OPAQUE_TAG = 68,
	APP_COUNTER64_TAG = 70,
};
enum VarBindNullTag {
	VARBIND_UNSPECIFIED_TAG = 5,
	VARBIND_NOSUCHOBJECT_TAG = 128,
	VARBIND_NOSUCHINSTANCE_TAG = 129,
	VARBIND_ENDOFMIBVIEW_TAG = 130,
};
enum ASN1TypeTag {
	ASN1_INTEGER_TAG = 2,
	ASN1_OCTET_STRING_TAG = 4,
	ASN1_NULL_TAG = 5,
	ASN1_OBJECT_IDENTIFIER_TAG = 6,
	ASN1_SEQUENCE_TAG = 48,
};
class ASN1Encoding;
class ASN1EncodingMeta;
class ASN1SequenceMeta;
class ASN1Integer;
class ASN1OctetString;
class ASN1ObjectIdentifier;
class SNMP_Flow;
} // namespace SNMP

int bytestring_to_int(const_bytestring const & s, int base);
double bytestring_to_double(const_bytestring const & s);
int bytestring_casecmp(const_bytestring const & s1, const_charptr const & s2);
bool bytestring_caseprefix(const_bytestring const & s1, const_charptr const & s2);
double network_time();
namespace SNMP {

class ContextSNMP
{
public:
	ContextSNMP(SNMP_Conn * connection, SNMP_Flow * flow);
	~ContextSNMP();
	
	// Member access functions
	SNMP_Conn * connection() const { return connection_; }
	SNMP_Flow * flow() const { return flow_; }
	
protected:
	SNMP_Conn * connection_;
	SNMP_Flow * flow_;
};


class SNMP_Conn : public binpac::ConnectionAnalyzer
{
public:
	SNMP_Conn(BroAnalyzer const & bro_analyzer);
	~SNMP_Conn();
	
	// Member access functions
	SNMP_Flow * upflow() const { return upflow_; }
	SNMP_Flow * downflow() const { return downflow_; }
	BroAnalyzer const & bro_analyzer() const { return bro_analyzer_; }
	
	void NewData(bool is_orig, const_byteptr begin, const_byteptr end);
	void NewGap(bool is_orig, int gap_length);
	void FlowEOF(bool is_orig);
	
	// Functions
	bool proc_get_request(GetRequestPDU * pdu);
	bool proc_get_next_request(GetNextRequestPDU * pdu);
	bool proc_response(ResponsePDU * pdu);
	bool proc_set_request(SetRequestPDU * pdu);
	bool proc_trap(TrapPDU * pdu);
	bool proc_get_bulk_request(GetBulkRequestPDU * pdu);
	bool proc_inform_request(InformRequestPDU * pdu);
	bool proc_v2_trap(v2TrapPDU * pdu);
	bool proc_report(ReportPDU * pdu);
	bool proc_unknown_version_header(UnknownVersionHeader * rec);
	bool proc_unknown_pdu(UnknownPDU * rec);
	bool proc_unknown_scoped_pdu(UnknownScopedPDU * rec);
	bool proc_encrypted_pdu(EncryptedPDU * rec);
	bool proc_header(Header * rec);
	bool proc_v3_header_data(v3HeaderData * rec);
	bool check_tag(ASN1EncodingMeta * rec, uint8 expect);
	bool check_int_width(ASN1Integer * rec);
	bool check_int(ASN1Integer * rec);
	
protected:
	SNMP_Flow * upflow_;
	SNMP_Flow * downflow_;
	BroAnalyzer bro_analyzer_;
};


class TopLevelMessage
{
public:
	TopLevelMessage(bool is_orig);
	~TopLevelMessage();
	int Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextSNMP * t_context);
	
	// Member access functions
	ASN1SequenceMeta * asn1_sequence_meta() const { return asn1_sequence_meta_; }
	ASN1Integer * version() const { return version_; }
	Header * header() const { return header_; }
	int pdu_or_not_case_index() const	{ return pdu_or_not_case_index_; }
	PDU_Choice * pdu() const
		{
		switch ( pdu_or_not_case_index() )
			{
			case 1:
				break;  // OK
			default:
				throw binpac::ExceptionInvalidCase("/home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/snmp/snmp-protocol.pac:17:pdu", pdu_or_not_case_index(), "true");
				break;
			}
		return pdu_;
		}
	bool is_orig() const { return is_orig_; }
	int64 version_value() const { return version_value_; }
	
protected:
	ASN1SequenceMeta * asn1_sequence_meta_;
	ASN1Integer * version_;
	Header * header_;
	int pdu_or_not_case_index_;
	PDU_Choice * pdu_;
	bool is_orig_;
	int64 version_value_;
};


class Header
{
public:
	Header(int64 version, bool is_orig);
	~Header();
	int Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextSNMP * t_context);
	
	// Member access functions
	int val_case_index() const	{ return val_case_index_; }
	v1Header * v1() const
		{
		switch ( val_case_index() )
			{
			case 0:
				break;  // OK
			default:
				throw binpac::ExceptionInvalidCase("/home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/snmp/snmp-protocol.pac:32:v1", val_case_index(), "SNMPV1_TAG");
				break;
			}
		return v1_;
		}
	v2Header * v2() const
		{
		switch ( val_case_index() )
			{
			case 1:
				break;  // OK
			default:
				throw binpac::ExceptionInvalidCase("/home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/snmp/snmp-protocol.pac:33:v2", val_case_index(), "SNMPV2_TAG");
				break;
			}
		return v2_;
		}
	v3Header * v3() const
		{
		switch ( val_case_index() )
			{
			case 3:
				break;  // OK
			default:
				throw binpac::ExceptionInvalidCase("/home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/snmp/snmp-protocol.pac:34:v3", val_case_index(), "SNMPV3_TAG");
				break;
			}
		return v3_;
		}
	UnknownVersionHeader * unknown() const
		{
		return unknown_;
		}
	int64 version() const { return version_; }
	bool is_orig() const { return is_orig_; }
	bool proc() const { return proc_; }
	
protected:
	int val_case_index_;
	v1Header * v1_;
	v2Header * v2_;
	v3Header * v3_;
	UnknownVersionHeader * unknown_;
	int64 version_;
	bool is_orig_;
	bool proc_;
};

bool have_plaintext_pdu(Header * header);

class PDU_Choice
{
public:
	PDU_Choice(Header * header);
	~PDU_Choice();
	int Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextSNMP * t_context);
	
	// Member access functions
	ASN1EncodingMeta * choice() const { return choice_; }
	PDU * pdu() const { return pdu_; }
	Header * header() const { return header_; }
	
protected:
	ASN1EncodingMeta * choice_;
	PDU * pdu_;
	Header * header_;
};


class PDU
{
public:
	PDU(uint8 choice, Header * header);
	~PDU();
	int Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextSNMP * t_context);
	
	// Member access functions
	int val_case_index() const	{ return val_case_index_; }
	UnknownPDU * unknown() const
		{
		return unknown_;
		}
	GetRequestPDU * get_request() const
		{
		switch ( val_case_index() )
			{
			case 160:
				break;  // OK
			default:
				throw binpac::ExceptionInvalidCase("/home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/snmp/snmp-protocol.pac:57:get_request", val_case_index(), "((int) 0xa0)");
				break;
			}
		return get_request_;
		}
	GetNextRequestPDU * get_next_request() const
		{
		switch ( val_case_index() )
			{
			case 161:
				break;  // OK
			default:
				throw binpac::ExceptionInvalidCase("/home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/snmp/snmp-protocol.pac:58:get_next_request", val_case_index(), "((int) 0xa1)");
				break;
			}
		return get_next_request_;
		}
	ResponsePDU * response() const
		{
		switch ( val_case_index() )
			{
			case 162:
				break;  // OK
			default:
				throw binpac::ExceptionInvalidCase("/home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/snmp/snmp-protocol.pac:59:response", val_case_index(), "((int) 0xa2)");
				break;
			}
		return response_;
		}
	SetRequestPDU * set_request() const
		{
		switch ( val_case_index() )
			{
			case 163:
				break;  // OK
			default:
				throw binpac::ExceptionInvalidCase("/home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/snmp/snmp-protocol.pac:60:set_request", val_case_index(), "((int) 0xa3)");
				break;
			}
		return set_request_;
		}
	TrapPDU * trap() const
		{
		switch ( val_case_index() )
			{
			case 164:
				break;  // OK
			default:
				throw binpac::ExceptionInvalidCase("/home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/snmp/snmp-protocol.pac:61:trap", val_case_index(), "((int) 0xa4)");
				break;
			}
		return trap_;
		}
	GetBulkRequestPDU * get_bulk_request() const
		{
		switch ( val_case_index() )
			{
			case 165:
				break;  // OK
			default:
				throw binpac::ExceptionInvalidCase("/home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/snmp/snmp-protocol.pac:66:get_bulk_request", val_case_index(), "((int) 0xa5)");
				break;
			}
		return get_bulk_request_;
		}
	InformRequestPDU * inform_request() const
		{
		switch ( val_case_index() )
			{
			case 166:
				break;  // OK
			default:
				throw binpac::ExceptionInvalidCase("/home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/snmp/snmp-protocol.pac:67:inform_request", val_case_index(), "((int) 0xa6)");
				break;
			}
		return inform_request_;
		}
	v2TrapPDU * v2_trap() const
		{
		switch ( val_case_index() )
			{
			case 167:
				break;  // OK
			default:
				throw binpac::ExceptionInvalidCase("/home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/snmp/snmp-protocol.pac:68:v2_trap", val_case_index(), "((int) 0xa7)");
				break;
			}
		return v2_trap_;
		}
	ReportPDU * report() const
		{
		switch ( val_case_index() )
			{
			case 168:
				break;  // OK
			default:
				throw binpac::ExceptionInvalidCase("/home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/snmp/snmp-protocol.pac:69:report", val_case_index(), "((int) 0xa8)");
				break;
			}
		return report_;
		}
	uint8 choice() const { return choice_; }
	Header * header() const { return header_; }
	
protected:
	int val_case_index_;
	UnknownPDU * unknown_;
	GetRequestPDU * get_request_;
	GetNextRequestPDU * get_next_request_;
	ResponsePDU * response_;
	SetRequestPDU * set_request_;
	TrapPDU * trap_;
	GetBulkRequestPDU * get_bulk_request_;
	InformRequestPDU * inform_request_;
	v2TrapPDU * v2_trap_;
	ReportPDU * report_;
	uint8 choice_;
	Header * header_;
};


class v1Header
{
public:
	v1Header(Header * header);
	~v1Header();
	int Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextSNMP * t_context);
	
	// Member access functions
	ASN1OctetString * community() const { return community_; }
	Header * header() const { return header_; }
	
protected:
	ASN1OctetString * community_;
	Header * header_;
};


class v2Header
{
public:
	v2Header(Header * header);
	~v2Header();
	int Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextSNMP * t_context);
	
	// Member access functions
	ASN1OctetString * community() const { return community_; }
	Header * header() const { return header_; }
	
protected:
	ASN1OctetString * community_;
	Header * header_;
};


class v3Header
{
public:
	v3Header(Header * header);
	~v3Header();
	int Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextSNMP * t_context);
	
	// Member access functions
	v3HeaderData * global_data() const { return global_data_; }
	ASN1OctetString * security_parameters() const { return security_parameters_; }
	ASN1EncodingMeta * next() const { return next_; }
	int scoped_pdu_data_case_index() const	{ return scoped_pdu_data_case_index_; }
	v3ScopedPDU * plaintext_pdu() const
		{
		switch ( scoped_pdu_data_case_index() )
			{
			case 48:
				break;  // OK
			default:
				throw binpac::ExceptionInvalidCase("/home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/snmp/snmp-protocol.pac:85:plaintext_pdu", scoped_pdu_data_case_index(), "ASN1_SEQUENCE_TAG");
				break;
			}
		return plaintext_pdu_;
		}
	EncryptedPDU * encrypted_pdu() const
		{
		switch ( scoped_pdu_data_case_index() )
			{
			case 4:
				break;  // OK
			default:
				throw binpac::ExceptionInvalidCase("/home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/snmp/snmp-protocol.pac:86:encrypted_pdu", scoped_pdu_data_case_index(), "ASN1_OCTET_STRING_TAG");
				break;
			}
		return encrypted_pdu_;
		}
	UnknownScopedPDU * unknown_pdu() const
		{
		return unknown_pdu_;
		}
	Header * header() const { return header_; }
	
protected:
	v3HeaderData * global_data_;
	ASN1OctetString * security_parameters_;
	ASN1EncodingMeta * next_;
	int scoped_pdu_data_case_index_;
	v3ScopedPDU * plaintext_pdu_;
	EncryptedPDU * encrypted_pdu_;
	UnknownScopedPDU * unknown_pdu_;
	Header * header_;
};


class v3HeaderData
{
public:
	v3HeaderData();
	~v3HeaderData();
	int Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextSNMP * t_context);
	
	// Member access functions
	ASN1SequenceMeta * asn1_sequence_meta() const { return asn1_sequence_meta_; }
	ASN1Integer * id() const { return id_; }
	ASN1Integer * max_size() const { return max_size_; }
	ASN1OctetString * flags() const { return flags_; }
	ASN1Integer * security_model() const { return security_model_; }
	bool proc() const { return proc_; }
	
protected:
	ASN1SequenceMeta * asn1_sequence_meta_;
	ASN1Integer * id_;
	ASN1Integer * max_size_;
	ASN1OctetString * flags_;
	ASN1Integer * security_model_;
	bool proc_;
};


class v3ScopedPDU
{
public:
	v3ScopedPDU();
	~v3ScopedPDU();
	int Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextSNMP * t_context);
	
	// Member access functions
	ASN1OctetString * context_engine_id() const { return context_engine_id_; }
	ASN1OctetString * context_name() const { return context_name_; }
	
protected:
	ASN1OctetString * context_engine_id_;
	ASN1OctetString * context_name_;
};


class EncryptedPDU
{
public:
	EncryptedPDU(Header * header);
	~EncryptedPDU();
	int Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextSNMP * t_context);
	
	// Member access functions
	Header * header() const { return header_; }
	bool proc() const { return proc_; }
	
protected:
	const_bytestring data_;
	Header * header_;
	bool proc_;
};


class UnknownScopedPDU
{
public:
	UnknownScopedPDU(uint8 tag, Header * header);
	~UnknownScopedPDU();
	int Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextSNMP * t_context);
	
	// Member access functions
	uint8 tag() const { return tag_; }
	Header * header() const { return header_; }
	bool proc() const { return proc_; }
	
protected:
	const_bytestring data_;
	uint8 tag_;
	Header * header_;
	bool proc_;
};


class UnknownVersionHeader
{
public:
	UnknownVersionHeader(Header * header);
	~UnknownVersionHeader();
	int Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextSNMP * t_context);
	
	// Member access functions
	Header * header() const { return header_; }
	bool proc() const { return proc_; }
	
protected:
	const_bytestring data_;
	Header * header_;
	bool proc_;
};


class CommonPDU
{
public:
	CommonPDU(Header * header);
	~CommonPDU();
	int Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextSNMP * t_context);
	
	// Member access functions
	ASN1Integer * request_id() const { return request_id_; }
	ASN1Integer * error_status() const { return error_status_; }
	ASN1Integer * error_index() const { return error_index_; }
	VarBindList * var_bindings() const { return var_bindings_; }
	Header * header() const { return header_; }
	
protected:
	ASN1Integer * request_id_;
	ASN1Integer * error_status_;
	ASN1Integer * error_index_;
	VarBindList * var_bindings_;
	Header * header_;
};


class GetRequestPDU
{
public:
	GetRequestPDU(Header * header);
	~GetRequestPDU();
	int Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextSNMP * t_context);
	
	// Member access functions
	CommonPDU * pdu() const { return pdu_; }
	Header * header() const { return header_; }
	bool proc() const { return proc_; }
	
protected:
	CommonPDU * pdu_;
	Header * header_;
	bool proc_;
};


class GetNextRequestPDU
{
public:
	GetNextRequestPDU(Header * header);
	~GetNextRequestPDU();
	int Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextSNMP * t_context);
	
	// Member access functions
	CommonPDU * pdu() const { return pdu_; }
	Header * header() const { return header_; }
	bool proc() const { return proc_; }
	
protected:
	CommonPDU * pdu_;
	Header * header_;
	bool proc_;
};


class ResponsePDU
{
public:
	ResponsePDU(Header * header);
	~ResponsePDU();
	int Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextSNMP * t_context);
	
	// Member access functions
	CommonPDU * pdu() const { return pdu_; }
	Header * header() const { return header_; }
	bool proc() const { return proc_; }
	
protected:
	CommonPDU * pdu_;
	Header * header_;
	bool proc_;
};


class SetRequestPDU
{
public:
	SetRequestPDU(Header * header);
	~SetRequestPDU();
	int Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextSNMP * t_context);
	
	// Member access functions
	CommonPDU * pdu() const { return pdu_; }
	Header * header() const { return header_; }
	bool proc() const { return proc_; }
	
protected:
	CommonPDU * pdu_;
	Header * header_;
	bool proc_;
};


class TrapPDU
{
public:
	TrapPDU(Header * header);
	~TrapPDU();
	int Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextSNMP * t_context);
	
	// Member access functions
	ASN1ObjectIdentifier * enterprise() const { return enterprise_; }
	NetworkAddress * agent_addr() const { return agent_addr_; }
	ASN1Integer * generic_trap() const { return generic_trap_; }
	ASN1Integer * specific_trap() const { return specific_trap_; }
	TimeTicks * time_stamp() const { return time_stamp_; }
	VarBindList * var_bindings() const { return var_bindings_; }
	Header * header() const { return header_; }
	bool proc() const { return proc_; }
	
protected:
	ASN1ObjectIdentifier * enterprise_;
	NetworkAddress * agent_addr_;
	ASN1Integer * generic_trap_;
	ASN1Integer * specific_trap_;
	TimeTicks * time_stamp_;
	VarBindList * var_bindings_;
	Header * header_;
	bool proc_;
};


class GetBulkRequestPDU
{
public:
	GetBulkRequestPDU(Header * header);
	~GetBulkRequestPDU();
	int Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextSNMP * t_context);
	
	// Member access functions
	ASN1Integer * request_id() const { return request_id_; }
	ASN1Integer * non_repeaters() const { return non_repeaters_; }
	ASN1Integer * max_repititions() const { return max_repititions_; }
	VarBindList * var_bindings() const { return var_bindings_; }
	Header * header() const { return header_; }
	bool proc() const { return proc_; }
	
protected:
	ASN1Integer * request_id_;
	ASN1Integer * non_repeaters_;
	ASN1Integer * max_repititions_;
	VarBindList * var_bindings_;
	Header * header_;
	bool proc_;
};


class InformRequestPDU
{
public:
	InformRequestPDU(Header * header);
	~InformRequestPDU();
	int Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextSNMP * t_context);
	
	// Member access functions
	CommonPDU * pdu() const { return pdu_; }
	Header * header() const { return header_; }
	bool proc() const { return proc_; }
	
protected:
	CommonPDU * pdu_;
	Header * header_;
	bool proc_;
};


class v2TrapPDU
{
public:
	v2TrapPDU(Header * header);
	~v2TrapPDU();
	int Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextSNMP * t_context);
	
	// Member access functions
	CommonPDU * pdu() const { return pdu_; }
	Header * header() const { return header_; }
	bool proc() const { return proc_; }
	
protected:
	CommonPDU * pdu_;
	Header * header_;
	bool proc_;
};


class ReportPDU
{
public:
	ReportPDU(Header * header);
	~ReportPDU();
	int Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextSNMP * t_context);
	
	// Member access functions
	CommonPDU * pdu() const { return pdu_; }
	Header * header() const { return header_; }
	bool proc() const { return proc_; }
	
protected:
	CommonPDU * pdu_;
	Header * header_;
	bool proc_;
};


class UnknownPDU
{
public:
	UnknownPDU(uint8 tag, Header * header);
	~UnknownPDU();
	int Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextSNMP * t_context);
	
	// Member access functions
	uint8 tag() const { return tag_; }
	Header * header() const { return header_; }
	bool proc() const { return proc_; }
	
protected:
	const_bytestring data_;
	uint8 tag_;
	Header * header_;
	bool proc_;
};


class VarBindList
{
public:
	VarBindList();
	~VarBindList();
	int Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextSNMP * t_context);
	
	// Member access functions
	ASN1SequenceMeta * asn1_sequence_meta() const { return asn1_sequence_meta_; }
	vector<VarBind *> * bindings() const { return bindings_; }
	
protected:
	ASN1SequenceMeta * asn1_sequence_meta_;
	vector<VarBind *> * bindings_;
	VarBind * bindings__elem_;
};


class VarBind
{
public:
	VarBind();
	~VarBind();
	int Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextSNMP * t_context);
	
	// Member access functions
	ASN1SequenceMeta * asn1_sequence_meta() const { return asn1_sequence_meta_; }
	ObjectName * name() const { return name_; }
	ObjectSyntax * value() const { return value_; }
	
protected:
	ASN1SequenceMeta * asn1_sequence_meta_;
	ObjectName * name_;
	ObjectSyntax * value_;
};


class ObjectName
{
public:
	ObjectName();
	~ObjectName();
	int Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextSNMP * t_context);
	
	// Member access functions
	ASN1ObjectIdentifier * oid() const { return oid_; }
	
protected:
	ASN1ObjectIdentifier * oid_;
};


class ObjectSyntax
{
public:
	ObjectSyntax();
	~ObjectSyntax();
	int Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data);
	
	// Member access functions
	ASN1Encoding * encoding() const { return encoding_; }
	
protected:
	ASN1Encoding * encoding_;
};


class NetworkAddress
{
public:
	NetworkAddress();
	~NetworkAddress();
	int Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextSNMP * t_context);
	
	// Member access functions
	ASN1Encoding * encoding() const { return encoding_; }
	bool valid() const { return valid_; }
	
protected:
	ASN1Encoding * encoding_;
	bool valid_;
};


class TimeTicks
{
public:
	TimeTicks();
	~TimeTicks();
	int Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextSNMP * t_context);
	
	// Member access functions
	ASN1Encoding * asn1_integer() const { return asn1_integer_; }
	bool valid() const { return valid_; }
	
protected:
	ASN1Encoding * asn1_integer_;
	bool valid_;
};


class ASN1Encoding
{
public:
	ASN1Encoding();
	~ASN1Encoding();
	int Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data);
	
	// Member access functions
	ASN1EncodingMeta * meta() const { return meta_; }
	bytestring const & content() const { return content_; }
	
protected:
	ASN1EncodingMeta * meta_;
	bytestring content_;
};


class ASN1EncodingMeta
{
public:
	ASN1EncodingMeta();
	~ASN1EncodingMeta();
	int Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data);
	
	// Member access functions
	uint8 tag() const { return tag_; }
	uint8 len() const { return len_; }
	bytestring const & more_len() const { return more_len_; }
	bool long_len() const { return long_len_; }
	uint64 length() const { return length_; }
	
protected:
	uint8 tag_;
	uint8 len_;
	bytestring more_len_;
	bool long_len_;
	uint64 length_;
};


class ASN1SequenceMeta
{
public:
	ASN1SequenceMeta();
	~ASN1SequenceMeta();
	int Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextSNMP * t_context);
	
	// Member access functions
	ASN1EncodingMeta * encoding() const { return encoding_; }
	bool valid() const { return valid_; }
	
protected:
	ASN1EncodingMeta * encoding_;
	bool valid_;
};


class ASN1Integer
{
public:
	ASN1Integer();
	~ASN1Integer();
	int Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextSNMP * t_context);
	
	// Member access functions
	ASN1Encoding * encoding() const { return encoding_; }
	bool valid() const { return valid_; }
	
protected:
	ASN1Encoding * encoding_;
	bool valid_;
};


class ASN1OctetString
{
public:
	ASN1OctetString();
	~ASN1OctetString();
	int Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextSNMP * t_context);
	
	// Member access functions
	ASN1Encoding * encoding() const { return encoding_; }
	bool valid() const { return valid_; }
	
protected:
	ASN1Encoding * encoding_;
	bool valid_;
};


class ASN1ObjectIdentifier
{
public:
	ASN1ObjectIdentifier();
	~ASN1ObjectIdentifier();
	int Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextSNMP * t_context);
	
	// Member access functions
	ASN1Encoding * encoding() const { return encoding_; }
	bool valid() const { return valid_; }
	
protected:
	ASN1Encoding * encoding_;
	bool valid_;
};

int64 binary_to_int64(bytestring const & bs);

class SNMP_Flow : public binpac::FlowAnalyzer
{
public:
	SNMP_Flow(SNMP_Conn * connection, bool is_orig);
	~SNMP_Flow();
	
	// Member access functions
	SNMP_Conn * connection() const { return connection_; }
	bool is_orig() const { return is_orig_; }
	
	void NewData(const_byteptr t_begin_of_data, const_byteptr t_end_of_data);
	void NewGap(int gap_length);
	void FlowEOF();
	
protected:
	TopLevelMessage * dataunit_;
	ContextSNMP * context_;
	SNMP_Conn * connection_;
	bool is_orig_;
};


StringVal* asn1_oid_to_val(const ASN1Encoding* oid);
StringVal* asn1_oid_to_val(const ASN1ObjectIdentifier* oid);

Val* asn1_integer_to_val(const ASN1Encoding* i, TypeTag t);
Val* asn1_integer_to_val(const ASN1Integer* i, TypeTag t);

StringVal* asn1_octet_string_to_val(const ASN1Encoding* s);
StringVal* asn1_octet_string_to_val(const ASN1OctetString* s);

AddrVal* network_address_to_val(const ASN1Encoding* na);
AddrVal* network_address_to_val(const NetworkAddress* na);

Val* asn1_obj_to_val(const ASN1Encoding* obj);

RecordVal* build_hdr(const Header* header);
RecordVal* build_hdrV3(const Header* header);
VectorVal* build_bindings(const VarBindList* vbl);
RecordVal* build_pdu(const CommonPDU* pdu);
RecordVal* build_trap_pdu(const TrapPDU* pdu);
RecordVal* build_bulk_pdu(const GetBulkRequestPDU* pdu);

} // namespace SNMP
}  // namespace binpac
#endif /* _home_benjamin_Bro_bro_2_3_1_src_analyzer_protocol_snmp_snmp_pac_h */
