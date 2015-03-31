// This file is automatically generated from /home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/bittorrent/bittorrent.pac.


#ifdef __clang__
#pragma clang diagnostic ignored "-Wparentheses-equality"
#endif

#include "/home/benjamin/Bro/bro-2.3.1/build/src/analyzer/protocol/bittorrent/bittorrent_pac.h"

namespace binpac {






namespace BitTorrent {
ContextBitTorrent::ContextBitTorrent(BitTorrent_Conn * connection, BitTorrent_Flow * flow, FlowBuffer * flow_buffer)
	{
	connection_ = connection;
	flow_ = flow;
	flow_buffer_ = flow_buffer;
	}

ContextBitTorrent::~ContextBitTorrent()
	{
	}

BitTorrent_Handshake::BitTorrent_Handshake()
	{
	pstrlen_ = 0;
	validate_ = 0;
	deliver_ = 0;
	buffering_state_ = 0;
	buffering_state_ = 0;
	}

BitTorrent_Handshake::~BitTorrent_Handshake()
	{
	pstr_.free();
	reserved_.free();
	info_hash_.free();
	peer_id_.free();
	}

bool BitTorrent_Handshake::ParseBuffer(flow_buffer_t t_flow_buffer, ContextBitTorrent * t_context)
	{
	bool t_val_parsing_complete;
	t_val_parsing_complete = false;
	const_byteptr t_begin_of_data = t_flow_buffer->begin();
	const_byteptr t_end_of_data = t_flow_buffer->end();
	switch ( buffering_state_ )
		{
		case 0:
			if ( buffering_state_ == 0 )
				{
				t_flow_buffer->NewFrame(0, false);
				buffering_state_ = 1;
				}
			buffering_state_ = 1;
			break;
		case 1:
			{
			buffering_state_ = 2;
			t_flow_buffer->GrowFrame(68);
			}
			break;
		case 2:
			BINPAC_ASSERT(t_flow_buffer->ready());
			if ( t_flow_buffer->ready() )
				{
				// Checking out-of-bound for "BitTorrent_Handshake:pstrlen"
				if ( t_begin_of_data + (1) > t_end_of_data )
					{
					// Handle out-of-bound condition
					throw binpac::ExceptionOutOfBound("BitTorrent_Handshake:pstrlen",
						(0) + (1), 
						(t_end_of_data) - (t_begin_of_data));
					}
				// Parse "pstrlen"
				pstrlen_ = *((uint8 const *) (t_begin_of_data));
				// Evaluate 'let' and 'withinput' fields
				
				// Parse "pstr"
				// Checking out-of-bound for "BitTorrent_Handshake:pstr"
				if ( (t_begin_of_data + 1) + (19) > t_end_of_data )
					{
					// Handle out-of-bound condition
					throw binpac::ExceptionOutOfBound("BitTorrent_Handshake:pstr",
						(1) + (19), 
						(t_end_of_data) - (t_begin_of_data));
					}
				{
				// Setting t_end_of_data with &length
				const_byteptr t_end_of_data = (t_begin_of_data + 1) + 19;
				int t_pstr_string_length;
				t_pstr_string_length = 19;
				int t_pstr__size;
				t_pstr__size = t_pstr_string_length;
				pstr_.init((t_begin_of_data + 1), t_pstr_string_length);
				// Evaluate 'let' and 'withinput' fields
				}
				
				const_byteptr const t_dataptr_after_pstr = (t_begin_of_data + 1) + (19);
				BINPAC_ASSERT(t_dataptr_after_pstr <= t_end_of_data);
				// Parse "reserved"
				// Checking out-of-bound for "BitTorrent_Handshake:reserved"
				if ( t_dataptr_after_pstr + (8) > t_end_of_data )
					{
					// Handle out-of-bound condition
					throw binpac::ExceptionOutOfBound("BitTorrent_Handshake:reserved",
						((t_dataptr_after_pstr - t_begin_of_data)) + (8), 
						(t_end_of_data) - (t_begin_of_data));
					}
				{
				// Setting t_end_of_data with &length
				const_byteptr t_end_of_data = t_dataptr_after_pstr + 8;
				int t_reserved_string_length;
				t_reserved_string_length = 8;
				int t_reserved__size;
				t_reserved__size = t_reserved_string_length;
				reserved_.init(t_dataptr_after_pstr, t_reserved_string_length);
				// Evaluate 'let' and 'withinput' fields
				}
				
				const_byteptr const t_dataptr_after_reserved = t_dataptr_after_pstr + (8);
				BINPAC_ASSERT(t_dataptr_after_reserved <= t_end_of_data);
				// Parse "info_hash"
				// Checking out-of-bound for "BitTorrent_Handshake:info_hash"
				if ( t_dataptr_after_reserved + (20) > t_end_of_data )
					{
					// Handle out-of-bound condition
					throw binpac::ExceptionOutOfBound("BitTorrent_Handshake:info_hash",
						((t_dataptr_after_reserved - t_begin_of_data)) + (20), 
						(t_end_of_data) - (t_begin_of_data));
					}
				{
				// Setting t_end_of_data with &length
				const_byteptr t_end_of_data = t_dataptr_after_reserved + 20;
				int t_info_hash_string_length;
				t_info_hash_string_length = 20;
				int t_info_hash__size;
				t_info_hash__size = t_info_hash_string_length;
				info_hash_.init(t_dataptr_after_reserved, t_info_hash_string_length);
				// Evaluate 'let' and 'withinput' fields
				}
				
				const_byteptr const t_dataptr_after_info_hash = t_dataptr_after_reserved + (20);
				BINPAC_ASSERT(t_dataptr_after_info_hash <= t_end_of_data);
				// Parse "peer_id"
				// Checking out-of-bound for "BitTorrent_Handshake:peer_id"
				if ( t_dataptr_after_info_hash + (20) > t_end_of_data )
					{
					// Handle out-of-bound condition
					throw binpac::ExceptionOutOfBound("BitTorrent_Handshake:peer_id",
						((t_dataptr_after_info_hash - t_begin_of_data)) + (20), 
						(t_end_of_data) - (t_begin_of_data));
					}
				{
				// Setting t_end_of_data with &length
				const_byteptr t_end_of_data = t_dataptr_after_info_hash + 20;
				int t_peer_id_string_length;
				t_peer_id_string_length = 20;
				int t_peer_id__size;
				t_peer_id__size = t_peer_id_string_length;
				peer_id_.init(t_dataptr_after_info_hash, t_peer_id_string_length);
				// Evaluate 'let' and 'withinput' fields
				}
				
				t_val_parsing_complete = true;
				if ( t_val_parsing_complete )
					{
					// Evaluate 'let' and 'withinput' fields
					validate_ = t_context->flow()->validate_handshake(pstrlen(), pstr());
					deliver_ = t_context->flow()->deliver_handshake(reserved(), info_hash(), peer_id());
					}
				BINPAC_ASSERT(t_val_parsing_complete);
				buffering_state_ = 0;
				}
			break;
		default:
			BINPAC_ASSERT(buffering_state_ <= 2);
			break;
		}
	return t_val_parsing_complete;
	}

BitTorrent_KeepAlive::BitTorrent_KeepAlive()
	{
	deliver_ = 0;
	}

BitTorrent_KeepAlive::~BitTorrent_KeepAlive()
	{
	}

int BitTorrent_KeepAlive::Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextBitTorrent * t_context)
	{
	// Evaluate 'let' and 'withinput' fields
	deliver_ = t_context->flow()->deliver_keep_alive();
	BINPAC_ASSERT(t_begin_of_data + (0) <= t_end_of_data);
	return 0;
	}

BitTorrent_Choke::BitTorrent_Choke()
	{
	deliver_ = 0;
	}

BitTorrent_Choke::~BitTorrent_Choke()
	{
	}

int BitTorrent_Choke::Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextBitTorrent * t_context)
	{
	// Evaluate 'let' and 'withinput' fields
	deliver_ = t_context->flow()->deliver_choke();
	BINPAC_ASSERT(t_begin_of_data + (0) <= t_end_of_data);
	return 0;
	}

