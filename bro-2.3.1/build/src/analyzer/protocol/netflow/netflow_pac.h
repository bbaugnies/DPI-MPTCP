// This file is automatically generated from /home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/netflow/netflow.pac.

#ifndef _home_benjamin_Bro_bro_2_3_1_src_analyzer_protocol_netflow_netflow_pac_h
#define _home_benjamin_Bro_bro_2_3_1_src_analyzer_protocol_netflow_netflow_pac_h

#include <vector>

#include "binpac.h"


#include "net_util.h"
#include "Event.h"
extern RecordType* conn_id;

#include "events.bif.h"


#include "binpac_bro.h"

namespace binpac {

namespace NetFlow {
class ContextNetFlow;
class NetFlow_Analyzer;
class NetFlow_Flow;
class NetFlowPacket;
class NFHeader;
class NFv5HeaderRest;
class NFv9HeaderRest;
class NFRecord;
class NFv5Record;
class NFv9Record;
} // namespace NetFlow

double network_time();
namespace NetFlow {

class ContextNetFlow
{
public:
	ContextNetFlow(NetFlow_Analyzer * analyzer, NetFlow_Flow * flow);
	~ContextNetFlow();
	
	// Member access functions
	NetFlow_Analyzer * analyzer() const { return analyzer_; }
	NetFlow_Flow * flow() const { return flow_; }
	
protected:
	NetFlow_Analyzer * analyzer_;
	NetFlow_Flow * flow_;
};


class NetFlow_Analyzer : public binpac::ConnectionAnalyzer
{
public:
	NetFlow_Analyzer();
	~NetFlow_Analyzer();
	
	// Member access functions
	NetFlow_Flow * downflow() const { return downflow_; }
	NetFlow_Flow * upflow() const { return upflow_; }
	
	void NewData(bool is_orig, const_byteptr begin, const_byteptr end);
	void NewGap(bool is_orig, int gap_length);
	void FlowEOF(bool is_orig);
	
protected:
	NetFlow_Flow * downflow_;
	NetFlow_Flow * upflow_;
};


class NetFlow_Flow : public binpac::FlowAnalyzer
{
public:
	NetFlow_Flow(NetFlow_Analyzer * connection);
	~NetFlow_Flow();
	
	// Member access functions
	NetFlow_Analyzer * connection() const { return connection_; }
	
	void NewData(const_byteptr t_begin_of_data, const_byteptr t_end_of_data);
	void NewGap(int gap_length);
	void FlowEOF();
	
	// Functions
	bool set_exporter_ip(uint32 exporter_ip);
	bool set_identifier(const_charptr const & idf);
	bool deliver_v5_header(uint16 count, uint32 sysuptime, uint32 unix_secs, uint32 unix_nsecs, uint32 flow_seq, uint8 eng_type, uint8 eng_id, uint16 sample_int);
	bool deliver_v5_record(uint32 srcaddr, uint32 dstaddr, uint32 nexthop, uint16 input, uint16 output, uint32 dPkts, uint32 dOctets, uint32 first, uint32 last, uint16 srcport, uint16 dstport, uint8 tcp_flags, uint8 prot, uint8 tos, uint16 src_as, uint16 dst_as, uint8 src_mask, uint8 dst_mask);
	
protected:
	NetFlowPacket * dataunit_;
	ContextNetFlow * context_;
	
	// Additional members

		RecordType* nf_v5_header_type;
		RecordType* nf_v5_record_type;
		RecordType* nfheader_id_type;
		char* identifier;
		uint32 exporter_ip;
		uint32 uptime;
		double export_time;
		bro_uint_t pdu_id;
	
	NetFlow_Analyzer * connection_;
};


class NetFlowPacket
{
public:
	NetFlowPacket();
	~NetFlowPacket();
	int Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextNetFlow * t_context);
	
	// Member access functions
	uint16 version() const { return version_; }
	uint16 count() const { return count_; }
	NFHeader * header() const { return header_; }
	vector<NFRecord *> * records() const { return records_; }
	int byteorder() const { return byteorder_; }
	
protected:
	uint16 version_;
	uint16 count_;
	NFHeader * header_;
	vector<NFRecord *> * records_;
	NFRecord * records__elem_;
	int byteorder_;
};


class NFHeader
{
public:
	NFHeader(uint16 version, uint16 count);
	~NFHeader();
	int Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextNetFlow * t_context, int t_byteorder);
	
	// Member access functions
	int val_case_index() const	{ return val_case_index_; }
	NFv5HeaderRest * v5header() const
		{
		switch ( val_case_index() )
			{
			case 5:
				break;  // OK
			default:
				throw binpac::ExceptionInvalidCase("/home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/netflow/netflow-protocol.pac:16:v5header", val_case_index(), "((int) 5)");
				break;
			}
		return v5header_;
		}
	NFv9HeaderRest * v9header() const
		{
		switch ( val_case_index() )
			{
			case 9:
				break;  // OK
			default:
				throw binpac::ExceptionInvalidCase("/home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/netflow/netflow-protocol.pac:17:v9header", val_case_index(), "((int) 9)");
				break;
			}
		return v9header_;
		}
	uint16 version() const { return version_; }
	uint16 count() const { return count_; }
	
protected:
	int val_case_index_;
	NFv5HeaderRest * v5header_;
	NFv9HeaderRest * v9header_;
	uint16 version_;
	uint16 count_;
};


