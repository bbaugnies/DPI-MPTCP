# This file was automatically generated by bifcl from /home/benjamin/Bro/bro-2.3.1/src/broxygen/broxygen.bif (alternative mode).



##! Functions for querying script, package, or variable documentation.

export {


## Retrieve the Broxygen-style comments (``##``) associated with an identifier
## (e.g. a variable or type).
##
## name: a script-level identifier for which to retrieve comments.
##
## Returns: comments associated with *name*.  If *name* is not a known
##          identifier, an empty string is returned.
global get_identifier_comments: function(name: string ): string ;


## Retrieve the Broxygen-style summary comments (``##!``) associated with
## a Bro script.
##
## name: the name of a Bro script.  It must be a relative path to where
##       it is located within a particular component of BROPATH and use
##       the same file name extension/suffix as the actual file (e.g. ".bro").
##
## Returns: summary comments associated with script with *name*.  If
##          *name* is not a known script, an empty string is returned.
global get_script_comments: function(name: string ): string ;


## Retrieve the contents of a Bro script package's README file.
##
## name: the name of a Bro script package.  It must be a relative path
##       to where it is located within a particular component of BROPATH.
##
## Returns: contents of the package's README file.  If *name* is not a known
##          package, an empty string is returned.
global get_package_readme: function(name: string ): string ;


## Retrieve the Broxygen-style comments (``##``) associated with a record field.
##
## name: the name of a record type and a field within it formatted like
##       a typical record field access: "<record_type>$<field>".
##
## Returns: comments associated with the record field.  If *name* does
##          not point to a known record type or a known field within a record
##          type, an empty string is returned.
global get_record_field_comments: function(name: string ): string ;

} # end of export section
module GLOBAL;