BitTorrent_Unchoke::BitTorrent_Unchoke()
	{
	deliver_ = 0;
	}

BitTorrent_Unchoke::~BitTorrent_Unchoke()
	{
	}

int BitTorrent_Unchoke::Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextBitTorrent * t_context)
	{
	// Evaluate 'let' and 'withinput' fields
	deliver_ = t_context->flow()->deliver_unchoke();
	BINPAC_ASSERT(t_begin_of_data + (0) <= t_end_of_data);
	return 0;
	}

BitTorrent_Interested::BitTorrent_Interested()
	{
	deliver_ = 0;
	}

BitTorrent_Interested::~BitTorrent_Interested()
	{
	}

int BitTorrent_Interested::Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextBitTorrent * t_context)
	{
	// Evaluate 'let' and 'withinput' fields
	deliver_ = t_context->flow()->deliver_interested();
	BINPAC_ASSERT(t_begin_of_data + (0) <= t_end_of_data);
	return 0;
	}

BitTorrent_NotInterested::BitTorrent_NotInterested()
	{
	deliver_ = 0;
	}

BitTorrent_NotInterested::~BitTorrent_NotInterested()
	{
	}

int BitTorrent_NotInterested::Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextBitTorrent * t_context)
	{
	// Evaluate 'let' and 'withinput' fields
	deliver_ = t_context->flow()->deliver_not_interested();
	BINPAC_ASSERT(t_begin_of_data + (0) <= t_end_of_data);
	return 0;
	}

BitTorrent_Have::BitTorrent_Have()
	{
	piece_index_ = 0;
	deliver_ = 0;
	}

BitTorrent_Have::~BitTorrent_Have()
	{
	}

int BitTorrent_Have::Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextBitTorrent * t_context, int t_byteorder)
	{
	// Checking out-of-bound for "BitTorrent_Have"
	if ( t_begin_of_data + (4) > t_end_of_data )
		{
		// Handle out-of-bound condition
		throw binpac::ExceptionOutOfBound("BitTorrent_Have",
			(0) + (4), 
			(t_end_of_data) - (t_begin_of_data));
		}
	// Parse "piece_index"
	piece_index_ = FixByteOrder(t_byteorder, *((uint32 const *) (t_begin_of_data)));
	// Evaluate 'let' and 'withinput' fields
	
	// Evaluate 'let' and 'withinput' fields
	deliver_ = t_context->flow()->deliver_have(piece_index());
	BINPAC_ASSERT(t_begin_of_data + (4) <= t_end_of_data);
	return 4;
	}

BitTorrent_Bitfield::BitTorrent_Bitfield(uint32 len)
	{
	len_ = len;
	deliver_ = 0;
	}

BitTorrent_Bitfield::~BitTorrent_Bitfield()
	{
	bitfield_.free();
	}

