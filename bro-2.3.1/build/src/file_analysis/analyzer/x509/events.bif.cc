// This file was automatically generated by bifcl from /home/benjamin/Bro/bro-2.3.1/src/file_analysis/analyzer/x509/events.bif (plugin mode).


#include "events.bif.h"

EventHandlerPtr x509_certificate; 
void BifEvent::generate_x509_certificate(analyzer::Analyzer* analyzer, Val* f, Val* cert_ref, Val* cert)
	{
	// Note that it is intentional that here we do not
	// check if ::x509_certificate is NULL, which should happen *before*
	// BifEvent::generate_x509_certificate is called to avoid unnecessary Val
	// allocation.

	val_list* vl = new val_list;

	vl->append(f);
	vl->append(cert_ref);
	vl->append(cert);

	mgr.QueueEvent(::x509_certificate, vl, SOURCE_LOCAL, analyzer->GetID(), timer_mgr);
	} // event generation
EventHandlerPtr x509_extension; 
void BifEvent::generate_x509_extension(analyzer::Analyzer* analyzer, Val* f, Val* ext)
	{
	// Note that it is intentional that here we do not
	// check if ::x509_extension is NULL, which should happen *before*
	// BifEvent::generate_x509_extension is called to avoid unnecessary Val
	// allocation.

	val_list* vl = new val_list;

	vl->append(f);
	vl->append(ext);

	mgr.QueueEvent(::x509_extension, vl, SOURCE_LOCAL, analyzer->GetID(), timer_mgr);
	} // event generation
EventHandlerPtr x509_ext_basic_constraints; 
void BifEvent::generate_x509_ext_basic_constraints(analyzer::Analyzer* analyzer, Val* f, Val* ext)
	{
	// Note that it is intentional that here we do not
	// check if ::x509_ext_basic_constraints is NULL, which should happen *before*
	// BifEvent::generate_x509_ext_basic_constraints is called to avoid unnecessary Val
	// allocation.

	val_list* vl = new val_list;

	vl->append(f);
	vl->append(ext);

	mgr.QueueEvent(::x509_ext_basic_constraints, vl, SOURCE_LOCAL, analyzer->GetID(), timer_mgr);
	} // event generation
EventHandlerPtr x509_ext_subject_alternative_name; 
void BifEvent::generate_x509_ext_subject_alternative_name(analyzer::Analyzer* analyzer, Val* f, Val* ext)
	{
	// Note that it is intentional that here we do not
	// check if ::x509_ext_subject_alternative_name is NULL, which should happen *before*
	// BifEvent::generate_x509_ext_subject_alternative_name is called to avoid unnecessary Val
	// allocation.

	val_list* vl = new val_list;

	vl->append(f);
	vl->append(ext);

	mgr.QueueEvent(::x509_ext_subject_alternative_name, vl, SOURCE_LOCAL, analyzer->GetID(), timer_mgr);
	} // event generation