class NFv5HeaderRest
{
public:
	NFv5HeaderRest(uint16 count);
	~NFv5HeaderRest();
	int Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextNetFlow * t_context, int t_byteorder);
	
	// Member access functions
	uint32 sysuptime() const { return sysuptime_; }
	uint32 unix_secs() const { return unix_secs_; }
	uint32 unix_nsecs() const { return unix_nsecs_; }
	uint32 flow_seq() const { return flow_seq_; }
	uint8 eng_type() const { return eng_type_; }
	uint8 eng_id() const { return eng_id_; }
	uint16 sample_int() const { return sample_int_; }
	uint16 count() const { return count_; }
	bool delivered() const { return delivered_; }
	
protected:
	uint32 sysuptime_;
	uint32 unix_secs_;
	uint32 unix_nsecs_;
	uint32 flow_seq_;
	uint8 eng_type_;
	uint8 eng_id_;
	uint16 sample_int_;
	uint16 count_;
	bool delivered_;
};


class NFv9HeaderRest
{
public:
	NFv9HeaderRest(uint16 count);
	~NFv9HeaderRest();
	int Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, int t_byteorder);
	
	// Member access functions
	uint32 sysuptime() const { return sysuptime_; }
	uint32 unix_secs() const { return unix_secs_; }
	uint32 pack_seq() const { return pack_seq_; }
	uint32 src_id() const { return src_id_; }
	uint16 count() const { return count_; }
	
protected:
	uint32 sysuptime_;
	uint32 unix_secs_;
	uint32 pack_seq_;
	uint32 src_id_;
	uint16 count_;
};


class NFRecord
{
public:
	NFRecord(uint32 nf_version);
	~NFRecord();
	int Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextNetFlow * t_context, int t_byteorder);
	
	// Member access functions
	int val_case_index() const	{ return val_case_index_; }
	NFv5Record * v5() const
		{
		switch ( val_case_index() )
			{
			case 5:
				break;  // OK
			default:
				throw binpac::ExceptionInvalidCase("/home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/netflow/netflow-protocol.pac:46:v5", val_case_index(), "((int) 5)");
				break;
			}
		return v5_;
		}
	NFv9Record * v9() const
		{
		switch ( val_case_index() )
			{
			case 9:
				break;  // OK
			default:
				throw binpac::ExceptionInvalidCase("/home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/netflow/netflow-protocol.pac:47:v9", val_case_index(), "((int) 9)");
				break;
			}
		return v9_;
		}
	uint32 nf_version() const { return nf_version_; }
	
protected:
	int val_case_index_;
	NFv5Record * v5_;
	NFv9Record * v9_;
	uint32 nf_version_;
};


class NFv5Record
{
public:
	NFv5Record();
	~NFv5Record();
	int Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextNetFlow * t_context, int t_byteorder);
	
	// Member access functions
	uint32 srcaddr() const { return srcaddr_; }
	uint32 dstaddr() const { return dstaddr_; }
	uint32 nexthop() const { return nexthop_; }
	uint16 input() const { return input_; }
	uint16 output() const { return output_; }
	uint32 dPkts() const { return dPkts_; }
	uint32 dOctets() const { return dOctets_; }
	uint32 first() const { return first_; }
	uint32 last() const { return last_; }
	uint16 srcport() const { return srcport_; }
	uint16 dstport() const { return dstport_; }
	uint8 anonymous_field_001() const { return anonymous_field_001_; }
	uint8 tcp_flags() const { return tcp_flags_; }
	uint8 prot() const { return prot_; }
	uint8 tos() const { return tos_; }
	uint16 src_as() const { return src_as_; }
	uint16 dst_as() const { return dst_as_; }
	uint8 src_mask() const { return src_mask_; }
	uint8 dst_mask() const { return dst_mask_; }
	uint16 anonymous_field_002() const { return anonymous_field_002_; }
	bool delivered() const { return delivered_; }
	
protected:
	uint32 srcaddr_;
	uint32 dstaddr_;
	uint32 nexthop_;
	uint16 input_;
	uint16 output_;
	uint32 dPkts_;
	uint32 dOctets_;
	uint32 first_;
	uint32 last_;
	uint16 srcport_;
	uint16 dstport_;
	uint8 anonymous_field_001_;
	uint8 tcp_flags_;
	uint8 prot_;
	uint8 tos_;
	uint16 src_as_;
	uint16 dst_as_;
	uint8 src_mask_;
	uint8 dst_mask_;
	uint16 anonymous_field_002_;
	bool delivered_;
};


class NFv9Record
{
public:
	NFv9Record();
	~NFv9Record();
	int Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, int t_byteorder);
	
	// Member access functions
	uint32 flowset_id() const { return flowset_id_; }
	uint32 length() const { return length_; }
	bytestring const & data() const { return data_; }
	
protected:
	uint32 flowset_id_;
	uint32 length_;
	bytestring data_;
};

} // namespace NetFlow
}  // namespace binpac
#endif /* _home_benjamin_Bro_bro_2_3_1_src_analyzer_protocol_netflow_netflow_pac_h */