int BitTorrent_Bitfield::Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextBitTorrent * t_context)
	{
	// Parse "bitfield"
	int t_bitfield__size;
	t_bitfield__size = len();
	// Checking out-of-bound for "BitTorrent_Bitfield:bitfield"
	if ( t_begin_of_data + (t_bitfield__size) > t_end_of_data )
		{
		// Handle out-of-bound condition
		throw binpac::ExceptionOutOfBound("BitTorrent_Bitfield:bitfield",
			(0) + (t_bitfield__size), 
			(t_end_of_data) - (t_begin_of_data));
		}
	{
	// Setting t_end_of_data with &length
	const_byteptr t_end_of_data = t_begin_of_data + t_bitfield__size;
	int t_bitfield_string_length;
	t_bitfield_string_length = len();
	// check for negative sizes
	if ( t_bitfield_string_length < 0 )
	throw binpac::ExceptionInvalidStringLength("/home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/bittorrent/bittorrent-protocol.pac:58", t_bitfield_string_length);
	bitfield_.init(t_begin_of_data, t_bitfield_string_length);
	// Evaluate 'let' and 'withinput' fields
	}
	
	int t_BitTorrent_Bitfield__size;
	const_byteptr const t_dataptr_after_bitfield = t_begin_of_data + (t_bitfield__size);
	BINPAC_ASSERT(t_dataptr_after_bitfield <= t_end_of_data);
	t_BitTorrent_Bitfield__size = t_dataptr_after_bitfield - t_begin_of_data;
	// Evaluate 'let' and 'withinput' fields
	deliver_ = t_context->flow()->deliver_bitfield(bitfield());
	BINPAC_ASSERT(t_begin_of_data + (t_BitTorrent_Bitfield__size) <= t_end_of_data);
	return t_BitTorrent_Bitfield__size;
	}

BitTorrent_Request::BitTorrent_Request()
	{
	index_ = 0;
	begin_ = 0;
	length_ = 0;
	deliver_ = 0;
	}

BitTorrent_Request::~BitTorrent_Request()
	{
	}

int BitTorrent_Request::Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextBitTorrent * t_context, int t_byteorder)
	{
	// Checking out-of-bound for "BitTorrent_Request"
	if ( t_begin_of_data + (12) > t_end_of_data )
		{
		// Handle out-of-bound condition
		throw binpac::ExceptionOutOfBound("BitTorrent_Request",
			(0) + (12), 
			(t_end_of_data) - (t_begin_of_data));
		}
	// Parse "index"
	index_ = FixByteOrder(t_byteorder, *((uint32 const *) (t_begin_of_data)));
	// Evaluate 'let' and 'withinput' fields
	
	// Parse "begin"
	begin_ = FixByteOrder(t_byteorder, *((uint32 const *) ((t_begin_of_data + 4))));
	// Evaluate 'let' and 'withinput' fields
	
	// Parse "length"
	length_ = FixByteOrder(t_byteorder, *((uint32 const *) ((t_begin_of_data + 8))));
	// Evaluate 'let' and 'withinput' fields
	
	// Evaluate 'let' and 'withinput' fields
	deliver_ = t_context->flow()->deliver_request(index(), begin(), length());
	BINPAC_ASSERT(t_begin_of_data + (12) <= t_end_of_data);
	return 12;
	}

BitTorrent_PieceHeader::BitTorrent_PieceHeader(uint32 len)
	{
	index_ = 0;
	begin_ = 0;
	len_ = len;
	}

BitTorrent_PieceHeader::~BitTorrent_PieceHeader()
	{
	}

int BitTorrent_PieceHeader::Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, int t_byteorder)
	{
	// Checking out-of-bound for "BitTorrent_PieceHeader"
	if ( t_begin_of_data + (8) > t_end_of_data )
		{
		// Handle out-of-bound condition
		throw binpac::ExceptionOutOfBound("BitTorrent_PieceHeader",
			(0) + (8), 
			(t_end_of_data) - (t_begin_of_data));
		}
	// Parse "index"
	index_ = FixByteOrder(t_byteorder, *((uint32 const *) (t_begin_of_data)));
	// Evaluate 'let' and 'withinput' fields
	
	// Parse "begin"
	begin_ = FixByteOrder(t_byteorder, *((uint32 const *) ((t_begin_of_data + 4))));
	// Evaluate 'let' and 'withinput' fields
	
	// Evaluate 'let' and 'withinput' fields
	BINPAC_ASSERT(t_begin_of_data + (8) <= t_end_of_data);
	return 8;
	}

BitTorrent_Piece::BitTorrent_Piece(uint32 len)
	{
	header_ = 0;
	len_ = len;
	deliver_ = 0;
	}

BitTorrent_Piece::~BitTorrent_Piece()
	{
	delete header_;
	header_ = 0;
	}

int BitTorrent_Piece::Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextBitTorrent * t_context, int t_byteorder)
	{
	// Checking out-of-bound for "BitTorrent_Piece:header"
	if ( t_begin_of_data + (8) > t_end_of_data )
		{
		// Handle out-of-bound condition
		throw binpac::ExceptionOutOfBound("BitTorrent_Piece:header",
			(0) + (8), 
			(t_end_of_data) - (t_begin_of_data));
		}
	// Parse "header"
	header_ = new BitTorrent_PieceHeader(len());
	header_->Parse(t_begin_of_data, t_end_of_data, t_byteorder);
	// Evaluate 'let' and 'withinput' fields
	
	// Parse "anonymous_field_001"
	bytestring anonymous_field_001_;
	int t_anonymous_field_001__size;
	t_anonymous_field_001__size = len() - 8;
	// Checking out-of-bound for "BitTorrent_Piece:anonymous_field_001"
	if ( (t_begin_of_data + 8) + (t_anonymous_field_001__size) > t_end_of_data )
		{
		// Handle out-of-bound condition
		throw binpac::ExceptionOutOfBound("BitTorrent_Piece:anonymous_field_001",
			(8) + (t_anonymous_field_001__size), 
			(t_end_of_data) - (t_begin_of_data));
		}
	{
	// Setting t_end_of_data with &length
	const_byteptr t_end_of_data = (t_begin_of_data + 8) + t_anonymous_field_001__size;
	int t_anonymous_field_001_string_length;
	t_anonymous_field_001_string_length = len() - 8;
	// Evaluate 'let' and 'withinput' fields
	anonymous_field_001_.free();
	}
	
	int t_BitTorrent_Piece__size;
	const_byteptr const t_dataptr_after_anonymous_field_001 = (t_begin_of_data + 8) + (t_anonymous_field_001__size);
	BINPAC_ASSERT(t_dataptr_after_anonymous_field_001 <= t_end_of_data);
	t_BitTorrent_Piece__size = t_dataptr_after_anonymous_field_001 - t_begin_of_data;
	// Evaluate 'let' and 'withinput' fields
	deliver_ = t_context->flow()->deliver_piece(header()->index(), header()->begin(), len() - 8);
	BINPAC_ASSERT(t_begin_of_data + (t_BitTorrent_Piece__size) <= t_end_of_data);
	return t_BitTorrent_Piece__size;
	}

