// This file was automatically generated by bifcl from /home/benjamin/Bro/bro-2.3.1/src/probabilistic/top-k.bif (alternative mode).


#include "top-k.bif.h"


#line 3 "top-k.bif"

#include "probabilistic/Topk.h"

#line 15 "top-k.bif"
Val* BifFunc::bro_topk_init(Frame* frame, val_list* BiF_ARGS)
	
#line 16 "top-k.bif"
{
	if ( BiF_ARGS->length() != 1 )
		{
		reporter->Error("topk_init() takes exactly 1 argument(s)");
		return 0;
		}
	bro_uint_t size = (bro_uint_t) ((*BiF_ARGS)[0]->AsCount());

#line 16 "top-k.bif"

	probabilistic::TopkVal* v = new probabilistic::TopkVal(size);
	return v;
	} // end of BifFunc::bro_topk_init

#line 19 "top-k.bif"

#line 33 "top-k.bif"
Val* BifFunc::bro_topk_add(Frame* frame, val_list* BiF_ARGS)
	
#line 34 "top-k.bif"
{
	if ( BiF_ARGS->length() != 2 )
		{
		reporter->Error("topk_add() takes exactly 2 argument(s)");
		return 0;
		}
	Val* handle = (Val*) ((*BiF_ARGS)[0]);
	Val* value = (Val*) ((*BiF_ARGS)[1]);

#line 34 "top-k.bif"

	assert(handle);
	probabilistic::TopkVal* h = (probabilistic::TopkVal*) handle;
	h->Encountered(value);

	return 0;
	} // end of BifFunc::bro_topk_add

#line 40 "top-k.bif"

#line 52 "top-k.bif"
Val* BifFunc::bro_topk_get_top(Frame* frame, val_list* BiF_ARGS)
	
#line 53 "top-k.bif"
{
	if ( BiF_ARGS->length() != 2 )
		{
		reporter->Error("topk_get_top() takes exactly 2 argument(s)");
		return 0;
		}
	Val* handle = (Val*) ((*BiF_ARGS)[0]);
	bro_uint_t k = (bro_uint_t) ((*BiF_ARGS)[1]->AsCount());

#line 53 "top-k.bif"

	assert(handle);
	probabilistic::TopkVal* h = (probabilistic::TopkVal*) handle;
	return h->GetTopK(k);
	} // end of BifFunc::bro_topk_get_top

#line 57 "top-k.bif"

#line 73 "top-k.bif"
Val* BifFunc::bro_topk_count(Frame* frame, val_list* BiF_ARGS)
	
#line 74 "top-k.bif"
{
	if ( BiF_ARGS->length() != 2 )
		{
		reporter->Error("topk_count() takes exactly 2 argument(s)");
		return 0;
		}
	Val* handle = (Val*) ((*BiF_ARGS)[0]);
	Val* value = (Val*) ((*BiF_ARGS)[1]);

#line 74 "top-k.bif"

	assert(handle);
	probabilistic::TopkVal* h = (probabilistic::TopkVal*) handle;
	return new Val(h->GetCount(value), TYPE_COUNT);
	} // end of BifFunc::bro_topk_count

#line 78 "top-k.bif"

#line 93 "top-k.bif"
Val* BifFunc::bro_topk_epsilon(Frame* frame, val_list* BiF_ARGS)
	
#line 94 "top-k.bif"
{
	if ( BiF_ARGS->length() != 2 )
		{
		reporter->Error("topk_epsilon() takes exactly 2 argument(s)");
		return 0;
		}
	Val* handle = (Val*) ((*BiF_ARGS)[0]);
	Val* value = (Val*) ((*BiF_ARGS)[1]);

#line 94 "top-k.bif"

	assert(handle);
	probabilistic::TopkVal* h = (probabilistic::TopkVal*) handle;
	return new Val(h->GetEpsilon(value), TYPE_COUNT);
	} // end of BifFunc::bro_topk_epsilon

#line 98 "top-k.bif"

#line 112 "top-k.bif"
Val* BifFunc::bro_topk_size(Frame* frame, val_list* BiF_ARGS)
	
#line 113 "top-k.bif"
{
	if ( BiF_ARGS->length() != 1 )
		{
		reporter->Error("topk_size() takes exactly 1 argument(s)");
		return 0;
		}
	Val* handle = (Val*) ((*BiF_ARGS)[0]);

#line 113 "top-k.bif"

	assert(handle);
	probabilistic::TopkVal* h = (probabilistic::TopkVal*) handle;
	return new Val(h->GetSize(), TYPE_COUNT);
	} // end of BifFunc::bro_topk_size

#line 117 "top-k.bif"

#line 132 "top-k.bif"
Val* BifFunc::bro_topk_sum(Frame* frame, val_list* BiF_ARGS)
	
#line 133 "top-k.bif"
{
	if ( BiF_ARGS->length() != 1 )
		{
		reporter->Error("topk_sum() takes exactly 1 argument(s)");
		return 0;
		}
	Val* handle = (Val*) ((*BiF_ARGS)[0]);

#line 133 "top-k.bif"

	assert(handle);
	probabilistic::TopkVal* h = (probabilistic::TopkVal*) handle;
	return new Val(h->GetSum(), TYPE_COUNT);
	} // end of BifFunc::bro_topk_sum

#line 137 "top-k.bif"

#line 150 "top-k.bif"
Val* BifFunc::bro_topk_merge(Frame* frame, val_list* BiF_ARGS)
	
#line 151 "top-k.bif"
{
	if ( BiF_ARGS->length() != 2 )
		{
		reporter->Error("topk_merge() takes exactly 2 argument(s)");
		return 0;
		}
	Val* handle1 = (Val*) ((*BiF_ARGS)[0]);
	Val* handle2 = (Val*) ((*BiF_ARGS)[1]);

#line 151 "top-k.bif"

	assert(handle1);
	assert(handle2);

	probabilistic::TopkVal* h1 = (probabilistic::TopkVal*) handle1;
	probabilistic::TopkVal* h2 = (probabilistic::TopkVal*) handle2;

	h1->Merge(h2);

	return 0;
	} // end of BifFunc::bro_topk_merge

#line 161 "top-k.bif"

#line 176 "top-k.bif"
Val* BifFunc::bro_topk_merge_prune(Frame* frame, val_list* BiF_ARGS)
	
#line 177 "top-k.bif"
{
	if ( BiF_ARGS->length() != 2 )
		{
		reporter->Error("topk_merge_prune() takes exactly 2 argument(s)");
		return 0;
		}
	Val* handle1 = (Val*) ((*BiF_ARGS)[0]);
	Val* handle2 = (Val*) ((*BiF_ARGS)[1]);

#line 177 "top-k.bif"

	assert(handle1);
	assert(handle2);

	probabilistic::TopkVal* h1 = (probabilistic::TopkVal*) handle1;
	probabilistic::TopkVal* h2 = (probabilistic::TopkVal*) handle2;

	h1->Merge(h2, true);

	return 0;
	} // end of BifFunc::bro_topk_merge_prune

#line 187 "top-k.bif"