BitTorrent_Cancel::BitTorrent_Cancel()
	{
	index_ = 0;
	begin_ = 0;
	length_ = 0;
	deliver_ = 0;
	}

BitTorrent_Cancel::~BitTorrent_Cancel()
	{
	}

int BitTorrent_Cancel::Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextBitTorrent * t_context, int t_byteorder)
	{
	// Checking out-of-bound for "BitTorrent_Cancel"
	if ( t_begin_of_data + (12) > t_end_of_data )
		{
		// Handle out-of-bound condition
		throw binpac::ExceptionOutOfBound("BitTorrent_Cancel",
			(0) + (12), 
			(t_end_of_data) - (t_begin_of_data));
		}
	// Parse "index"
	index_ = FixByteOrder(t_byteorder, *((uint32 const *) (t_begin_of_data)));
	// Evaluate 'let' and 'withinput' fields
	
	// Parse "begin"
	begin_ = FixByteOrder(t_byteorder, *((uint32 const *) ((t_begin_of_data + 4))));
	// Evaluate 'let' and 'withinput' fields
	
	// Parse "length"
	length_ = FixByteOrder(t_byteorder, *((uint32 const *) ((t_begin_of_data + 8))));
	// Evaluate 'let' and 'withinput' fields
	
	// Evaluate 'let' and 'withinput' fields
	deliver_ = t_context->flow()->deliver_cancel(index(), begin(), length());
	BINPAC_ASSERT(t_begin_of_data + (12) <= t_end_of_data);
	return 12;
	}

BitTorrent_Port::BitTorrent_Port()
	{
	listen_port_ = 0;
	deliver_ = 0;
	}

BitTorrent_Port::~BitTorrent_Port()
	{
	}

int BitTorrent_Port::Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextBitTorrent * t_context, int t_byteorder)
	{
	// Checking out-of-bound for "BitTorrent_Port"
	if ( t_begin_of_data + (2) > t_end_of_data )
		{
		// Handle out-of-bound condition
		throw binpac::ExceptionOutOfBound("BitTorrent_Port",
			(0) + (2), 
			(t_end_of_data) - (t_begin_of_data));
		}
	// Parse "listen_port"
	listen_port_ = FixByteOrder(t_byteorder, *((uint16 const *) (t_begin_of_data)));
	// Evaluate 'let' and 'withinput' fields
	
	// Evaluate 'let' and 'withinput' fields
	deliver_ = t_context->flow()->deliver_port(listen_port());
	BINPAC_ASSERT(t_begin_of_data + (2) <= t_end_of_data);
	return 2;
	}

BitTorrent_Unknown::BitTorrent_Unknown(uint8 id, uint32 len)
	{
	id_ = id;
	len_ = len;
	deliver_ = 0;
	}

BitTorrent_Unknown::~BitTorrent_Unknown()
	{
	data_.free();
	}

int BitTorrent_Unknown::Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextBitTorrent * t_context)
	{
	// Parse "data"
	int t_data__size;
	t_data__size = len();
	// Checking out-of-bound for "BitTorrent_Unknown:data"
	if ( t_begin_of_data + (t_data__size) > t_end_of_data )
		{
		// Handle out-of-bound condition
		throw binpac::ExceptionOutOfBound("BitTorrent_Unknown:data",
			(0) + (t_data__size), 
			(t_end_of_data) - (t_begin_of_data));
		}
	{
	// Setting t_end_of_data with &length
	const_byteptr t_end_of_data = t_begin_of_data + t_data__size;
	int t_data_string_length;
	t_data_string_length = len();
	// check for negative sizes
	if ( t_data_string_length < 0 )
	throw binpac::ExceptionInvalidStringLength("/home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/bittorrent/bittorrent-protocol.pac:102", t_data_string_length);
	data_.init(t_begin_of_data, t_data_string_length);
	// Evaluate 'let' and 'withinput' fields
	}
	
	int t_BitTorrent_Unknown__size;
	const_byteptr const t_dataptr_after_data = t_begin_of_data + (t_data__size);
	BINPAC_ASSERT(t_dataptr_after_data <= t_end_of_data);
	t_BitTorrent_Unknown__size = t_dataptr_after_data - t_begin_of_data;
	// Evaluate 'let' and 'withinput' fields
	deliver_ = t_context->flow()->deliver_unknown(id(), data());
	BINPAC_ASSERT(t_begin_of_data + (t_BitTorrent_Unknown__size) <= t_end_of_data);
	return t_BitTorrent_Unknown__size;
	}

BitTorrent_MessageID::BitTorrent_MessageID(uint32 len)
	{
	id_ = 0;
	data_case_index_ = -1;
	choke_ = 0;
	unchoke_ = 0;
	interested_ = 0;
	not_interested_ = 0;
	have_ = 0;
	bitfield_ = 0;
	request_ = 0;
	piece_ = 0;
	cancel_ = 0;
	port_ = 0;
	unknown_ = 0;
	len_ = len;
	}

BitTorrent_MessageID::~BitTorrent_MessageID()
	{
	switch ( data_case_index() )
		{
		case 0:
			// Clean up "choke"
			{
			delete choke_;
			choke_ = 0;
			}
			break;
		case 1:
			// Clean up "unchoke"
			{
			delete unchoke_;
			unchoke_ = 0;
			}
			break;
		case 2:
			// Clean up "interested"
			{
			delete interested_;
			interested_ = 0;
			}
			break;
		case 3:
			// Clean up "not_interested"
			{
			delete not_interested_;
			not_interested_ = 0;
			}
			break;
		case 4:
			// Clean up "have"
			{
			delete have_;
			have_ = 0;
			}
			break;
		case 5:
			// Clean up "bitfield"
			{
			delete bitfield_;
			bitfield_ = 0;
			}
			break;
		case 6:
			// Clean up "request"
			{
			delete request_;
			request_ = 0;
			}
			break;
		case 7:
			// Clean up "piece"
			{
			delete piece_;
			piece_ = 0;
			}
			break;
		case 8:
			// Clean up "cancel"
			{
			delete cancel_;
			cancel_ = 0;
			}
			break;
		case 9:
			// Clean up "port"
			{
			delete port_;
			port_ = 0;
			}
			break;
		default:
			// Clean up "unknown"
			{
			delete unknown_;
			unknown_ = 0;
			}
			break;
		}
	}

int BitTorrent_MessageID::Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextBitTorrent * t_context, int t_byteorder)
	{
	// Checking out-of-bound for "BitTorrent_MessageID:id"
	if ( t_begin_of_data + (1) > t_end_of_data )
		{
		// Handle out-of-bound condition
		throw binpac::ExceptionOutOfBound("BitTorrent_MessageID:id",
			(0) + (1), 
			(t_end_of_data) - (t_begin_of_data));
		}
	// Parse "id"
	id_ = *((uint8 const *) (t_begin_of_data));
	// Evaluate 'let' and 'withinput' fields
	
	// Parse "data"
	int t_data__size;
	data_case_index_ = id();
	switch ( data_case_index() )
		{
		case 0:
			// Parse "choke"
			{
			choke_ = new BitTorrent_Choke();
			choke_->Parse(0, 0, t_context);
			// Evaluate 'let' and 'withinput' fields
			t_data__size = 0;
			}
			break;
		case 1:
			// Parse "unchoke"
			{
			unchoke_ = new BitTorrent_Unchoke();
			unchoke_->Parse(0, 0, t_context);
			// Evaluate 'let' and 'withinput' fields
			t_data__size = 0;
			}
			break;
		case 2:
			// Parse "interested"
			{
			interested_ = new BitTorrent_Interested();
			interested_->Parse(0, 0, t_context);
			// Evaluate 'let' and 'withinput' fields
			t_data__size = 0;
			}
			break;
		case 3:
			// Parse "not_interested"
			{
			not_interested_ = new BitTorrent_NotInterested();
			not_interested_->Parse(0, 0, t_context);
			// Evaluate 'let' and 'withinput' fields
			t_data__size = 0;
			}
			break;
		case 4:
			// Parse "have"
			{
			have_ = new BitTorrent_Have();
			have_->Parse((t_begin_of_data + 1), t_end_of_data, t_context, t_byteorder);
			// Evaluate 'let' and 'withinput' fields
			t_data__size = 4;
			}
			break;
		case 5:
			// Parse "bitfield"
			{
			bitfield_ = new BitTorrent_Bitfield(len() - 1);
			int t_bitfield__size;
			t_bitfield__size = bitfield_->Parse((t_begin_of_data + 1), t_end_of_data, t_context);
			// Evaluate 'let' and 'withinput' fields
			t_data__size = t_bitfield__size;
			}
			break;
		case 6:
			// Parse "request"
			{
			request_ = new BitTorrent_Request();
			request_->Parse((t_begin_of_data + 1), t_end_of_data, t_context, t_byteorder);
			// Evaluate 'let' and 'withinput' fields
			t_data__size = 12;
			}
			break;
		case 7:
			// Parse "piece"
			{
			piece_ = new BitTorrent_Piece(len() - 1);
			int t_piece__size;
			t_piece__size = piece_->Parse((t_begin_of_data + 1), t_end_of_data, t_context, t_byteorder);
			// Evaluate 'let' and 'withinput' fields
			t_data__size = t_piece__size;
			}
			break;
		case 8:
			// Parse "cancel"
			{
			cancel_ = new BitTorrent_Cancel();
			cancel_->Parse((t_begin_of_data + 1), t_end_of_data, t_context, t_byteorder);
			// Evaluate 'let' and 'withinput' fields
			t_data__size = 12;
			}
			break;
		case 9:
			// Parse "port"
			{
			port_ = new BitTorrent_Port();
			port_->Parse((t_begin_of_data + 1), t_end_of_data, t_context, t_byteorder);
			// Evaluate 'let' and 'withinput' fields
			t_data__size = 2;
			}
			break;
		default:
			// Parse "unknown"
			{
			unknown_ = new BitTorrent_Unknown(id(), len() - 1);
			int t_unknown__size;
			t_unknown__size = unknown_->Parse((t_begin_of_data + 1), t_end_of_data, t_context);
			// Evaluate 'let' and 'withinput' fields
			t_data__size = t_unknown__size;
			}
			break;
		}
	// Evaluate 'let' and 'withinput' fields
	
	int t_BitTorrent_MessageID__size;
	const_byteptr const t_dataptr_after_data = (t_begin_of_data + 1) + (t_data__size);
	BINPAC_ASSERT(t_dataptr_after_data <= t_end_of_data);
	t_BitTorrent_MessageID__size = t_dataptr_after_data - t_begin_of_data;
	// Evaluate 'let' and 'withinput' fields
	BINPAC_ASSERT(t_begin_of_data + (t_BitTorrent_MessageID__size) <= t_end_of_data);
	return t_BitTorrent_MessageID__size;
	}

BitTorrent_MessageLength::BitTorrent_MessageLength()
	{
	len_ = 0;
	validate_ = 0;
	}

BitTorrent_MessageLength::~BitTorrent_MessageLength()
	{
	}

int BitTorrent_MessageLength::Parse(const_byteptr const t_begin_of_data, const_byteptr const t_end_of_data, ContextBitTorrent * t_context, int t_byteorder)
	{
	// Checking out-of-bound for "BitTorrent_MessageLength"
	if ( t_begin_of_data + (4) > t_end_of_data )
		{
		// Handle out-of-bound condition
		throw binpac::ExceptionOutOfBound("BitTorrent_MessageLength",
			(0) + (4), 
			(t_end_of_data) - (t_begin_of_data));
		}
	// Parse "len"
	len_ = FixByteOrder(t_byteorder, *((uint32 const *) (t_begin_of_data)));
	// Evaluate 'let' and 'withinput' fields
	
	// Evaluate 'let' and 'withinput' fields
	validate_ = t_context->flow()->validate_message_length(len());
	BINPAC_ASSERT(t_begin_of_data + (4) <= t_end_of_data);
	return 4;
	}

BitTorrent_Message::BitTorrent_Message()
	{
	len_ = 0;
	data_case_index_ = -1;
	keep_alive_ = 0;
	message_id_ = 0;
	buffering_state_ = 0;
	buffering_state_ = 0;
	}

BitTorrent_Message::~BitTorrent_Message()
	{
	delete len_;
	len_ = 0;
	switch ( data_case_index() )
		{
		case 0:
			// Clean up "keep_alive"
			{
			delete keep_alive_;
			keep_alive_ = 0;
			}
			break;
		default:
			// Clean up "message_id"
			{
			delete message_id_;
			message_id_ = 0;
			}
			break;
		}
	}

bool BitTorrent_Message::ParseBuffer(flow_buffer_t t_flow_buffer, ContextBitTorrent * t_context, int t_byteorder)
	{
	bool t_val_parsing_complete;
	t_val_parsing_complete = false;
	const_byteptr t_begin_of_data = t_flow_buffer->begin();
	const_byteptr t_end_of_data = t_flow_buffer->end();
	switch ( buffering_state_ )
		{
		case 0:
			if ( buffering_state_ == 0 )
				{
				t_flow_buffer->NewFrame(4, false);
				buffering_state_ = 1;
				}
			buffering_state_ = 1;
			break;
		case 1:
			{
			buffering_state_ = 2;
			// Checking out-of-bound for "BitTorrent_Message:len"
			if ( t_begin_of_data + (4) > t_end_of_data )
				{
				// Handle out-of-bound condition
				throw binpac::ExceptionOutOfBound("BitTorrent_Message:len",
					(0) + (4), 
					(t_end_of_data) - (t_begin_of_data));
				}
			// Parse "len"
			len_ = new BitTorrent_MessageLength();
			len_->Parse(t_begin_of_data, t_end_of_data, t_context, t_byteorder);
			// Evaluate 'let' and 'withinput' fields
			t_flow_buffer->GrowFrame(4 + len()->len());
			}
			break;
		case 2:
			BINPAC_ASSERT(t_flow_buffer->ready());
			if ( t_flow_buffer->ready() )
				{
				
				// Parse "data"
				int t_data__size;
				data_case_index_ = len()->len();
				switch ( data_case_index() )
					{
					case 0:
						// Parse "keep_alive"
						{
						keep_alive_ = new BitTorrent_KeepAlive();
						keep_alive_->Parse(0, 0, t_context);
						// Evaluate 'let' and 'withinput' fields
						t_data__size = 0;
						}
						break;
					default:
						// Parse "message_id"
						{
						message_id_ = new BitTorrent_MessageID(len()->len());
						int t_message_id__size;
						t_message_id__size = message_id_->Parse((t_begin_of_data + 4), t_end_of_data, t_context, t_byteorder);
						// Evaluate 'let' and 'withinput' fields
						t_data__size = t_message_id__size;
						}
						break;
					}
				// Evaluate 'let' and 'withinput' fields
				
				t_val_parsing_complete = true;
				if ( t_val_parsing_complete )
					{
					// Evaluate 'let' and 'withinput' fields
					}
				BINPAC_ASSERT(t_val_parsing_complete);
				buffering_state_ = 0;
				}
			break;
		default:
			BINPAC_ASSERT(buffering_state_ <= 2);
			break;
		}
	return t_val_parsing_complete;
	}

BitTorrent_PDU::BitTorrent_PDU()
	{
	val_case_index_ = -1;
	handshake_ = 0;
	message_ = 0;
	byteorder_ = bigendian;
	}

BitTorrent_PDU::~BitTorrent_PDU()
	{
	switch ( val_case_index() )
		{
		case 0:
			// Clean up "handshake"
			{
			delete handshake_;
			handshake_ = 0;
			}
			break;
		case 1:
			// Clean up "message"
			{
			delete message_;
			message_ = 0;
			}
			break;
		}
	}

bool BitTorrent_PDU::ParseBuffer(flow_buffer_t t_flow_buffer, ContextBitTorrent * t_context)
	{
	bool t_val_parsing_complete;
	t_val_parsing_complete = false;
	val_case_index_ = t_context->flow()->is_handshake_delivered();
	switch ( val_case_index() )
		{
		case 0:
			// Parse "handshake"
			{
			if ( ! handshake_ )
				{
				handshake_ = new BitTorrent_Handshake();
				}
			bool t_handshake_parsing_complete;
			t_handshake_parsing_complete = false;
			while ( ! t_handshake_parsing_complete && t_flow_buffer->ready() )
				{
				const_byteptr t_begin_of_data = t_flow_buffer->begin();
				const_byteptr t_end_of_data = t_flow_buffer->end();
				t_handshake_parsing_complete = handshake_->ParseBuffer(t_flow_buffer, t_context);
				if ( t_handshake_parsing_complete )
					{
					// Evaluate 'let' and 'withinput' fields
					}
				}
			t_val_parsing_complete = t_handshake_parsing_complete;
			}
			break;
		case 1:
			// Parse "message"
			{
			if ( ! message_ )
				{
				message_ = new BitTorrent_Message();
				}
			bool t_message_parsing_complete;
			t_message_parsing_complete = false;
			while ( ! t_message_parsing_complete && t_flow_buffer->ready() )
				{
				const_byteptr t_begin_of_data = t_flow_buffer->begin();
				const_byteptr t_end_of_data = t_flow_buffer->end();
				t_message_parsing_complete = message_->ParseBuffer(t_flow_buffer, t_context, byteorder());
				if ( t_message_parsing_complete )
					{
					// Evaluate 'let' and 'withinput' fields
					}
				}
			t_val_parsing_complete = t_message_parsing_complete;
			}
			break;
		default:
			throw binpac::ExceptionInvalidCaseIndex("BitTorrent_PDU", val_case_index());
			break;
		}
	if ( t_val_parsing_complete )
		{
		// Evaluate 'let' and 'withinput' fields
		}
	return t_val_parsing_complete;
	}

BitTorrent_Conn::BitTorrent_Conn(BroAnalyzer const & bro_analyzer)
	{
	upflow_ = new BitTorrent_Flow(this, true);
	downflow_ = new BitTorrent_Flow(this, false);
	bro_analyzer_ = bro_analyzer;
	}

BitTorrent_Conn::~BitTorrent_Conn()
	{
	delete upflow_;
	upflow_ = 0;
	delete downflow_;
	downflow_ = 0;
	}

void BitTorrent_Conn::NewData(bool is_orig, const_byteptr begin, const_byteptr end)
	{
	if ( is_orig )
		upflow_->NewData(begin, end);
	else
		downflow_->NewData(begin, end);
	}

void BitTorrent_Conn::NewGap(bool is_orig, int gap_length)
	{
	if ( is_orig )
		upflow_->NewGap(gap_length);
	else
		downflow_->NewGap(gap_length);
	}

void BitTorrent_Conn::FlowEOF(bool is_orig)
	{
	if ( is_orig )
		upflow_->FlowEOF();
	else
		downflow_->FlowEOF();
	}

BitTorrent_Flow::BitTorrent_Flow(BitTorrent_Conn * connection, bool is_orig)
	{
	flow_buffer_ = 0;
	connection_ = connection;
	is_orig_ = is_orig;

		handshake_ok = false;
		//_next_message_offset = 0;
	
	dataunit_ = 0;
	context_ = 0;
	flow_buffer_ = new FlowBuffer();
	}

BitTorrent_Flow::~BitTorrent_Flow()
	{
	delete dataunit_;
	dataunit_ = 0;
	delete context_;
	context_ = 0;
	delete flow_buffer_;
	flow_buffer_ = 0;
	}

void BitTorrent_Flow::NewData(const_byteptr t_begin_of_data, const_byteptr t_end_of_data)
	{
	try
		{
		flow_buffer_->NewData(t_begin_of_data, t_end_of_data);
		while ( flow_buffer_->data_available() && 
			( !flow_buffer_->have_pending_request() || flow_buffer_->ready() ) )
			{
			if ( ! dataunit_ )
				{
				BINPAC_ASSERT(!context_);
				dataunit_ = new BitTorrent_PDU();
				context_ = new ContextBitTorrent(connection(), this, flow_buffer());
				}
			bool t_dataunit_parsing_complete;
			t_dataunit_parsing_complete = false;
			t_dataunit_parsing_complete = dataunit_->ParseBuffer(flow_buffer(), context_);
			if ( t_dataunit_parsing_complete )
				{
				// Evaluate 'let' and 'withinput' fields
				}
			if ( t_dataunit_parsing_complete )
				{
				// Clean up the flow unit after parsing
				delete dataunit_;
				dataunit_ = 0;
				delete context_;
				context_ = 0;
				}
			else
				{
				// Resume upon next input segment
				BINPAC_ASSERT(!flow_buffer()->ready());
				break;
				}
			}
		}
	catch ( binpac::Exception const &e )
		{
		delete dataunit_;
		dataunit_ = 0;
		delete context_;
		context_ = 0;
		flow_buffer_->DiscardData();
		throw;
		}
	}

void BitTorrent_Flow::NewGap(int gap_length)
	{
	flow_buffer_->NewGap(gap_length);
	}
void BitTorrent_Flow::FlowEOF()
	{
	flow_buffer_->set_eof();
	NewData(0, 0);
	}
bool BitTorrent_Flow::is_handshake_delivered()
	{

		return handshake_ok;
		
	}

bool BitTorrent_Flow::validate_handshake(uint8 pstrlen, const_bytestring const & pstr)
	{

		if ( pstrlen != 19 ||
		     memcmp("BitTorrent protocol", pstr.begin(), 19) )
			{
			connection()->bro_analyzer()->Weird(fmt("BitTorrent: invalid handshake (pstrlen: %hhu, pstr: %.*s)", pstrlen, 19, pstr.begin()));
			throw Exception("invalid handshake");
			}

		return true;
		
	}

bool BitTorrent_Flow::validate_message_length(uint32 len)
	{

		if ( len > MSGLEN_LIMIT )
			throw Exception(fmt("message length prefix exceeds limit: %u > %u",
					len, MSGLEN_LIMIT));
		return true;
		
	}

bool BitTorrent_Flow::deliver_handshake(const_bytestring const & reserved, const_bytestring const & info_hash, const_bytestring const & peer_id)
	{

		handshake_ok = true;
		if ( ::bittorrent_peer_handshake )
			{
			BifEvent::generate_bittorrent_peer_handshake(
				connection()->bro_analyzer(),
				connection()->bro_analyzer()->Conn(),
				is_orig(),
				bytestring_to_val(reserved),
				bytestring_to_val(info_hash),
				bytestring_to_val(peer_id));
			}

		connection()->bro_analyzer()->ProtocolConfirmation();

		return true;
		
	}

bool BitTorrent_Flow::deliver_keep_alive()
	{

		if ( ::bittorrent_peer_keep_alive )
			{
			BifEvent::generate_bittorrent_peer_keep_alive(
				connection()->bro_analyzer(),
				connection()->bro_analyzer()->Conn(),
				is_orig());
			}

		return true;
		
	}

bool BitTorrent_Flow::deliver_choke()
	{

		if ( ::bittorrent_peer_choke )
			{
			BifEvent::generate_bittorrent_peer_choke(
				connection()->bro_analyzer(),
				connection()->bro_analyzer()->Conn(),
				is_orig());
			}

		return true;
		
	}

bool BitTorrent_Flow::deliver_unchoke()
	{

		if ( ::bittorrent_peer_unchoke )
			{
			BifEvent::generate_bittorrent_peer_unchoke(
				connection()->bro_analyzer(),
				connection()->bro_analyzer()->Conn(),
				is_orig());
			}

		return true;
		
	}

bool BitTorrent_Flow::deliver_interested()
	{

		if ( ::bittorrent_peer_interested )
			{
			BifEvent::generate_bittorrent_peer_interested(
				connection()->bro_analyzer(),
				connection()->bro_analyzer()->Conn(),
				is_orig());
			}

		return true;
		
	}

bool BitTorrent_Flow::deliver_not_interested()
	{

		if ( ::bittorrent_peer_not_interested )
			{
			BifEvent::generate_bittorrent_peer_not_interested(
				connection()->bro_analyzer(),
				connection()->bro_analyzer()->Conn(),
				is_orig());
			}

		return true;
		
	}

bool BitTorrent_Flow::deliver_have(uint32 piece_index)
	{

		if ( ::bittorrent_peer_have )
			{
			BifEvent::generate_bittorrent_peer_have(
				connection()->bro_analyzer(),
				connection()->bro_analyzer()->Conn(),
				is_orig(),
				piece_index);
			}

		return true;
		
	}

bool BitTorrent_Flow::deliver_bitfield(const_bytestring const & bitfield)
	{

		if ( ::bittorrent_peer_bitfield )
			{
			BifEvent::generate_bittorrent_peer_bitfield(
				connection()->bro_analyzer(),
				connection()->bro_analyzer()->Conn(),
				is_orig(),
				bytestring_to_val(bitfield));
			}

		return true;
		
	}

bool BitTorrent_Flow::deliver_request(uint32 index, uint32 begin, uint32 length)
	{

		if ( ::bittorrent_peer_request )
			{
			BifEvent::generate_bittorrent_peer_request(
				connection()->bro_analyzer(),
				connection()->bro_analyzer()->Conn(),
				is_orig(),
				index, begin, length);
			}

		return true;
		
	}

bool BitTorrent_Flow::deliver_piece(uint32 index, uint32 begin, uint32 piece_length)
	{

		if ( ::bittorrent_peer_piece )
			{
			BifEvent::generate_bittorrent_peer_piece(
				connection()->bro_analyzer(),
				connection()->bro_analyzer()->Conn(),
				is_orig(),
				index, begin, piece_length);
			}

		return true;
		
	}

bool BitTorrent_Flow::deliver_cancel(uint32 index, uint32 begin, uint32 length)
	{

		if ( ::bittorrent_peer_cancel )
			{
			BifEvent::generate_bittorrent_peer_cancel(
				connection()->bro_analyzer(),
				connection()->bro_analyzer()->Conn(),
				is_orig(),
				index, begin, length);
			}

		return true;
		
	}

bool BitTorrent_Flow::deliver_port(uint16 listen_port)
	{

		if ( ::bittorrent_peer_port )
			{
			BifEvent::generate_bittorrent_peer_port(
				connection()->bro_analyzer(),
				connection()->bro_analyzer()->Conn(),
				is_orig(),
				new PortVal(listen_port, TRANSPORT_TCP));
			}

		return true;
		
	}

bool BitTorrent_Flow::deliver_unknown(uint8 id, const_bytestring const & data)
	{

		if ( ::bittorrent_peer_unknown )
			{
			BifEvent::generate_bittorrent_peer_unknown(
				connection()->bro_analyzer(),
				connection()->bro_analyzer()->Conn(),
				is_orig(),
				id,
				bytestring_to_val(data));
			}

		return true;
		
	}

} // namespace BitTorrent
}  // namespace binpac
