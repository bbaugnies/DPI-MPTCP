/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parse.y" /* yacc.c:339  */

// See the file "COPYING" in the main distribution directory for copyright.
#line 70 "parse.y" /* yacc.c:339  */

#include <stdlib.h>
#include <string.h>
#include <assert.h>

#include "input.h"
#include "Expr.h"
#include "Stmt.h"
#include "Var.h"
/* #include "analyzer/protocol/dns/DNS.h" */
#include "RE.h"
#include "Scope.h"
#include "Reporter.h"
#include "Brofiler.h"
#include "broxygen/Manager.h"

#include <set>
#include <string>

extern const char* filename;  // Absolute path of file currently being parsed.

YYLTYPE GetCurrentLocation();
extern int yyerror(const char[]);
extern int brolex();

#define YYLLOC_DEFAULT(Current, Rhs, N) \
	(Current) = (Rhs)[(N)];

/*
 * Part of the module facility: while parsing, keep track of which
 * module to put things in.
 */
string current_module = GLOBAL_MODULE_NAME;
bool is_export = false; // true if in an export {} block

/*
 * When parsing an expression for the debugger, where to put the result
 * (obviously not reentrant).
 */
extern Expr* g_curr_debug_expr;
extern bool in_debug;
extern const char* g_curr_debug_error;

#define YYLTYPE yyltype

static int in_hook = 0;
int in_init = 0;
int in_record = 0;
bool resolving_global_ID = false;
bool defining_global_ID = false;
std::vector<int> saved_in_init;

ID* func_id = 0;
EnumType *cur_enum_type = 0;
static ID* cur_decl_type_id = 0;

static void parser_new_enum (void)
	{
	/* Starting a new enum definition. */
	assert(cur_enum_type == NULL);
	cur_enum_type = new EnumType();
	}

static void parser_redef_enum (ID *id)
	{
	/* Redef an enum. id points to the enum to be redefined.
	   Let cur_enum_type point to it. */
	assert(cur_enum_type == NULL);
	if ( ! id->Type() )
		id->Error("unknown identifier");
	else
		{
		cur_enum_type = id->Type()->AsEnumType();
		if ( ! cur_enum_type )
			id->Error("not an enum");
		}
	}

static type_decl_list* copy_type_decl_list(type_decl_list* tdl)
	{
	if ( ! tdl )
		return 0;

	type_decl_list* rval = new type_decl_list();

	loop_over_list(*tdl, i)
		{
		TypeDecl* td = (*tdl)[i];
		rval->append(new TypeDecl(*td));
		}

	return rval;
	}

static attr_list* copy_attr_list(attr_list* al)
	{
	if ( ! al )
		return 0;

	attr_list* rval = new attr_list();

	loop_over_list(*al, i)
		{
		Attr* a = (*al)[i];
		::Ref(a);
		rval->append(a);
		}

	return rval;
	}

static void extend_record(ID* id, type_decl_list* fields, attr_list* attrs)
	{
	set<BroType*> types = BroType::GetAliases(id->Name());

	if ( types.empty() )
		{
		id->Error("failed to redef record: no types found in alias map");
		return;
		}

	for ( set<BroType*>::const_iterator it = types.begin(); it != types.end(); )
		{
		RecordType* add_to = (*it)->AsRecordType();
		const char* error = 0;
		++it;

		if ( it == types.end() )
			error = add_to->AddFields(fields, attrs);
		else
			error = add_to->AddFields(copy_type_decl_list(fields),
			                          copy_attr_list(attrs));

		if ( error )
			{
			id->Error(error);
			break;
			}
		}
	}

static bool expr_is_table_type_name(const Expr* expr)
	{
	if ( expr->Tag() != EXPR_NAME )
		return false;

	BroType* type = expr->Type();

	if ( type->IsTable() )
		return true;

	if ( type->Tag() == TYPE_TYPE )
		return type->AsTypeType()->Type()->IsTable();

	return false;
	}

#line 227 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "broparse.h".  */
#ifndef YY_YY_HOME_BENJAMIN_BRO_BRO_2_3_1_BUILD_SRC_BROPARSE_H_INCLUDED
# define YY_YY_HOME_BENJAMIN_BRO_BRO_2_3_1_BUILD_SRC_BROPARSE_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TOK_ADD = 258,
    TOK_ADD_TO = 259,
    TOK_ADDR = 260,
    TOK_ANY = 261,
    TOK_ATENDIF = 262,
    TOK_ATELSE = 263,
    TOK_ATIF = 264,
    TOK_ATIFDEF = 265,
    TOK_ATIFNDEF = 266,
    TOK_BOOL = 267,
    TOK_BREAK = 268,
    TOK_CASE = 269,
    TOK_CONST = 270,
    TOK_CONSTANT = 271,
    TOK_COPY = 272,
    TOK_COUNT = 273,
    TOK_COUNTER = 274,
    TOK_DEFAULT = 275,
    TOK_DELETE = 276,
    TOK_DOUBLE = 277,
    TOK_ELSE = 278,
    TOK_ENUM = 279,
    TOK_EVENT = 280,
    TOK_EXPORT = 281,
    TOK_FALLTHROUGH = 282,
    TOK_FILE = 283,
    TOK_FOR = 284,
    TOK_FUNCTION = 285,
    TOK_GLOBAL = 286,
    TOK_HOOK = 287,
    TOK_ID = 288,
    TOK_IF = 289,
    TOK_INT = 290,
    TOK_INTERVAL = 291,
    TOK_LIST = 292,
    TOK_LOCAL = 293,
    TOK_MODULE = 294,
    TOK_NEXT = 295,
    TOK_OF = 296,
    TOK_OPAQUE = 297,
    TOK_PATTERN = 298,
    TOK_PATTERN_TEXT = 299,
    TOK_PORT = 300,
    TOK_PRINT = 301,
    TOK_RECORD = 302,
    TOK_REDEF = 303,
    TOK_REMOVE_FROM = 304,
    TOK_RETURN = 305,
    TOK_SCHEDULE = 306,
    TOK_SET = 307,
    TOK_STRING = 308,
    TOK_SUBNET = 309,
    TOK_SWITCH = 310,
    TOK_TABLE = 311,
    TOK_TIME = 312,
    TOK_TIMEOUT = 313,
    TOK_TIMER = 314,
    TOK_TYPE = 315,
    TOK_UNION = 316,
    TOK_VECTOR = 317,
    TOK_WHEN = 318,
    TOK_ATTR_ADD_FUNC = 319,
    TOK_ATTR_ENCRYPT = 320,
    TOK_ATTR_DEFAULT = 321,
    TOK_ATTR_OPTIONAL = 322,
    TOK_ATTR_REDEF = 323,
    TOK_ATTR_ROTATE_INTERVAL = 324,
    TOK_ATTR_ROTATE_SIZE = 325,
    TOK_ATTR_DEL_FUNC = 326,
    TOK_ATTR_EXPIRE_FUNC = 327,
    TOK_ATTR_EXPIRE_CREATE = 328,
    TOK_ATTR_EXPIRE_READ = 329,
    TOK_ATTR_EXPIRE_WRITE = 330,
    TOK_ATTR_PERSISTENT = 331,
    TOK_ATTR_SYNCHRONIZED = 332,
    TOK_ATTR_RAW_OUTPUT = 333,
    TOK_ATTR_MERGEABLE = 334,
    TOK_ATTR_PRIORITY = 335,
    TOK_ATTR_LOG = 336,
    TOK_ATTR_ERROR_HANDLER = 337,
    TOK_ATTR_TYPE_COLUMN = 338,
    TOK_DEBUG = 339,
    TOK_NO_TEST = 340,
    TOK_OR = 341,
    TOK_AND = 342,
    TOK_LE = 343,
    TOK_GE = 344,
    TOK_EQ = 345,
    TOK_NE = 346,
    TOK_IN = 347,
    TOK_NOT_IN = 348,
    TOK_INCR = 349,
    TOK_DECR = 350,
    TOK_HAS_FIELD = 351,
    TOK_HAS_ATTR = 352
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 228 "parse.y" /* yacc.c:355  */

	bool b;
	char* str;
	ID* id;
	id_list* id_l;
	init_class ic;
	Val* val;
	RE_Matcher* re;
	Expr* expr;
	EventExpr* event_expr;
	Stmt* stmt;
	ListExpr* list;
	BroType* type;
	RecordType* record;
	FuncType* func_type;
	TypeList* type_l;
	TypeDecl* type_decl;
	type_decl_list* type_decl_l;
	Case* c_case;
	case_list* case_l;
	Attr* attr;
	attr_list* attr_l;
	attr_tag attrtag;

#line 390 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_HOME_BENJAMIN_BRO_BRO_2_3_1_BUILD_SRC_BROPARSE_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 419 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1795

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  119
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  239
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  530

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   352

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   108,     2,     2,   109,   105,     2,     2,
     112,   113,   103,   101,    86,   102,     2,   104,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    90,   118,
      93,    88,    94,    89,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   110,     2,   111,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   116,    87,   117,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    91,    92,    95,    96,    97,    98,    99,   100,   106,
     107,   114,   115
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   256,   256,   274,   274,   281,   282,   286,   289,   293,
     299,   305,   311,   317,   323,   329,   335,   341,   347,   353,
     359,   365,   371,   377,   383,   389,   395,   401,   407,   413,
     419,   425,   431,   437,   443,   449,   459,   465,   472,   471,
     486,   492,   498,   523,   530,   536,   536,   536,   543,   549,
     556,   562,   555,   604,   604,   613,   619,   621,   627,   673,
     679,   686,   694,   700,   708,   710,   714,   720,   728,   728,
     728,   733,   739,   747,   749,   758,   770,   779,   788,   793,
     798,   803,   808,   813,   818,   823,   828,   833,   838,   843,
     848,   853,   858,   864,   871,   873,   870,   880,   887,   887,
     894,   902,   910,   916,   922,   928,   934,   940,   946,   952,
     967,   969,   977,   982,   988,   999,  1001,  1004,  1008,  1010,
    1012,  1017,  1025,  1031,  1031,  1034,  1040,  1046,  1053,  1052,
    1060,  1062,  1064,  1059,  1076,  1075,  1084,  1087,  1091,  1093,
    1095,  1097,  1099,  1104,  1111,  1117,  1125,  1135,  1141,  1134,
    1156,  1161,  1170,  1172,  1177,  1180,  1184,  1185,  1186,  1187,
    1191,  1191,  1191,  1194,  1198,  1200,  1202,  1206,  1208,  1212,
    1214,  1222,  1224,  1226,  1228,  1230,  1232,  1234,  1236,  1238,
    1240,  1242,  1244,  1246,  1248,  1250,  1252,  1254,  1256,  1258,
    1260,  1262,  1267,  1275,  1283,  1291,  1297,  1303,  1309,  1314,
    1322,  1330,  1338,  1346,  1354,  1362,  1370,  1378,  1386,  1392,
    1401,  1407,  1415,  1423,  1429,  1434,  1441,  1445,  1453,  1456,
    1460,  1463,  1468,  1494,  1499,  1501,  1509,  1530,  1530,  1535,
    1535,  1535,  1540,  1540,  1545,  1572,  1585,  1588,  1591,  1594
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_ADD", "TOK_ADD_TO", "TOK_ADDR",
  "TOK_ANY", "TOK_ATENDIF", "TOK_ATELSE", "TOK_ATIF", "TOK_ATIFDEF",
  "TOK_ATIFNDEF", "TOK_BOOL", "TOK_BREAK", "TOK_CASE", "TOK_CONST",
  "TOK_CONSTANT", "TOK_COPY", "TOK_COUNT", "TOK_COUNTER", "TOK_DEFAULT",
  "TOK_DELETE", "TOK_DOUBLE", "TOK_ELSE", "TOK_ENUM", "TOK_EVENT",
  "TOK_EXPORT", "TOK_FALLTHROUGH", "TOK_FILE", "TOK_FOR", "TOK_FUNCTION",
  "TOK_GLOBAL", "TOK_HOOK", "TOK_ID", "TOK_IF", "TOK_INT", "TOK_INTERVAL",
  "TOK_LIST", "TOK_LOCAL", "TOK_MODULE", "TOK_NEXT", "TOK_OF",
  "TOK_OPAQUE", "TOK_PATTERN", "TOK_PATTERN_TEXT", "TOK_PORT", "TOK_PRINT",
  "TOK_RECORD", "TOK_REDEF", "TOK_REMOVE_FROM", "TOK_RETURN",
  "TOK_SCHEDULE", "TOK_SET", "TOK_STRING", "TOK_SUBNET", "TOK_SWITCH",
  "TOK_TABLE", "TOK_TIME", "TOK_TIMEOUT", "TOK_TIMER", "TOK_TYPE",
  "TOK_UNION", "TOK_VECTOR", "TOK_WHEN", "TOK_ATTR_ADD_FUNC",
  "TOK_ATTR_ENCRYPT", "TOK_ATTR_DEFAULT", "TOK_ATTR_OPTIONAL",
  "TOK_ATTR_REDEF", "TOK_ATTR_ROTATE_INTERVAL", "TOK_ATTR_ROTATE_SIZE",
  "TOK_ATTR_DEL_FUNC", "TOK_ATTR_EXPIRE_FUNC", "TOK_ATTR_EXPIRE_CREATE",
  "TOK_ATTR_EXPIRE_READ", "TOK_ATTR_EXPIRE_WRITE", "TOK_ATTR_PERSISTENT",
  "TOK_ATTR_SYNCHRONIZED", "TOK_ATTR_RAW_OUTPUT", "TOK_ATTR_MERGEABLE",
  "TOK_ATTR_PRIORITY", "TOK_ATTR_LOG", "TOK_ATTR_ERROR_HANDLER",
  "TOK_ATTR_TYPE_COLUMN", "TOK_DEBUG", "TOK_NO_TEST", "','", "'|'", "'='",
  "'?'", "':'", "TOK_OR", "TOK_AND", "'<'", "'>'", "TOK_LE", "TOK_GE",
  "TOK_EQ", "TOK_NE", "TOK_IN", "TOK_NOT_IN", "'+'", "'-'", "'*'", "'/'",
  "'%'", "TOK_INCR", "TOK_DECR", "'!'", "'$'", "'['", "']'", "'('", "')'",
  "TOK_HAS_FIELD", "TOK_HAS_ATTR", "'{'", "'}'", "';'", "$accept", "bro",
  "$@1", "decl_list", "opt_expr", "expr", "$@2", "$@3", "$@4", "$@5",
  "$@6", "$@7", "expr_list", "opt_expr_list", "pattern", "single_pattern",
  "$@8", "$@9", "enum_body", "enum_body_list", "enum_body_elem", "type",
  "$@10", "$@11", "$@12", "type_list", "type_decl_list", "type_decl",
  "formal_args", "formal_args_decl_list", "formal_args_decl", "decl",
  "$@13", "$@14", "$@15", "$@16", "$@17", "$@18", "conditional",
  "func_hdr", "func_body", "$@19", "$@20", "anonymous_function",
  "begin_func", "func_params", "opt_type", "init_class", "opt_init",
  "$@21", "$@22", "init", "opt_attr", "attr_list", "attr", "stmt",
  "stmt_list", "event", "case_list", "case", "for_head", "local_id_list",
  "local_id", "global_id", "$@23", "def_global_id", "$@24", "$@25",
  "event_id", "$@26", "global_or_event_id", "resolve_id", "opt_no_test",
  "opt_no_test_block", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,    44,   124,    61,    63,
      58,   341,   342,    60,    62,   343,   344,   345,   346,   347,
     348,    43,    45,    42,    47,    37,   349,   350,    33,    36,
      91,    93,    40,    41,   351,   352,   123,   125,    59
};
# endif

#define YYPACT_NINF -472

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-472)))

#define YYTABLE_NINF -164

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-164)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -43,  -472,    46,   429,  1608,  -472,  -472,  -472,   -61,   -30,
     -27,  -472,  -472,   -46,  -472,  -472,  -472,    55,    18,  -472,
    -472,  -472,  1712,   731,  -472,   -17,   -12,  -472,  -472,    75,
      -3,  1608,     0,     5,     7,  1608,  1608,  1608,  -472,  1608,
    1608,  1608,    82,  1525,  1608,  1300,    34,  -472,  -472,  1608,
      90,    91,    35,  -472,   -12,    93,  -472,   -12,    35,   -12,
       9,  -472,  -472,  -472,    35,    93,    38,    41,    62,    64,
    -472,  -472,    67,    69,    70,    72,    73,    74,    76,  -472,
    -472,  -472,  -472,    77,  -472,  -472,    78,  -472,    53,  1712,
    -472,  1608,    52,    75,  1608,   138,    54,    61,    80,    75,
      56,  1608,  1390,  1608,    83,   103,  -472,   164,  -472,  -472,
     731,  1608,   157,  1712,  -472,  1608,  -472,   106,  1608,   768,
    1608,  -472,  1608,   940,   -18,   -18,   152,   -18,   -18,   -18,
     -50,  -472,  1300,   -37,   969,  1608,  1608,  1608,  1608,  1608,
    1608,  1608,  1608,  1608,  1608,  1608,  1608,  1608,  1608,  1608,
    1608,  1608,  1608,  1608,   165,  1608,  -472,   166,    98,   997,
      94,    95,  1644,    17,  -472,  -472,  -472,  -472,  -472,  -472,
      17,  -472,  -472,   200,   -12,  -472,    17,  -472,  -472,  1608,
    1608,  1608,  1608,  1608,  1608,  1608,  1608,  1608,  1608,  1608,
    1608,  -472,  -472,   486,   121,    35,   598,    99,    92,   121,
     -26,  1608,   -21,   121,   -64,   120,   121,   710,   825,  1608,
    -472,  -472,   121,  -472,  1026,   143,   122,   -62,  -472,  -472,
    1300,  1608,   -58,   138,   148,   123,  1608,   125,  -472,  -472,
    1608,   151,  1608,  -472,  -472,  1300,  1300,  1300,  1055,   910,
    1155,  1648,  1648,  1648,  1648,  1648,  1648,   280,   280,   111,
     111,   -18,   -18,   -18,  -472,   150,  1083,   -34,  1608,  -472,
    -472,  -472,  -472,  -472,  -472,  -472,  -472,  -472,  -472,  -472,
     126,   129,   202,   -12,   132,  -472,  -472,  -472,   205,   206,
    -472,  -472,   134,   141,  -472,  -472,   160,  -472,  -472,   156,
     207,  -472,  -472,  -472,  -472,  -472,  1657,  -472,   315,  1657,
     159,  -472,   273,  1657,  1644,  1300,  1300,  1300,  1300,  1300,
    1300,  1300,  1300,  1300,  1300,  1300,  1300,  -472,   121,  -472,
    -472,    17,   121,  1608,   121,  -472,   181,    75,  1112,    17,
    -472,   121,  1608,  -472,   121,  -472,  1185,   395,  -472,  -472,
    1644,   191,   157,   157,  1300,  -472,   169,  1712,   170,  -472,
     183,  1300,  -472,  1300,  1608,  1608,  -472,  -472,  -472,   157,
    1644,  -472,   157,  1644,   255,  -472,  1644,  1644,  1644,  1644,
    1712,  1498,  -472,  1712,  -472,   173,  1712,  1712,   731,  -472,
    1657,  -472,   179,  -472,  1608,   -33,  -472,   731,  1657,  -472,
    1214,  -472,     3,   731,  -472,  1712,  1644,  -472,  -472,  -472,
    -472,  -472,  -472,  1712,   797,   182,  1300,   184,   261,   185,
    -472,   188,  -472,  -472,  -472,  -472,   -28,   -22,   -60,  -472,
     177,  1608,  1300,  -472,   186,   261,  -472,   189,   190,   192,
    1712,  -472,  1242,    75,   203,   283,  1712,   731,  1608,   213,
    -472,  -472,   252,  -472,  -472,  1712,  -472,  -472,  -472,   223,
     195,   228,  -472,  -472,  -472,   282,  1644,  -472,   277,  -472,
    -472,   234,   204,  -472,  -472,   210,  -472,  -472,  -472,  -472,
     214,  -472,  -472,  1608,   731,   215,   276,   -56,  -472,  1608,
    -472,     4,  -472,   261,   241,   218,  -472,  -472,  1644,  1417,
    -472,   220,   282,   121,  1271,  -472,   121,  1608,  -472,   731,
     854,  -472,   320,  -472,  1644,  -472,  -472,  -472,  -472,   222,
    -472,  -472,  -472,   883,   731,   103,  -472,  1712,  1712,   103,
    -472,   224,   226,  -472,   507,  -472,  -472,   619,  -472,  -472
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     3,     0,   216,     0,     1,   141,   142,     0,     0,
       0,   229,   232,     0,   229,   229,   229,     0,   227,   227,
       5,   137,   168,     2,    59,     0,     0,    53,    58,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    68,     0,
       0,     0,     0,     0,     0,     4,    60,    67,    56,     0,
       0,     0,   155,   227,     0,     0,   123,     0,   155,     0,
       0,   227,   232,   227,   155,     0,     0,     0,   184,     0,
     172,   173,     0,     0,     0,     0,     0,     0,     0,   182,
     183,   186,   187,     0,   190,   191,     0,   136,     0,   167,
     170,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   239,   213,     0,   214,   215,
       0,     0,   117,   168,   151,     0,   226,     0,     0,     0,
      65,    45,    65,     0,    15,    14,     0,    11,    12,    13,
       0,    43,    63,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     8,    50,     0,     0,     0,
       0,     0,     0,   156,   230,   144,   234,   233,     6,   143,
     156,   145,   122,     0,     0,   130,   156,   228,   134,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   147,   169,     0,   237,   155,     0,     0,     0,   237,
       0,     0,   155,   237,     0,     0,   237,     0,     0,     0,
     238,   216,   237,   198,     0,     0,     0,   115,   120,   150,
      54,     0,     0,     0,    64,     0,    65,     0,    61,    69,
       0,     0,     0,    42,     9,    17,    19,    32,     0,    24,
      23,    27,    29,    28,    30,    25,    26,    40,    41,    16,
      18,    20,    21,    22,    36,     0,    63,     0,    65,    55,
      66,   138,   139,   140,    89,    91,    78,    80,    81,    82,
       0,     0,   107,     0,     0,   235,    79,    84,   100,     0,
      86,    88,     0,     0,    85,    90,     0,    83,    87,     0,
       0,   154,   109,   158,   159,   157,   160,   231,     0,   160,
       0,   146,     0,   160,     0,   176,   185,   171,   174,   175,
     177,   178,   179,   180,   181,   188,   189,   216,   237,   236,
     200,   156,   237,    65,   237,   201,     0,     0,     0,   156,
     199,   237,     0,   202,   237,   219,     0,     0,   212,    10,
       0,   153,     0,   116,    33,    44,     0,   168,     0,    49,
       0,    37,    38,    62,     0,     8,    34,    51,    98,   117,
       0,   103,   117,     0,     0,    94,     0,     0,     0,     0,
     168,     0,   124,   168,   128,     0,   168,   168,   148,   204,
     160,   205,     0,   194,     0,     0,   225,     0,   160,   193,
       0,   203,     0,     0,   192,   168,     0,   119,   118,    57,
      48,    46,    70,   168,    31,     0,     7,     0,     0,     0,
     106,     0,   101,   108,   113,   111,     0,     0,     0,   102,
       0,    65,   166,   161,     0,     0,   131,     0,     0,     0,
     168,   217,     0,     0,     0,   195,   168,     0,     0,     0,
     197,   218,   208,   121,   152,   168,    39,    35,    52,    77,
       0,    71,    73,   104,   105,    95,     0,    93,     0,    97,
     126,    64,     0,   162,   125,     0,   113,   127,   135,   149,
       0,   222,   224,     0,     0,     0,   210,     0,   216,     0,
      47,     0,    99,    72,     0,     0,   112,   110,     0,     0,
     164,     0,   132,   237,     0,   196,   237,     0,   216,   221,
       0,    75,     0,    74,     0,    96,    92,   165,   129,     0,
     207,   223,   206,     0,   220,   239,    76,   168,   168,   239,
     216,     0,     0,   216,     0,   114,   133,     0,   209,   211
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -472,  -472,  -472,   180,    -6,    -4,  -472,  -472,  -472,  -472,
    -472,  -472,   -42,  -104,  -472,   194,  -472,  -472,   -70,  -472,
    -127,  -151,  -472,  -472,  -472,  -307,  -109,  -472,  -312,  -472,
    -263,  -472,  -472,  -472,  -472,  -472,  -472,  -472,     2,  -472,
    -107,  -472,  -472,  -472,  -472,   -44,   -39,  -162,  -287,  -472,
    -472,  -472,  -146,  -472,   269,  -108,  -207,   136,  -472,  -472,
    -472,  -472,   -90,    10,  -472,    88,  -472,  -472,   298,  -472,
     296,  -472,  -131,  -471
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     4,     3,   255,   107,   403,   226,   445,   258,
     407,   115,   224,   225,    46,    47,   126,   350,   450,   451,
     452,   415,   414,   485,   408,   416,   455,   486,   216,   217,
     218,    20,   168,   425,   302,   466,   509,   304,   108,    22,
      87,   317,   429,    48,   113,   114,   163,   296,   370,   371,
     463,   423,    88,    89,    90,   109,    23,   198,   392,   441,
     110,   385,   117,    64,    65,    52,    53,   297,    54,    55,
     167,   292,   320,   211
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      45,   133,   213,   195,   337,    21,   219,   326,   299,   202,
     165,   291,   373,   169,   303,   171,   376,   438,   227,   170,
     501,   293,   232,   439,   342,   176,   456,   119,   232,    66,
     232,   123,   124,   125,   498,   127,   128,   129,   230,   132,
     134,     1,    61,    62,   520,   159,     5,   409,   523,   232,
     411,    49,   232,   433,   331,   345,   343,   459,   456,   204,
     417,   418,   112,   164,   456,    63,   294,   221,   325,   162,
      56,   173,   330,   175,   233,   333,   222,   356,   434,   397,
     398,   338,    50,   457,   327,    51,   231,   193,    60,   458,
     196,   154,   155,   430,   156,   111,   157,   132,   207,   208,
     112,   436,    57,    58,    59,   295,   502,   214,   116,   118,
     378,   220,   120,   257,   132,   130,   132,   121,   132,   122,
     440,   158,   348,   160,   161,   162,   166,   172,   178,   179,
     301,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     180,   256,   181,   377,   357,   182,   321,   183,   184,   380,
     185,   186,   187,   329,   188,   189,   190,   388,   135,   191,
     194,   197,   199,   200,   203,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   379,   210,   395,
     215,   381,   201,   383,   221,   209,   229,   328,   254,   259,
     389,   400,    38,   391,   300,   336,   319,   262,   263,   410,
     324,   323,   412,   136,   151,   152,   153,   344,   419,   382,
     154,   155,   132,   156,   420,   157,   351,   424,   353,   361,
     427,   428,   332,   340,   232,   341,   347,   386,   349,   352,
     355,   359,   358,   360,   362,   444,   363,   364,   369,   443,
     365,   366,   137,   138,   132,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     367,   499,   368,   154,   155,   374,   156,   375,   157,   435,
     384,   396,   212,   401,   470,   442,   399,   402,   413,   426,
     475,   514,   431,   447,   449,   460,   446,   448,   453,   480,
      21,   454,   473,   478,   464,   487,   474,   467,   468,   469,
     479,   481,   482,   524,   483,   484,   527,   462,   488,   132,
     489,   490,     6,     7,     8,     9,    10,   491,   390,   476,
      11,   504,   493,   496,   497,   505,   516,   506,   508,   518,
      12,    13,   525,   472,   526,    14,    15,    16,   298,   405,
     404,   406,   260,   517,    17,   465,   503,   492,   192,   346,
     174,   177,   510,    18,     0,   512,   495,   422,     0,     0,
       0,   521,   522,     0,     0,    19,     0,     0,     0,   461,
     432,   149,   150,   151,   152,   153,     0,     0,     0,   154,
     155,     0,   156,     0,   157,     0,   477,     0,    91,     0,
       0,     0,     6,     7,     8,     9,    10,     0,    92,     0,
      93,    24,    25,     0,     0,     0,    94,   132,     0,     0,
      95,     0,    96,     0,    97,    26,     0,    27,    28,    98,
       0,     0,   372,    99,   132,   100,     6,     7,     8,     9,
      10,   101,    30,     0,    11,   102,    31,    32,     0,     0,
     103,    33,     0,     0,    12,    13,     0,    34,   104,    14,
      15,    16,     0,     0,     0,     0,     0,     0,    17,   494,
       0,     0,     0,     0,     0,   500,     0,    18,     0,     0,
       0,     0,    35,     0,     0,   353,     0,     0,     0,    19,
     135,     0,     0,   513,     0,     0,    36,    37,     0,    38,
       0,    39,    40,    41,    42,    43,     0,    44,     0,     0,
      91,   105,   394,   106,     6,     7,     8,     9,    10,     0,
      92,     0,    93,    24,    25,     0,     0,     0,    94,     0,
       0,     0,    95,     0,    96,   136,    97,    26,     0,    27,
      28,    98,     0,     0,     0,    99,     0,   100,     0,     0,
       0,     0,     0,   101,    30,     0,     0,   102,    31,    32,
       0,     0,   103,    33,     0,     0,     0,     0,     0,    34,
     104,     0,     0,     0,   137,   138,     0,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,     0,     0,    35,   154,   155,     0,   156,     0,
     157,     0,   135,     0,   318,     0,     0,     0,    36,    37,
       0,    38,     0,    39,    40,    41,    42,    43,     0,    44,
       0,     0,    91,   105,   528,   106,     6,     7,     8,     9,
      10,     0,    92,     0,    93,    24,    25,     0,     0,     0,
      94,     0,     0,     0,    95,     0,    96,   136,    97,    26,
       0,    27,    28,    98,     0,     0,     0,    99,     0,   100,
       0,     0,     0,     0,     0,   101,    30,     0,     0,   102,
      31,    32,     0,     0,   103,    33,     0,     0,     0,     0,
       0,    34,   104,     0,     0,     0,   137,   138,     0,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,     0,     0,    35,   154,   155,     0,
     156,     0,   157,     0,   135,     0,   322,     0,     0,     0,
      36,    37,     0,    38,     0,    39,    40,    41,    42,    43,
       0,    44,     0,     0,    91,   105,   529,   106,     6,     7,
       8,     9,    10,     0,    92,     0,    93,    24,    25,     0,
       0,     0,    94,     0,     0,     0,    95,     0,    96,   136,
      97,    26,     0,    27,    28,    98,     0,     0,     0,    99,
       0,   100,   135,     0,     0,     0,     0,   101,    30,     0,
       0,   102,    31,    32,     0,     0,   103,    33,     0,     0,
       0,     0,     0,    34,   104,     0,     0,     0,   137,   138,
       0,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,     0,   136,    35,   154,
     155,     0,   156,     0,   157,     0,     0,     0,   334,   135,
       0,     0,    36,    37,     0,    38,     0,    39,    40,    41,
      42,    43,     0,    44,     0,     0,     0,   105,     0,   106,
       0,     0,     0,     0,     0,     0,   137,   138,   135,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   136,     0,     0,   154,   155,     0,
     156,     0,   157,     0,   223,     0,   138,   135,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   136,     0,     0,   154,   155,     0,   156,
       0,   157,     0,   137,   138,     0,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,     0,   136,     0,   154,   155,     0,   156,     0,   157,
       0,   335,   137,   138,   135,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
       0,     0,     0,   154,   155,     0,   156,     0,   157,     0,
     515,   137,   138,   135,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   136,
       0,     0,   154,   155,     0,   156,     0,   157,     0,   519,
       0,   135,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,     0,     0,   136,   154,
     155,     0,   156,     0,   157,     0,     0,   228,   137,   138,
     135,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   136,     0,     0,   154,
     155,     0,   156,     0,   157,     0,     0,   137,   138,   135,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   136,     0,     0,   154,   155,
       0,   156,   234,   157,     0,   137,   138,   135,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,     0,   136,     0,   154,   155,     0,   156,
     261,   157,     0,     0,   137,   138,   135,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   136,     0,     0,   154,   155,     0,   156,   339,
     157,     0,     0,   137,   138,   354,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   136,     0,     0,   154,   155,     0,   156,     0,   157,
       0,   137,   138,    -7,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   135,
       0,     0,   154,   155,     0,   156,     0,   157,     0,     0,
     137,   138,     0,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   135,     0,
       0,   154,   155,     0,   156,   387,   157,     0,     0,     0,
       0,     0,     0,     0,   136,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   135,     0,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,     0,     0,   136,   154,   155,     0,   156,     0,   157,
       0,     0,     0,   137,   138,   135,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   136,     0,     0,   154,   155,     0,   156,   393,   157,
       0,     0,   137,   138,   135,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     136,     0,     0,   154,   155,     0,   156,   437,   157,     0,
     137,   138,     0,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,     0,   136,
       0,   154,   155,     0,   156,   471,   157,     0,     0,   137,
     138,     0,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,     0,     0,     0,
     154,   155,     0,   156,   511,   157,     0,     0,   137,   138,
       0,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,    24,    25,     0,   154,
     155,     0,   156,     0,   157,     0,     0,     0,     0,     0,
      26,     0,    27,    28,     0,     0,     0,     0,    29,     0,
       0,     0,     0,    24,    25,     0,     0,    30,     0,     0,
       0,    31,    32,     0,     0,     0,    33,    26,     0,    27,
      28,     0,    34,   205,     0,    29,     0,     0,     0,     0,
       0,     0,     0,     0,    30,     0,     0,     0,    31,    32,
       0,     0,     0,    33,     0,     0,     0,    35,     0,    34,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    36,    37,     0,    38,     0,    39,    40,    41,    42,
      43,     0,    44,     0,    35,     0,     0,     0,   206,     0,
       0,     0,     0,     0,    24,    25,     0,     0,    36,    37,
       0,    38,     0,    39,    40,    41,    42,    43,    26,    44,
      27,    28,     0,     0,   507,     0,    29,     0,     0,     0,
       0,    24,    25,     0,     0,    30,     0,     0,     0,    31,
      32,     0,     0,     0,    33,    26,     0,    27,    28,     0,
      34,     0,     0,    29,     0,     0,     0,     0,     0,     0,
       0,     0,    30,     0,     0,     0,    31,    32,     0,     0,
       0,    33,     0,     0,     0,    35,     0,    34,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    36,
      37,     0,    38,     0,    39,    40,    41,    42,    43,     0,
      44,     0,    35,     0,   421,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    24,    25,    36,    37,     0,    38,
       0,    39,    40,    41,    42,    43,   131,    44,    26,     0,
      27,    28,     0,     0,     0,     0,    29,     0,     0,   264,
     265,     0,     0,     0,     0,    30,   266,     0,     0,    31,
      32,     0,   267,   268,    33,     0,   269,     0,   270,   271,
      34,     0,   272,     0,   273,     0,   274,   275,     0,   276,
     277,   278,     0,     0,     0,     0,   279,   280,     0,   281,
       0,   282,     0,     0,     0,    35,   283,   284,   285,     0,
     286,   287,     0,   288,     0,   289,   290,     0,     0,    36,
      37,     0,    38,     0,    39,    40,    41,    42,    43,     0,
      44,  -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163,
    -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163,
    -163,  -164,  -164,  -164,  -164,  -164,  -164,   147,   148,   149,
     150,   151,   152,   153,     0,     0,     0,   154,   155,     0,
     156,     0,   157,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -163,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86
};

static const yytype_int16 yycheck[] =
{
       4,    43,   110,    93,   211,     3,   113,    33,   170,    99,
      54,   162,   299,    57,   176,    59,   303,    14,   122,    58,
      16,     4,    86,    20,    86,    64,    86,    31,    86,    19,
      86,    35,    36,    37,    90,    39,    40,    41,    88,    43,
      44,    84,    24,    25,   515,    49,     0,   359,   519,    86,
     362,   112,    86,    86,   118,   113,   118,   117,    86,   101,
     367,   368,   112,    53,    86,    47,    49,    88,   199,    90,
     116,    61,   203,    63,   111,   206,   118,   111,   111,   342,
     343,   212,   112,   111,   110,   112,   130,    91,    33,   111,
      94,   109,   110,   380,   112,   112,   114,   101,   102,   103,
     112,   388,    14,    15,    16,    88,   102,   111,    33,   112,
     317,   115,   112,   155,   118,    33,   120,   112,   122,   112,
     117,    87,   226,    33,    33,    90,    33,   118,    90,    88,
     174,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
      88,   155,    88,   304,   258,    88,   195,    88,    88,   321,
      88,    88,    88,   202,    88,    88,    88,   329,     4,   116,
     118,    33,   118,   112,   118,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   318,    85,   340,
      33,   322,   112,   324,    88,   112,    44,   201,    33,    33,
     331,   347,   104,   334,     4,   209,    85,   113,   113,   360,
     118,   112,   363,    49,   103,   104,   105,   221,   369,   323,
     109,   110,   226,   112,   370,   114,   230,   373,   232,   273,
     376,   377,   112,    90,    86,   113,   113,   327,   113,    88,
      90,   112,   116,    41,   112,   396,    41,    41,    41,   395,
     116,   110,    88,    89,   258,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     110,   478,   116,   109,   110,   116,   112,     4,   114,   387,
      99,    90,   118,   113,   430,   393,   117,   104,    33,   116,
     436,   498,   113,   111,    33,   118,   403,   113,   113,   445,
     298,   113,    99,    90,   118,   456,    23,   118,   118,   117,
      58,    88,   117,   520,    86,    33,   523,   421,    41,   323,
      86,   117,     7,     8,     9,    10,    11,   117,   332,   437,
      15,    90,   118,   118,    58,   117,    16,   488,   118,   117,
      25,    26,   118,   433,   118,    30,    31,    32,   168,   355,
     354,   355,   158,   504,    39,   425,   483,   466,    89,   223,
      62,    65,   493,    48,    -1,   496,   474,   371,    -1,    -1,
      -1,   517,   518,    -1,    -1,    60,    -1,    -1,    -1,   421,
     384,   101,   102,   103,   104,   105,    -1,    -1,    -1,   109,
     110,    -1,   112,    -1,   114,    -1,   438,    -1,     3,    -1,
      -1,    -1,     7,     8,     9,    10,    11,    -1,    13,    -1,
      15,    16,    17,    -1,    -1,    -1,    21,   421,    -1,    -1,
      25,    -1,    27,    -1,    29,    30,    -1,    32,    33,    34,
      -1,    -1,   117,    38,   438,    40,     7,     8,     9,    10,
      11,    46,    47,    -1,    15,    50,    51,    52,    -1,    -1,
      55,    56,    -1,    -1,    25,    26,    -1,    62,    63,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    39,   473,
      -1,    -1,    -1,    -1,    -1,   479,    -1,    48,    -1,    -1,
      -1,    -1,    87,    -1,    -1,   489,    -1,    -1,    -1,    60,
       4,    -1,    -1,   497,    -1,    -1,   101,   102,    -1,   104,
      -1,   106,   107,   108,   109,   110,    -1,   112,    -1,    -1,
       3,   116,   117,   118,     7,     8,     9,    10,    11,    -1,
      13,    -1,    15,    16,    17,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    25,    -1,    27,    49,    29,    30,    -1,    32,
      33,    34,    -1,    -1,    -1,    38,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    46,    47,    -1,    -1,    50,    51,    52,
      -1,    -1,    55,    56,    -1,    -1,    -1,    -1,    -1,    62,
      63,    -1,    -1,    -1,    88,    89,    -1,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,    -1,    -1,    87,   109,   110,    -1,   112,    -1,
     114,    -1,     4,    -1,   118,    -1,    -1,    -1,   101,   102,
      -1,   104,    -1,   106,   107,   108,   109,   110,    -1,   112,
      -1,    -1,     3,   116,   117,   118,     7,     8,     9,    10,
      11,    -1,    13,    -1,    15,    16,    17,    -1,    -1,    -1,
      21,    -1,    -1,    -1,    25,    -1,    27,    49,    29,    30,
      -1,    32,    33,    34,    -1,    -1,    -1,    38,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    50,
      51,    52,    -1,    -1,    55,    56,    -1,    -1,    -1,    -1,
      -1,    62,    63,    -1,    -1,    -1,    88,    89,    -1,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,    -1,    -1,    87,   109,   110,    -1,
     112,    -1,   114,    -1,     4,    -1,   118,    -1,    -1,    -1,
     101,   102,    -1,   104,    -1,   106,   107,   108,   109,   110,
      -1,   112,    -1,    -1,     3,   116,   117,   118,     7,     8,
       9,    10,    11,    -1,    13,    -1,    15,    16,    17,    -1,
      -1,    -1,    21,    -1,    -1,    -1,    25,    -1,    27,    49,
      29,    30,    -1,    32,    33,    34,    -1,    -1,    -1,    38,
      -1,    40,     4,    -1,    -1,    -1,    -1,    46,    47,    -1,
      -1,    50,    51,    52,    -1,    -1,    55,    56,    -1,    -1,
      -1,    -1,    -1,    62,    63,    -1,    -1,    -1,    88,    89,
      -1,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,    -1,    49,    87,   109,
     110,    -1,   112,    -1,   114,    -1,    -1,    -1,   118,     4,
      -1,    -1,   101,   102,    -1,   104,    -1,   106,   107,   108,
     109,   110,    -1,   112,    -1,    -1,    -1,   116,    -1,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    88,    89,     4,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,    49,    -1,    -1,   109,   110,    -1,
     112,    -1,   114,    -1,   116,    -1,    89,     4,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,    49,    -1,    -1,   109,   110,    -1,   112,
      -1,   114,    -1,    88,    89,    -1,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,    -1,    49,    -1,   109,   110,    -1,   112,    -1,   114,
      -1,   116,    88,    89,     4,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
      -1,    -1,    -1,   109,   110,    -1,   112,    -1,   114,    -1,
     116,    88,    89,     4,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,    49,
      -1,    -1,   109,   110,    -1,   112,    -1,   114,    -1,   116,
      -1,     4,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,    -1,    -1,    49,   109,
     110,    -1,   112,    -1,   114,    -1,    -1,    87,    88,    89,
       4,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,    49,    -1,    -1,   109,
     110,    -1,   112,    -1,   114,    -1,    -1,    88,    89,     4,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,    49,    -1,    -1,   109,   110,
      -1,   112,   113,   114,    -1,    88,    89,     4,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,    -1,    49,    -1,   109,   110,    -1,   112,
     113,   114,    -1,    -1,    88,    89,     4,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,    49,    -1,    -1,   109,   110,    -1,   112,   113,
     114,    -1,    -1,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,    49,    -1,    -1,   109,   110,    -1,   112,    -1,   114,
      -1,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,     4,
      -1,    -1,   109,   110,    -1,   112,    -1,   114,    -1,    -1,
      88,    89,    -1,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,     4,    -1,
      -1,   109,   110,    -1,   112,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,    -1,    -1,    49,   109,   110,    -1,   112,    -1,   114,
      -1,    -1,    -1,    88,    89,     4,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,    49,    -1,    -1,   109,   110,    -1,   112,   113,   114,
      -1,    -1,    88,    89,     4,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
      49,    -1,    -1,   109,   110,    -1,   112,   113,   114,    -1,
      88,    89,    -1,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,    -1,    49,
      -1,   109,   110,    -1,   112,   113,   114,    -1,    -1,    88,
      89,    -1,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,    -1,    -1,    -1,
     109,   110,    -1,   112,   113,   114,    -1,    -1,    88,    89,
      -1,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,    16,    17,    -1,   109,
     110,    -1,   112,    -1,   114,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    32,    33,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    -1,    16,    17,    -1,    -1,    47,    -1,    -1,
      -1,    51,    52,    -1,    -1,    -1,    56,    30,    -1,    32,
      33,    -1,    62,    63,    -1,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    51,    52,
      -1,    -1,    -1,    56,    -1,    -1,    -1,    87,    -1,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   101,   102,    -1,   104,    -1,   106,   107,   108,   109,
     110,    -1,   112,    -1,    87,    -1,    -1,    -1,   118,    -1,
      -1,    -1,    -1,    -1,    16,    17,    -1,    -1,   101,   102,
      -1,   104,    -1,   106,   107,   108,   109,   110,    30,   112,
      32,    33,    -1,    -1,   117,    -1,    38,    -1,    -1,    -1,
      -1,    16,    17,    -1,    -1,    47,    -1,    -1,    -1,    51,
      52,    -1,    -1,    -1,    56,    30,    -1,    32,    33,    -1,
      62,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    -1,    51,    52,    -1,    -1,
      -1,    56,    -1,    -1,    -1,    87,    -1,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,
     102,    -1,   104,    -1,   106,   107,   108,   109,   110,    -1,
     112,    -1,    87,    -1,   116,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    17,   101,   102,    -1,   104,
      -1,   106,   107,   108,   109,   110,   111,   112,    30,    -1,
      32,    33,    -1,    -1,    -1,    -1,    38,    -1,    -1,     5,
       6,    -1,    -1,    -1,    -1,    47,    12,    -1,    -1,    51,
      52,    -1,    18,    19,    56,    -1,    22,    -1,    24,    25,
      62,    -1,    28,    -1,    30,    -1,    32,    33,    -1,    35,
      36,    37,    -1,    -1,    -1,    -1,    42,    43,    -1,    45,
      -1,    47,    -1,    -1,    -1,    87,    52,    53,    54,    -1,
      56,    57,    -1,    59,    -1,    61,    62,    -1,    -1,   101,
     102,    -1,   104,    -1,   106,   107,   108,   109,   110,    -1,
     112,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,    -1,    -1,    -1,   109,   110,    -1,
     112,    -1,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   118,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    84,   120,   122,   121,     0,     7,     8,     9,    10,
      11,    15,    25,    26,    30,    31,    32,    39,    48,    60,
     150,   157,   158,   175,    16,    17,    30,    32,    33,    38,
      47,    51,    52,    56,    62,    87,   101,   102,   104,   106,
     107,   108,   109,   110,   112,   124,   133,   134,   162,   112,
     112,   112,   184,   185,   187,   188,   116,   184,   184,   184,
      33,    24,    25,    47,   182,   183,   182,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,   159,   171,   172,
     173,     3,    13,    15,    21,    25,    27,    29,    34,    38,
      40,    46,    50,    55,    63,   116,   118,   124,   157,   174,
     179,   112,   112,   163,   164,   130,    33,   181,   112,   124,
     112,   112,   112,   124,   124,   124,   135,   124,   124,   124,
      33,   111,   124,   131,   124,     4,    49,    88,    89,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   109,   110,   112,   114,    87,   124,
      33,    33,    90,   165,   182,   164,    33,   189,   151,   164,
     165,   164,   118,   182,   187,   182,   165,   189,    90,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,   116,   173,   124,   118,   181,   124,    33,   176,   118,
     112,   112,   181,   118,   131,    63,   118,   124,   124,   112,
      85,   192,   118,   174,   124,    33,   147,   148,   149,   159,
     124,    88,   131,   116,   131,   132,   126,   132,    87,    44,
      88,   164,    86,   111,   113,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,    33,   123,   124,   131,   128,    33,
     134,   113,   113,   113,     5,     6,    12,    18,    19,    22,
      24,    25,    28,    30,    32,    33,    35,    36,    37,    42,
      43,    45,    47,    52,    53,    54,    56,    57,    59,    61,
      62,   140,   190,     4,    49,    88,   166,   186,   122,   166,
       4,   164,   153,   166,   156,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   160,   118,    85,
     191,   165,   118,   112,   118,   191,    33,   110,   124,   165,
     191,   118,   112,   191,   118,   116,   124,   175,   191,   113,
      90,   113,    86,   118,   124,   113,   176,   113,   132,   113,
     136,   124,    88,   124,    90,    90,   111,   132,   116,   112,
      41,   164,   112,    41,    41,   116,   110,   110,   116,    41,
     167,   168,   117,   167,   116,     4,   167,   140,   175,   191,
     166,   191,   132,   191,    99,   180,   181,   113,   166,   191,
     124,   191,   177,   113,   117,   140,    90,   149,   149,   117,
     171,   113,   104,   125,   124,   123,   124,   129,   143,   147,
     140,   147,   140,    33,   141,   140,   144,   144,   144,   140,
     171,   116,   124,   170,   171,   152,   116,   171,   171,   161,
     167,   113,   124,    86,   111,   174,   167,   113,    14,    20,
     117,   178,   174,   171,   140,   127,   159,   111,   113,    33,
     137,   138,   139,   113,   113,   145,    86,   111,   111,   117,
     118,   131,   132,   169,   118,   137,   154,   118,   118,   117,
     171,   113,   181,    99,    23,   171,   174,   131,    90,    58,
     171,    88,   117,    86,    33,   142,   146,   140,    41,    86,
     117,   117,   145,   118,   124,   174,   118,    58,    90,   175,
     124,    16,   102,   139,    90,   117,   140,   117,   118,   155,
     191,   113,   191,   124,   175,   116,    16,   140,   117,   116,
     192,   171,   171,   192,   175,   118,   118,   175,   117,   117
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   119,   120,   121,   120,   122,   122,   123,   123,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   125,   124,
     124,   124,   124,   124,   124,   126,   127,   124,   124,   124,
     128,   129,   124,   130,   124,   124,   124,   124,   124,   124,
     124,   124,   131,   131,   132,   132,   133,   133,   135,   136,
     134,   137,   137,   138,   138,   139,   139,   139,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   141,   142,   140,   140,   143,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     144,   144,   145,   145,   146,   147,   147,   147,   148,   148,
     148,   149,   150,   151,   150,   150,   150,   150,   152,   150,
     153,   154,   155,   150,   156,   150,   150,   150,   157,   157,
     157,   157,   157,   158,   158,   158,   158,   160,   161,   159,
     162,   163,   164,   164,   165,   165,   166,   166,   166,   166,
     168,   169,   167,   167,   170,   170,   170,   171,   171,   172,
     172,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   175,   175,   176,   177,   177,
     178,   178,   179,   179,   180,   180,   181,   183,   182,   185,
     186,   184,   188,   187,   189,   190,   191,   191,   192,   192
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     3,     2,     0,     1,     0,     3,
       4,     2,     2,     2,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     5,     3,     4,     4,     6,     3,     4,     0,     6,
       3,     3,     3,     2,     4,     0,     0,     7,     5,     4,
       0,     0,     6,     0,     3,     3,     1,     5,     1,     1,
       1,     3,     3,     1,     1,     0,     3,     1,     0,     0,
       5,     1,     2,     1,     3,     3,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     6,     4,     0,     0,     6,     4,     0,     5,
       1,     3,     3,     2,     4,     4,     3,     1,     3,     1,
       3,     1,     2,     0,     5,     1,     2,     0,     3,     3,
       1,     4,     3,     0,     5,     7,     7,     7,     0,     9,
       0,     0,     0,    12,     0,     7,     2,     1,     4,     4,
       4,     1,     1,     3,     3,     3,     4,     0,     0,     6,
       3,     1,     5,     3,     2,     0,     0,     1,     1,     1,
       0,     0,     3,     0,     3,     4,     1,     1,     0,     2,
       1,     3,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     3,     1,     1,     3,     3,
       1,     1,     4,     4,     4,     5,     7,     5,     2,     3,
       3,     3,     3,     4,     4,     4,     8,     8,     5,    11,
       6,    12,     3,     1,     1,     2,     0,     4,     2,     0,
       4,     3,     6,     8,     3,     1,     1,     0,     2,     0,
       0,     3,     0,     2,     1,     1,     1,     0,     1,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 257 "parse.y" /* yacc.c:1646  */
    {
			if ( optimize )
				(yyvsp[0].stmt) = (yyvsp[0].stmt)->Simplify();

			if ( stmts )
				stmts->AsStmtList()->Stmts().append((yyvsp[0].stmt));
			else
				stmts = (yyvsp[0].stmt);

			// Any objects creates from hereon out should not
			// have file positions associated with them.
			set_location(no_location);
			}
#line 2244 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 3:
#line 274 "parse.y" /* yacc.c:1646  */
    { in_debug = true; }
#line 2250 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 4:
#line 275 "parse.y" /* yacc.c:1646  */
    {
			g_curr_debug_expr = (yyvsp[0].expr);
			}
#line 2258 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 7:
#line 287 "parse.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2264 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 8:
#line 289 "parse.y" /* yacc.c:1646  */
    { (yyval.expr) = 0; }
#line 2270 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 9:
#line 294 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-2]), (yylsp[0]));
			(yyval.expr) = (yyvsp[-1].expr); (yyval.expr)->MarkParen();
			}
#line 2279 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 10:
#line 300 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-3]), (yylsp[0]));
			(yyval.expr) = new CloneExpr((yyvsp[-1].expr));
			}
#line 2288 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 11:
#line 306 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-1]), (yylsp[0]));
			(yyval.expr) = new IncrExpr(EXPR_INCR, (yyvsp[0].expr));
			}
#line 2297 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 12:
#line 312 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-1]), (yylsp[0]));
			(yyval.expr) = new IncrExpr(EXPR_DECR, (yyvsp[0].expr));
			}
#line 2306 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 13:
#line 318 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-1]), (yylsp[0]));
			(yyval.expr) = new NotExpr((yyvsp[0].expr));
			}
#line 2315 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 14:
#line 324 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-1]), (yylsp[0]));
			(yyval.expr) = new NegExpr((yyvsp[0].expr));
			}
#line 2324 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 15:
#line 330 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-1]), (yylsp[0]));
			(yyval.expr) = new PosExpr((yyvsp[0].expr));
			}
#line 2333 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 16:
#line 336 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-2]), (yylsp[0]));
			(yyval.expr) = new AddExpr((yyvsp[-2].expr), (yyvsp[0].expr));
			}
#line 2342 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 17:
#line 342 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-2]), (yylsp[0]));
			(yyval.expr) = new AddToExpr((yyvsp[-2].expr), (yyvsp[0].expr));
			}
#line 2351 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 18:
#line 348 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-2]), (yylsp[0]));
			(yyval.expr) = new SubExpr((yyvsp[-2].expr), (yyvsp[0].expr));
			}
#line 2360 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 19:
#line 354 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-2]), (yylsp[0]));
			(yyval.expr) = new RemoveFromExpr((yyvsp[-2].expr), (yyvsp[0].expr));
			}
#line 2369 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 20:
#line 360 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-2]), (yylsp[0]));
			(yyval.expr) = new TimesExpr((yyvsp[-2].expr), (yyvsp[0].expr));
			}
#line 2378 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 21:
#line 366 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-2]), (yylsp[0]));
			(yyval.expr) = new DivideExpr((yyvsp[-2].expr), (yyvsp[0].expr));
			}
#line 2387 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 22:
#line 372 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-2]), (yylsp[0]));
			(yyval.expr) = new ModExpr((yyvsp[-2].expr), (yyvsp[0].expr));
			}
#line 2396 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 23:
#line 378 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-2]), (yylsp[0]));
			(yyval.expr) = new BoolExpr(EXPR_AND, (yyvsp[-2].expr), (yyvsp[0].expr));
			}
#line 2405 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 24:
#line 384 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-2]), (yylsp[0]));
			(yyval.expr) = new BoolExpr(EXPR_OR, (yyvsp[-2].expr), (yyvsp[0].expr));
			}
#line 2414 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 25:
#line 390 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-2]), (yylsp[0]));
			(yyval.expr) = new EqExpr(EXPR_EQ, (yyvsp[-2].expr), (yyvsp[0].expr));
			}
#line 2423 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 26:
#line 396 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-2]), (yylsp[0]));
			(yyval.expr) = new EqExpr(EXPR_NE, (yyvsp[-2].expr), (yyvsp[0].expr));
			}
#line 2432 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 27:
#line 402 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-2]), (yylsp[0]));
			(yyval.expr) = new RelExpr(EXPR_LT, (yyvsp[-2].expr), (yyvsp[0].expr));
			}
#line 2441 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 28:
#line 408 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-2]), (yylsp[0]));
			(yyval.expr) = new RelExpr(EXPR_LE, (yyvsp[-2].expr), (yyvsp[0].expr));
			}
#line 2450 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 29:
#line 414 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-2]), (yylsp[0]));
			(yyval.expr) = new RelExpr(EXPR_GT, (yyvsp[-2].expr), (yyvsp[0].expr));
			}
#line 2459 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 30:
#line 420 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-2]), (yylsp[0]));
			(yyval.expr) = new RelExpr(EXPR_GE, (yyvsp[-2].expr), (yyvsp[0].expr));
			}
#line 2468 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 31:
#line 426 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-4]), (yylsp[0]));
			(yyval.expr) = new CondExpr((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr));
			}
#line 2477 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 32:
#line 432 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-2]), (yylsp[0]));
			(yyval.expr) = get_assign_expr((yyvsp[-2].expr), (yyvsp[0].expr), in_init);
			}
#line 2486 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 33:
#line 438 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-2]), (yylsp[0]));
			(yyval.expr) = add_and_assign_local((yyvsp[-2].id), (yyvsp[0].expr), new Val(1, TYPE_BOOL));
			}
#line 2495 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 34:
#line 444 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-3]), (yylsp[0]));
			(yyval.expr) = new IndexExpr((yyvsp[-3].expr), (yyvsp[-1].list));
			}
#line 2504 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 35:
#line 450 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-5]), (yylsp[0]));
			Expr* low = (yyvsp[-3].expr) ? (yyvsp[-3].expr) : new ConstExpr(new Val(0, TYPE_COUNT));
			Expr* high = (yyvsp[-1].expr) ? (yyvsp[-1].expr) : new SizeExpr((yyvsp[-5].expr));
			ListExpr* le = new ListExpr(low);
			le->Append(high);
			(yyval.expr) = new IndexExpr((yyvsp[-5].expr), le, true);
			}
#line 2517 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 36:
#line 460 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-2]), (yylsp[0]));
			(yyval.expr) = new FieldExpr((yyvsp[-2].expr), (yyvsp[0].str));
			}
#line 2526 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 37:
#line 466 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-3]), (yylsp[0]));
			(yyval.expr) = new FieldAssignExpr((yyvsp[-2].str), (yyvsp[0].expr));
			}
#line 2535 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 38:
#line 472 "parse.y" /* yacc.c:1646  */
    {
			func_id = current_scope()->GenerateTemporary("anonymous-function");
			func_id->SetInferReturnType(true);
			begin_func(func_id,
				   current_module.c_str(),
				   FUNC_FLAVOR_FUNCTION,
				   0,
				   (yyvsp[-1].func_type));
			}
#line 2549 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 39:
#line 482 "parse.y" /* yacc.c:1646  */
    {
			(yyval.expr) = new FieldAssignExpr((yyvsp[-4].str), new ConstExpr(func_id->ID_Val()));
			}
#line 2557 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 40:
#line 487 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-2]), (yylsp[0]));
			(yyval.expr) = new InExpr((yyvsp[-2].expr), (yyvsp[0].expr));
			}
#line 2566 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 41:
#line 493 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-2]), (yylsp[0]));
			(yyval.expr) = new NotExpr(new InExpr((yyvsp[-2].expr), (yyvsp[0].expr)));
			}
#line 2575 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 42:
#line 499 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-2]), (yylsp[0]));

			bool is_record_ctor = true;

			// If every expression in the list is a field assignment,
			// then treat it as a record constructor, else as a list
			// used for an initializer.

			for ( int i = 0; i < (yyvsp[-1].list)->Exprs().length(); ++i )
				{
				if ( (yyvsp[-1].list)->Exprs()[i]->Tag() != EXPR_FIELD_ASSIGN )
					{
					is_record_ctor = false;
					break;
					}
				}

			if ( is_record_ctor )
				(yyval.expr) = new RecordConstructorExpr((yyvsp[-1].list));
			else
				(yyval.expr) = (yyvsp[-1].list);
			}
#line 2603 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 43:
#line 524 "parse.y" /* yacc.c:1646  */
    {
			// We interpret this as an empty record constructor.
			(yyval.expr) = new RecordConstructorExpr(new ListExpr);
			}
#line 2612 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 44:
#line 531 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-3]), (yylsp[0]));
			(yyval.expr) = new RecordConstructorExpr((yyvsp[-1].list));
			}
#line 2621 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 45:
#line 536 "parse.y" /* yacc.c:1646  */
    { ++in_init; }
#line 2627 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 46:
#line 536 "parse.y" /* yacc.c:1646  */
    { --in_init; }
#line 2633 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 47:
#line 538 "parse.y" /* yacc.c:1646  */
    { // the ++in_init fixes up the parsing of "[x] = y"
			set_location((yylsp[-6]), (yylsp[-2]));
			(yyval.expr) = new TableConstructorExpr((yyvsp[-3].list), (yyvsp[0].attr_l));
			}
#line 2642 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 48:
#line 544 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-4]), (yylsp[-1]));
			(yyval.expr) = new SetConstructorExpr((yyvsp[-2].list), (yyvsp[0].attr_l));
			}
#line 2651 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 49:
#line 550 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-3]), (yylsp[0]));
			(yyval.expr) = new VectorConstructorExpr((yyvsp[-1].list));
			}
#line 2660 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 50:
#line 556 "parse.y" /* yacc.c:1646  */
    {
			if ( expr_is_table_type_name((yyvsp[-1].expr)) )
				++in_init;
			}
#line 2669 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 51:
#line 562 "parse.y" /* yacc.c:1646  */
    {
			if ( expr_is_table_type_name((yyvsp[-3].expr)) )
				--in_init;
			}
#line 2678 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 52:
#line 568 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-5]), (yylsp[0]));

			BroType* ctor_type = 0;

			if ( (yyvsp[-5].expr)->Tag() == EXPR_NAME &&
			     (ctor_type = (yyvsp[-5].expr)->AsNameExpr()->Id()->AsType()) )
				{
				switch ( ctor_type->Tag() ) {
				case TYPE_RECORD:
					(yyval.expr) = new RecordCoerceExpr(new RecordConstructorExpr((yyvsp[-2].list)),
					                          ctor_type->AsRecordType());
					break;

				case TYPE_TABLE:
					if ( ctor_type->IsTable() )
						(yyval.expr) = new TableConstructorExpr((yyvsp[-2].list), 0, ctor_type);
					else
						(yyval.expr) = new SetConstructorExpr((yyvsp[-2].list), 0, ctor_type);

					break;

				case TYPE_VECTOR:
					(yyval.expr) = new VectorConstructorExpr((yyvsp[-2].list), ctor_type);
					break;

				default:
					(yyvsp[-5].expr)->Error("constructor type not implemented");
					YYERROR;
				}
				}

			else
				(yyval.expr) = new CallExpr((yyvsp[-5].expr), (yyvsp[-2].list), in_hook > 0);
			}
#line 2718 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 53:
#line 604 "parse.y" /* yacc.c:1646  */
    { ++in_hook; }
#line 2724 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 54:
#line 605 "parse.y" /* yacc.c:1646  */
    {
			--in_hook;
			set_location((yylsp[-2]), (yylsp[0]));
			if ( (yyvsp[0].expr)->Tag() != EXPR_CALL )
				(yyvsp[0].expr)->Error("not a valid hook call expression");
			(yyval.expr) = (yyvsp[0].expr);
			}
#line 2736 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 55:
#line 614 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-2]), (yylsp[0]));
			(yyval.expr) = new HasFieldExpr((yyvsp[-2].expr), (yyvsp[0].str));
			}
#line 2745 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 57:
#line 622 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-4]), (yylsp[0]));
			(yyval.expr) = new ScheduleExpr((yyvsp[-3].expr), (yyvsp[-1].event_expr));
			}
#line 2754 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 58:
#line 628 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[0]));

			ID* id = lookup_ID((yyvsp[0].str), current_module.c_str());
			if ( ! id )
				{
				if ( ! in_debug )
					{
/*	// CHECK THAT THIS IS NOT GLOBAL.
					id = install_ID($1, current_module.c_str(),
							false, is_export);
*/

					yyerror(fmt("unknown identifier %s", (yyvsp[0].str)));
					YYERROR;
					}
				else
					{
					yyerror(fmt("unknown identifier %s", (yyvsp[0].str)));
					YYERROR;
					}
				}
			else
				{
				if ( ! id->Type() )
					{
					id->Error("undeclared variable");
					id->SetType(error_type());
					(yyval.expr) = new NameExpr(id);
					}

				else if ( id->IsEnumConst() )
					{
					EnumType* t = id->Type()->AsEnumType();
					int intval = t->Lookup(id->ModuleName(),
							       id->Name());
					if ( intval < 0 )
						reporter->InternalError("enum value not found for %s", id->Name());
					(yyval.expr) = new ConstExpr(new EnumVal(intval, t));
					}
				else
					(yyval.expr) = new NameExpr(id);
				}
			}
#line 2803 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 59:
#line 674 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[0]));
			(yyval.expr) = new ConstExpr((yyvsp[0].val));
			}
#line 2812 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 60:
#line 680 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[0]));
			(yyvsp[0].re)->Compile();
			(yyval.expr) = new ConstExpr(new PatternVal((yyvsp[0].re)));
			}
#line 2822 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 61:
#line 687 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-2]), (yylsp[0]));
			(yyval.expr) = new SizeExpr((yyvsp[-1].expr));
			}
#line 2831 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 62:
#line 695 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-2]), (yylsp[0]));
			(yyvsp[-2].list)->Append((yyvsp[0].expr));
			}
#line 2840 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 63:
#line 701 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[0]));
			(yyval.list) = new ListExpr((yyvsp[0].expr));
			}
#line 2849 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 65:
#line 710 "parse.y" /* yacc.c:1646  */
    { (yyval.list) = new ListExpr(); }
#line 2855 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 66:
#line 715 "parse.y" /* yacc.c:1646  */
    {
			(yyvsp[-2].re)->AddPat((yyvsp[0].str));
			delete [] (yyvsp[0].str);
			}
#line 2864 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 67:
#line 721 "parse.y" /* yacc.c:1646  */
    {
			(yyval.re) = new RE_Matcher((yyvsp[0].str));
			delete [] (yyvsp[0].str);
			}
#line 2873 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 68:
#line 728 "parse.y" /* yacc.c:1646  */
    { begin_RE(); }
#line 2879 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 69:
#line 728 "parse.y" /* yacc.c:1646  */
    { end_RE(); }
#line 2885 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 70:
#line 729 "parse.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[-2].str); }
#line 2891 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 71:
#line 734 "parse.y" /* yacc.c:1646  */
    {
			(yyval.type) = cur_enum_type;
			cur_enum_type = NULL;
			}
#line 2900 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 72:
#line 740 "parse.y" /* yacc.c:1646  */
    {
			(yyval.type) = cur_enum_type;
			cur_enum_type = NULL;
			}
#line 2909 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 75:
#line 759 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-2]), (yylsp[0]));
			assert(cur_enum_type);

			if ( (yyvsp[0].val)->Type()->Tag() != TYPE_COUNT )
				reporter->Error("enumerator is not a count constant");
			else
				cur_enum_type->AddName(current_module, (yyvsp[-2].str),
				                       (yyvsp[0].val)->InternalUnsigned(), is_export);
			}
#line 2924 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 76:
#line 771 "parse.y" /* yacc.c:1646  */
    {
			/* We only accept counts as enumerator, but we want to return a nice
			   error message if users triy to use a negative integer (will also
			   catch other cases, but that's fine.)
			*/
			reporter->Error("enumerator is not a count constant");
			}
#line 2936 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 77:
#line 780 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[0]));
			assert(cur_enum_type);
			cur_enum_type->AddName(current_module, (yyvsp[0].str), is_export);
			}
#line 2946 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 78:
#line 788 "parse.y" /* yacc.c:1646  */
    {
				set_location((yylsp[0]));
				(yyval.type) = base_type(TYPE_BOOL);
				}
#line 2955 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 79:
#line 793 "parse.y" /* yacc.c:1646  */
    {
				set_location((yylsp[0]));
				(yyval.type) = base_type(TYPE_INT);
				}
#line 2964 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 80:
#line 798 "parse.y" /* yacc.c:1646  */
    {
				set_location((yylsp[0]));
				(yyval.type) = base_type(TYPE_COUNT);
				}
#line 2973 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 81:
#line 803 "parse.y" /* yacc.c:1646  */
    {
				set_location((yylsp[0]));
				(yyval.type) = base_type(TYPE_COUNTER);
				}
#line 2982 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 82:
#line 808 "parse.y" /* yacc.c:1646  */
    {
				set_location((yylsp[0]));
				(yyval.type) = base_type(TYPE_DOUBLE);
				}
#line 2991 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 83:
#line 813 "parse.y" /* yacc.c:1646  */
    {
				set_location((yylsp[0]));
				(yyval.type) = base_type(TYPE_TIME);
				}
#line 3000 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 84:
#line 818 "parse.y" /* yacc.c:1646  */
    {
				set_location((yylsp[0]));
				(yyval.type) = base_type(TYPE_INTERVAL);
				}
#line 3009 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 85:
#line 823 "parse.y" /* yacc.c:1646  */
    {
				set_location((yylsp[0]));
				(yyval.type) = base_type(TYPE_STRING);
				}
#line 3018 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 86:
#line 828 "parse.y" /* yacc.c:1646  */
    {
				set_location((yylsp[0]));
				(yyval.type) = base_type(TYPE_PATTERN);
				}
#line 3027 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 87:
#line 833 "parse.y" /* yacc.c:1646  */
    {
				set_location((yylsp[0]));
				(yyval.type) = base_type(TYPE_TIMER);
				}
#line 3036 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 88:
#line 838 "parse.y" /* yacc.c:1646  */
    {
				set_location((yylsp[0]));
				(yyval.type) = base_type(TYPE_PORT);
				}
#line 3045 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 89:
#line 843 "parse.y" /* yacc.c:1646  */
    {
				set_location((yylsp[0]));
				(yyval.type) = base_type(TYPE_ADDR);
				}
#line 3054 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 90:
#line 848 "parse.y" /* yacc.c:1646  */
    {
				set_location((yylsp[0]));
				(yyval.type) = base_type(TYPE_SUBNET);
				}
#line 3063 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 91:
#line 853 "parse.y" /* yacc.c:1646  */
    {
				set_location((yylsp[0]));
				(yyval.type) = base_type(TYPE_ANY);
				}
#line 3072 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 92:
#line 859 "parse.y" /* yacc.c:1646  */
    {
				set_location((yylsp[-5]), (yylsp[0]));
				(yyval.type) = new TableType((yyvsp[-3].type_l), (yyvsp[0].type));
				}
#line 3081 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 93:
#line 865 "parse.y" /* yacc.c:1646  */
    {
				set_location((yylsp[-3]), (yylsp[0]));
				(yyval.type) = new SetType((yyvsp[-1].type_l), 0);
				}
#line 3090 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 94:
#line 871 "parse.y" /* yacc.c:1646  */
    { ++in_record; }
#line 3096 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 95:
#line 873 "parse.y" /* yacc.c:1646  */
    { --in_record; }
#line 3102 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 96:
#line 875 "parse.y" /* yacc.c:1646  */
    {
				set_location((yylsp[-5]), (yylsp[-1]));
				(yyval.type) = new RecordType((yyvsp[-2].type_decl_l));
				}
#line 3111 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 97:
#line 881 "parse.y" /* yacc.c:1646  */
    {
				set_location((yylsp[-3]), (yylsp[0]));
				reporter->Error("union type not implemented");
				(yyval.type) = 0;
				}
#line 3121 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 98:
#line 887 "parse.y" /* yacc.c:1646  */
    { set_location((yylsp[-1])); parser_new_enum(); }
#line 3127 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 99:
#line 888 "parse.y" /* yacc.c:1646  */
    {
				set_location((yylsp[-4]), (yylsp[0]));
				(yyvsp[-1].type)->UpdateLocationEndInfo((yylsp[0]));
				(yyval.type) = (yyvsp[-1].type);
				}
#line 3137 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 100:
#line 895 "parse.y" /* yacc.c:1646  */
    {
				set_location((yylsp[0]));
				// $$ = new TypeList();
				reporter->Error("list type not implemented");
				(yyval.type) = 0;
				}
#line 3148 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 101:
#line 903 "parse.y" /* yacc.c:1646  */
    {
				set_location((yylsp[-2]));
				// $$ = new TypeList($3);
				reporter->Error("list type not implemented");
				(yyval.type) = 0;
				}
#line 3159 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 102:
#line 911 "parse.y" /* yacc.c:1646  */
    {
				set_location((yylsp[-2]), (yylsp[0]));
				(yyval.type) = new VectorType((yyvsp[0].type));
				}
#line 3168 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 103:
#line 917 "parse.y" /* yacc.c:1646  */
    {
				set_location((yylsp[-1]), (yylsp[0]));
				(yyval.type) = (yyvsp[0].func_type);
				}
#line 3177 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 104:
#line 923 "parse.y" /* yacc.c:1646  */
    {
				set_location((yylsp[-3]), (yylsp[-1]));
				(yyval.type) = new FuncType((yyvsp[-1].record), 0, FUNC_FLAVOR_EVENT);
				}
#line 3186 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 105:
#line 929 "parse.y" /* yacc.c:1646  */
    {
				set_location((yylsp[-3]), (yylsp[-1]));
				(yyval.type) = new FuncType((yyvsp[-1].record), base_type(TYPE_BOOL), FUNC_FLAVOR_HOOK);
				}
#line 3195 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 106:
#line 935 "parse.y" /* yacc.c:1646  */
    {
				set_location((yylsp[-2]), (yylsp[0]));
				(yyval.type) = new FileType((yyvsp[0].type));
				}
#line 3204 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 107:
#line 941 "parse.y" /* yacc.c:1646  */
    {
				set_location((yylsp[0]));
				(yyval.type) = new FileType(base_type(TYPE_STRING));
				}
#line 3213 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 108:
#line 947 "parse.y" /* yacc.c:1646  */
    {
				set_location((yylsp[-2]), (yylsp[0]));
				(yyval.type) = new OpaqueType((yyvsp[0].str));
				}
#line 3222 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 109:
#line 953 "parse.y" /* yacc.c:1646  */
    {
			if ( ! (yyvsp[0].id) || ! ((yyval.type) = (yyvsp[0].id)->AsType()) )
				{
				NullStmt here;
				if ( (yyvsp[0].id) )
					(yyvsp[0].id)->Error("not a BRO type", &here);
				(yyval.type) = error_type();
				}
			else
				Ref((yyval.type));
			}
#line 3238 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 110:
#line 968 "parse.y" /* yacc.c:1646  */
    { (yyvsp[-2].type_l)->AppendEvenIfNotPure((yyvsp[0].type)); }
#line 3244 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 111:
#line 970 "parse.y" /* yacc.c:1646  */
    {
			(yyval.type_l) = new TypeList((yyvsp[0].type));
			(yyval.type_l)->Append((yyvsp[0].type));
			}
#line 3253 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 112:
#line 978 "parse.y" /* yacc.c:1646  */
    {
			(yyvsp[-1].type_decl_l)->append((yyvsp[0].type_decl));
			}
#line 3261 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 113:
#line 982 "parse.y" /* yacc.c:1646  */
    {
			(yyval.type_decl_l) = new type_decl_list();
			}
#line 3269 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 114:
#line 989 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-4]), (yylsp[-1]));
			(yyval.type_decl) = new TypeDecl((yyvsp[-2].type), (yyvsp[-4].str), (yyvsp[-1].attr_l), (in_record > 0));

			if ( in_record > 0 && cur_decl_type_id )
				broxygen_mgr->RecordField(cur_decl_type_id, (yyval.type_decl), ::filename);
			}
#line 3281 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 115:
#line 1000 "parse.y" /* yacc.c:1646  */
    { (yyval.record) = new RecordType((yyvsp[0].type_decl_l)); }
#line 3287 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 116:
#line 1002 "parse.y" /* yacc.c:1646  */
    { (yyval.record) = new RecordType((yyvsp[-1].type_decl_l)); }
#line 3293 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 117:
#line 1004 "parse.y" /* yacc.c:1646  */
    { (yyval.record) = new RecordType(new type_decl_list()); }
#line 3299 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 118:
#line 1009 "parse.y" /* yacc.c:1646  */
    { (yyvsp[-2].type_decl_l)->append((yyvsp[0].type_decl)); }
#line 3305 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 119:
#line 1011 "parse.y" /* yacc.c:1646  */
    { (yyvsp[-2].type_decl_l)->append((yyvsp[0].type_decl)); }
#line 3311 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 120:
#line 1013 "parse.y" /* yacc.c:1646  */
    { (yyval.type_decl_l) = new type_decl_list(); (yyval.type_decl_l)->append((yyvsp[0].type_decl)); }
#line 3317 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 121:
#line 1018 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-3]), (yylsp[0]));
			(yyval.type_decl) = new TypeDecl((yyvsp[-1].type), (yyvsp[-3].str), (yyvsp[0].attr_l));
			}
#line 3326 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 122:
#line 1026 "parse.y" /* yacc.c:1646  */
    {
			current_module = (yyvsp[-1].str);
			broxygen_mgr->ModuleUsage(::filename, current_module);
			}
#line 3335 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 123:
#line 1031 "parse.y" /* yacc.c:1646  */
    { is_export = true; }
#line 3341 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 124:
#line 1032 "parse.y" /* yacc.c:1646  */
    { is_export = false; }
#line 3347 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 125:
#line 1035 "parse.y" /* yacc.c:1646  */
    {
			add_global((yyvsp[-5].id), (yyvsp[-4].type), (yyvsp[-3].ic), (yyvsp[-2].expr), (yyvsp[-1].attr_l), VAR_REGULAR);
			broxygen_mgr->Identifier((yyvsp[-5].id));
			}
#line 3356 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 126:
#line 1041 "parse.y" /* yacc.c:1646  */
    {
			add_global((yyvsp[-5].id), (yyvsp[-4].type), (yyvsp[-3].ic), (yyvsp[-2].expr), (yyvsp[-1].attr_l), VAR_CONST);
			broxygen_mgr->Identifier((yyvsp[-5].id));
			}
#line 3365 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 127:
#line 1047 "parse.y" /* yacc.c:1646  */
    {
			add_global((yyvsp[-5].id), (yyvsp[-4].type), (yyvsp[-3].ic), (yyvsp[-2].expr), (yyvsp[-1].attr_l), VAR_REDEF);
			broxygen_mgr->Redef((yyvsp[-5].id), ::filename);
			}
#line 3374 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 128:
#line 1053 "parse.y" /* yacc.c:1646  */
    { parser_redef_enum((yyvsp[-2].id)); broxygen_mgr->Redef((yyvsp[-2].id), ::filename); }
#line 3380 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 129:
#line 1055 "parse.y" /* yacc.c:1646  */
    {
			// Broxygen already grabbed new enum IDs as the type created them.
			}
#line 3388 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 130:
#line 1060 "parse.y" /* yacc.c:1646  */
    { cur_decl_type_id = (yyvsp[0].id); broxygen_mgr->Redef((yyvsp[0].id), ::filename); }
#line 3394 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 131:
#line 1062 "parse.y" /* yacc.c:1646  */
    { ++in_record; }
#line 3400 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 132:
#line 1064 "parse.y" /* yacc.c:1646  */
    { --in_record; }
#line 3406 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 133:
#line 1066 "parse.y" /* yacc.c:1646  */
    {
			cur_decl_type_id = 0;

			if ( ! (yyvsp[-9].id)->Type() )
				(yyvsp[-9].id)->Error("unknown identifier");
			else
				extend_record((yyvsp[-9].id), (yyvsp[-4].type_decl_l), (yyvsp[-1].attr_l));
			}
#line 3419 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 134:
#line 1076 "parse.y" /* yacc.c:1646  */
    { cur_decl_type_id = (yyvsp[-1].id); broxygen_mgr->StartType((yyvsp[-1].id));  }
#line 3425 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 135:
#line 1078 "parse.y" /* yacc.c:1646  */
    {
			cur_decl_type_id = 0;
			add_type((yyvsp[-5].id), (yyvsp[-2].type), (yyvsp[-1].attr_l));
			broxygen_mgr->Identifier((yyvsp[-5].id));
			}
#line 3435 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 136:
#line 1085 "parse.y" /* yacc.c:1646  */
    { }
#line 3441 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 138:
#line 1092 "parse.y" /* yacc.c:1646  */
    { do_atif((yyvsp[-1].expr)); }
#line 3447 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 139:
#line 1094 "parse.y" /* yacc.c:1646  */
    { do_atifdef((yyvsp[-1].str)); }
#line 3453 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 140:
#line 1096 "parse.y" /* yacc.c:1646  */
    { do_atifndef((yyvsp[-1].str)); }
#line 3459 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 141:
#line 1098 "parse.y" /* yacc.c:1646  */
    { do_atendif(); }
#line 3465 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 142:
#line 1100 "parse.y" /* yacc.c:1646  */
    { do_atelse(); }
#line 3471 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 143:
#line 1105 "parse.y" /* yacc.c:1646  */
    {
			begin_func((yyvsp[-1].id), current_module.c_str(),
				FUNC_FLAVOR_FUNCTION, 0, (yyvsp[0].func_type));
			(yyval.func_type) = (yyvsp[0].func_type);
			broxygen_mgr->Identifier((yyvsp[-1].id));
			}
#line 3482 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 144:
#line 1112 "parse.y" /* yacc.c:1646  */
    {
			begin_func((yyvsp[-1].id), current_module.c_str(),
				   FUNC_FLAVOR_EVENT, 0, (yyvsp[0].func_type));
			(yyval.func_type) = (yyvsp[0].func_type);
			}
#line 3492 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 145:
#line 1118 "parse.y" /* yacc.c:1646  */
    {
			(yyvsp[0].func_type)->ClearYieldType(FUNC_FLAVOR_HOOK);
			(yyvsp[0].func_type)->SetYieldType(base_type(TYPE_BOOL));
			begin_func((yyvsp[-1].id), current_module.c_str(),
				   FUNC_FLAVOR_HOOK, 0, (yyvsp[0].func_type));
			(yyval.func_type) = (yyvsp[0].func_type);
			}
#line 3504 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 146:
#line 1126 "parse.y" /* yacc.c:1646  */
    {
			begin_func((yyvsp[-1].id), current_module.c_str(),
				   FUNC_FLAVOR_EVENT, 1, (yyvsp[0].func_type));
			(yyval.func_type) = (yyvsp[0].func_type);
			}
#line 3514 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 147:
#line 1135 "parse.y" /* yacc.c:1646  */
    {
			saved_in_init.push_back(in_init);
			in_init = 0;
			}
#line 3523 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 148:
#line 1141 "parse.y" /* yacc.c:1646  */
    {
			in_init = saved_in_init.back();
			saved_in_init.pop_back();
			}
#line 3532 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 149:
#line 1147 "parse.y" /* yacc.c:1646  */
    {
			if ( optimize )
				(yyvsp[-2].stmt) = (yyvsp[-2].stmt)->Simplify();

			end_func((yyvsp[-2].stmt), (yyvsp[-5].attr_l));
			}
#line 3543 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 150:
#line 1157 "parse.y" /* yacc.c:1646  */
    { (yyval.expr) = new ConstExpr((yyvsp[-1].id)->ID_Val()); }
#line 3549 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 151:
#line 1162 "parse.y" /* yacc.c:1646  */
    {
			(yyval.id) = current_scope()->GenerateTemporary("anonymous-function");
			begin_func((yyval.id), current_module.c_str(),
				   FUNC_FLAVOR_FUNCTION, 0, (yyvsp[0].func_type));
			}
#line 3559 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 152:
#line 1171 "parse.y" /* yacc.c:1646  */
    { (yyval.func_type) = new FuncType((yyvsp[-3].record), (yyvsp[0].type), FUNC_FLAVOR_FUNCTION); }
#line 3565 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 153:
#line 1173 "parse.y" /* yacc.c:1646  */
    { (yyval.func_type) = new FuncType((yyvsp[-1].record), base_type(TYPE_VOID), FUNC_FLAVOR_FUNCTION); }
#line 3571 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 154:
#line 1178 "parse.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type); }
#line 3577 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 155:
#line 1180 "parse.y" /* yacc.c:1646  */
    { (yyval.type) = 0; }
#line 3583 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 156:
#line 1184 "parse.y" /* yacc.c:1646  */
    { (yyval.ic) = INIT_NONE; }
#line 3589 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 157:
#line 1185 "parse.y" /* yacc.c:1646  */
    { (yyval.ic) = INIT_FULL; }
#line 3595 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 158:
#line 1186 "parse.y" /* yacc.c:1646  */
    { (yyval.ic) = INIT_EXTRA; }
#line 3601 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 159:
#line 1187 "parse.y" /* yacc.c:1646  */
    { (yyval.ic) = INIT_REMOVE; }
#line 3607 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 160:
#line 1191 "parse.y" /* yacc.c:1646  */
    { ++in_init; }
#line 3613 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 161:
#line 1191 "parse.y" /* yacc.c:1646  */
    { --in_init; }
#line 3619 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 162:
#line 1192 "parse.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 3625 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 163:
#line 1194 "parse.y" /* yacc.c:1646  */
    { (yyval.expr) = 0; }
#line 3631 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 164:
#line 1199 "parse.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].list); }
#line 3637 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 165:
#line 1201 "parse.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-2].list); }
#line 3643 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 168:
#line 1208 "parse.y" /* yacc.c:1646  */
    { (yyval.attr_l) = 0; }
#line 3649 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 169:
#line 1213 "parse.y" /* yacc.c:1646  */
    { (yyvsp[-1].attr_l)->append((yyvsp[0].attr)); }
#line 3655 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 170:
#line 1215 "parse.y" /* yacc.c:1646  */
    {
			(yyval.attr_l) = new attr_list;
			(yyval.attr_l)->append((yyvsp[0].attr));
			}
#line 3664 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 171:
#line 1223 "parse.y" /* yacc.c:1646  */
    { (yyval.attr) = new Attr(ATTR_DEFAULT, (yyvsp[0].expr)); }
#line 3670 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 172:
#line 1225 "parse.y" /* yacc.c:1646  */
    { (yyval.attr) = new Attr(ATTR_OPTIONAL); }
#line 3676 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 173:
#line 1227 "parse.y" /* yacc.c:1646  */
    { (yyval.attr) = new Attr(ATTR_REDEF); }
#line 3682 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 174:
#line 1229 "parse.y" /* yacc.c:1646  */
    { (yyval.attr) = new Attr(ATTR_ROTATE_INTERVAL, (yyvsp[0].expr)); }
#line 3688 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 175:
#line 1231 "parse.y" /* yacc.c:1646  */
    { (yyval.attr) = new Attr(ATTR_ROTATE_SIZE, (yyvsp[0].expr)); }
#line 3694 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 176:
#line 1233 "parse.y" /* yacc.c:1646  */
    { (yyval.attr) = new Attr(ATTR_ADD_FUNC, (yyvsp[0].expr)); }
#line 3700 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 177:
#line 1235 "parse.y" /* yacc.c:1646  */
    { (yyval.attr) = new Attr(ATTR_DEL_FUNC, (yyvsp[0].expr)); }
#line 3706 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 178:
#line 1237 "parse.y" /* yacc.c:1646  */
    { (yyval.attr) = new Attr(ATTR_EXPIRE_FUNC, (yyvsp[0].expr)); }
#line 3712 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 179:
#line 1239 "parse.y" /* yacc.c:1646  */
    { (yyval.attr) = new Attr(ATTR_EXPIRE_CREATE, (yyvsp[0].expr)); }
#line 3718 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 180:
#line 1241 "parse.y" /* yacc.c:1646  */
    { (yyval.attr) = new Attr(ATTR_EXPIRE_READ, (yyvsp[0].expr)); }
#line 3724 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 181:
#line 1243 "parse.y" /* yacc.c:1646  */
    { (yyval.attr) = new Attr(ATTR_EXPIRE_WRITE, (yyvsp[0].expr)); }
#line 3730 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 182:
#line 1245 "parse.y" /* yacc.c:1646  */
    { (yyval.attr) = new Attr(ATTR_PERSISTENT); }
#line 3736 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 183:
#line 1247 "parse.y" /* yacc.c:1646  */
    { (yyval.attr) = new Attr(ATTR_SYNCHRONIZED); }
#line 3742 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 184:
#line 1249 "parse.y" /* yacc.c:1646  */
    { (yyval.attr) = new Attr(ATTR_ENCRYPT); }
#line 3748 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 185:
#line 1251 "parse.y" /* yacc.c:1646  */
    { (yyval.attr) = new Attr(ATTR_ENCRYPT, (yyvsp[0].expr)); }
#line 3754 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 186:
#line 1253 "parse.y" /* yacc.c:1646  */
    { (yyval.attr) = new Attr(ATTR_RAW_OUTPUT); }
#line 3760 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 187:
#line 1255 "parse.y" /* yacc.c:1646  */
    { (yyval.attr) = new Attr(ATTR_MERGEABLE); }
#line 3766 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 188:
#line 1257 "parse.y" /* yacc.c:1646  */
    { (yyval.attr) = new Attr(ATTR_PRIORITY, (yyvsp[0].expr)); }
#line 3772 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 189:
#line 1259 "parse.y" /* yacc.c:1646  */
    { (yyval.attr) = new Attr(ATTR_TYPE_COLUMN, (yyvsp[0].expr)); }
#line 3778 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 190:
#line 1261 "parse.y" /* yacc.c:1646  */
    { (yyval.attr) = new Attr(ATTR_LOG); }
#line 3784 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 191:
#line 1263 "parse.y" /* yacc.c:1646  */
    { (yyval.attr) = new Attr(ATTR_ERROR_HANDLER); }
#line 3790 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 192:
#line 1268 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-3]), (yylsp[0]));
			(yyval.stmt) = (yyvsp[-1].stmt);
			if ( (yyvsp[-2].b) )
			    brofiler.DecIgnoreDepth();
			}
#line 3801 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 193:
#line 1276 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-3]), (yylsp[-1]));
			(yyval.stmt) = new PrintStmt((yyvsp[-2].list));
			if ( ! (yyvsp[0].b) )
			    brofiler.AddStmt((yyval.stmt));
			}
#line 3812 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 194:
#line 1284 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-3]), (yylsp[-1]));
			(yyval.stmt) = new EventStmt((yyvsp[-2].event_expr));
			if ( ! (yyvsp[0].b) )
			    brofiler.AddStmt((yyval.stmt));
			}
#line 3823 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 195:
#line 1292 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-4]), (yylsp[-1]));
			(yyval.stmt) = new IfStmt((yyvsp[-2].expr), (yyvsp[0].stmt), new NullStmt());
			}
#line 3832 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 196:
#line 1298 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-6]), (yylsp[-3]));
			(yyval.stmt) = new IfStmt((yyvsp[-4].expr), (yyvsp[-2].stmt), (yyvsp[0].stmt));
			}
#line 3841 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 197:
#line 1304 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-4]), (yylsp[-3]));
			(yyval.stmt) = new SwitchStmt((yyvsp[-3].expr), (yyvsp[-1].case_l));
			}
#line 3850 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 198:
#line 1310 "parse.y" /* yacc.c:1646  */
    {
			(yyvsp[-1].stmt)->AsForStmt()->AddBody((yyvsp[0].stmt));
			}
#line 3858 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 199:
#line 1315 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-2]), (yylsp[-1]));
			(yyval.stmt) = new NextStmt;
			if ( ! (yyvsp[0].b) )
			    brofiler.AddStmt((yyval.stmt));
			}
#line 3869 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 200:
#line 1323 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-2]), (yylsp[-1]));
			(yyval.stmt) = new BreakStmt;
			if ( ! (yyvsp[0].b) )
			    brofiler.AddStmt((yyval.stmt));
			}
#line 3880 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 201:
#line 1331 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-2]), (yylsp[-1]));
			(yyval.stmt) = new FallthroughStmt;
			if ( ! (yyvsp[0].b) )
				brofiler.AddStmt((yyval.stmt));
			}
#line 3891 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 202:
#line 1339 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-2]), (yylsp[-1]));
			(yyval.stmt) = new ReturnStmt(0);
			if ( ! (yyvsp[0].b) )
			    brofiler.AddStmt((yyval.stmt));
			}
#line 3902 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 203:
#line 1347 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-3]), (yylsp[-2]));
			(yyval.stmt) = new ReturnStmt((yyvsp[-2].expr));
			if ( ! (yyvsp[0].b) )
			    brofiler.AddStmt((yyval.stmt));
			}
#line 3913 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 204:
#line 1355 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-3]), (yylsp[-1]));
			(yyval.stmt) = new AddStmt((yyvsp[-2].expr));
			if ( ! (yyvsp[0].b) )
			    brofiler.AddStmt((yyval.stmt));
			}
#line 3924 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 205:
#line 1363 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-3]), (yylsp[-1]));
			(yyval.stmt) = new DelStmt((yyvsp[-2].expr));
			if ( ! (yyvsp[0].b) )
			    brofiler.AddStmt((yyval.stmt));
			}
#line 3935 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 206:
#line 1371 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-7]), (yylsp[-1]));
			(yyval.stmt) = add_local((yyvsp[-6].id), (yyvsp[-5].type), (yyvsp[-4].ic), (yyvsp[-3].expr), (yyvsp[-2].attr_l), VAR_REGULAR);
			if ( ! (yyvsp[0].b) )
			    brofiler.AddStmt((yyval.stmt));
			}
#line 3946 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 207:
#line 1379 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-7]), (yylsp[-2]));
			(yyval.stmt) = add_local((yyvsp[-6].id), (yyvsp[-5].type), (yyvsp[-4].ic), (yyvsp[-3].expr), (yyvsp[-2].attr_l), VAR_CONST);
			if ( ! (yyvsp[0].b) )
			    brofiler.AddStmt((yyval.stmt));
			}
#line 3957 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 208:
#line 1387 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-2]), (yylsp[0]));
			(yyval.stmt) = new WhenStmt((yyvsp[-2].expr), (yyvsp[0].stmt), 0, 0, false);
			}
#line 3966 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 209:
#line 1393 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-8]), (yylsp[-2]));
			(yyval.stmt) = new WhenStmt((yyvsp[-8].expr), (yyvsp[-6].stmt), (yyvsp[-1].stmt), (yyvsp[-4].expr), false);
			if ( (yyvsp[-2].b) )
			    brofiler.DecIgnoreDepth();
			}
#line 3977 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 210:
#line 1402 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-2]), (yylsp[0]));
			(yyval.stmt) = new WhenStmt((yyvsp[-2].expr), (yyvsp[0].stmt), 0, 0, true);
			}
#line 3986 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 211:
#line 1408 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-8]), (yylsp[-2]));
			(yyval.stmt) = new WhenStmt((yyvsp[-8].expr), (yyvsp[-6].stmt), (yyvsp[-1].stmt), (yyvsp[-4].expr), true);
			if ( (yyvsp[-2].b) )
			    brofiler.DecIgnoreDepth();
			}
#line 3997 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 212:
#line 1416 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-2]), (yylsp[-1]));
			(yyval.stmt) = new ExprStmt((yyvsp[-2].expr));
			if ( ! (yyvsp[0].b) )
			    brofiler.AddStmt((yyval.stmt));
			}
#line 4008 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 213:
#line 1424 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[0]), (yylsp[0]));
			(yyval.stmt) = new NullStmt;
			}
#line 4017 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 214:
#line 1430 "parse.y" /* yacc.c:1646  */
    { (yyval.stmt) = new NullStmt; }
#line 4023 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 215:
#line 1435 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-1]), (yylsp[0]));
			(yyvsp[-1].stmt)->AsStmtList()->Stmts().append((yyvsp[0].stmt));
			(yyvsp[-1].stmt)->UpdateLocationEndInfo((yylsp[0]));
			}
#line 4033 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 216:
#line 1441 "parse.y" /* yacc.c:1646  */
    { (yyval.stmt) = new StmtList(); }
#line 4039 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 217:
#line 1446 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-3]), (yylsp[0]));
			(yyval.event_expr) = new EventExpr((yyvsp[-3].str), (yyvsp[-1].list));
			}
#line 4048 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 218:
#line 1454 "parse.y" /* yacc.c:1646  */
    { (yyvsp[-1].case_l)->append((yyvsp[0].c_case)); }
#line 4054 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 219:
#line 1456 "parse.y" /* yacc.c:1646  */
    { (yyval.case_l) = new case_list; }
#line 4060 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 220:
#line 1461 "parse.y" /* yacc.c:1646  */
    { (yyval.c_case) = new Case((yyvsp[-2].list), (yyvsp[0].stmt)); }
#line 4066 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 221:
#line 1464 "parse.y" /* yacc.c:1646  */
    { (yyval.c_case) = new Case(0, (yyvsp[0].stmt)); }
#line 4072 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 222:
#line 1469 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[-5]), (yylsp[0]));

			// This rule needs to be separate from the loop
			// body so that we execute these actions - defining
			// the local variable - prior to parsing the body,
			// which might refer to the variable.
			ID* loop_var = lookup_ID((yyvsp[-3].str), current_module.c_str());

			if ( loop_var )
				{
				if ( loop_var->IsGlobal() )
					loop_var->Error("global used in for loop");
				}

			else
				loop_var = install_ID((yyvsp[-3].str), current_module.c_str(),
						      false, false);

			id_list* loop_vars = new id_list;
			loop_vars->append(loop_var);

			(yyval.stmt) = new ForStmt(loop_vars, (yyvsp[-1].expr));
			}
#line 4101 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 223:
#line 1495 "parse.y" /* yacc.c:1646  */
    { (yyval.stmt) = new ForStmt((yyvsp[-4].id_l), (yyvsp[-1].expr)); }
#line 4107 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 224:
#line 1500 "parse.y" /* yacc.c:1646  */
    { (yyvsp[-2].id_l)->append((yyvsp[0].id)); }
#line 4113 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 225:
#line 1502 "parse.y" /* yacc.c:1646  */
    {
			(yyval.id_l) = new id_list;
			(yyval.id_l)->append((yyvsp[0].id));
			}
#line 4122 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 226:
#line 1510 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[0]));

			(yyval.id) = lookup_ID((yyvsp[0].str), current_module.c_str());
			if ( (yyval.id) )
				{
				if ( (yyval.id)->IsGlobal() )
					(yyval.id)->Error("already a global identifier");
				delete [] (yyvsp[0].str);
				}

			else
				{
				(yyval.id) = install_ID((yyvsp[0].str), current_module.c_str(),
						false, is_export);
				}
			}
#line 4144 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 227:
#line 1530 "parse.y" /* yacc.c:1646  */
    { resolving_global_ID = 1; }
#line 4150 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 228:
#line 1531 "parse.y" /* yacc.c:1646  */
    { (yyval.id) = (yyvsp[0].id); }
#line 4156 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 229:
#line 1535 "parse.y" /* yacc.c:1646  */
    { defining_global_ID = 1; }
#line 4162 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 230:
#line 1535 "parse.y" /* yacc.c:1646  */
    { defining_global_ID = 0; }
#line 4168 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 231:
#line 1536 "parse.y" /* yacc.c:1646  */
    { (yyval.id) = (yyvsp[-1].id); }
#line 4174 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 232:
#line 1540 "parse.y" /* yacc.c:1646  */
    { resolving_global_ID = 0; }
#line 4180 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 233:
#line 1541 "parse.y" /* yacc.c:1646  */
    { (yyval.id) = (yyvsp[0].id); }
#line 4186 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 234:
#line 1546 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[0]));

			(yyval.id) = lookup_ID((yyvsp[0].str), current_module.c_str(), false, defining_global_ID);
			if ( (yyval.id) )
				{
				if ( ! (yyval.id)->IsGlobal() )
					(yyval.id)->Error("already a local identifier");

				delete [] (yyvsp[0].str);
				}

			else
				{
				const char* module_name =
					resolving_global_ID ?
						current_module.c_str() : 0;

				(yyval.id) = install_ID((yyvsp[0].str), module_name,
						true, is_export);
				}
			}
#line 4213 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 235:
#line 1573 "parse.y" /* yacc.c:1646  */
    {
			set_location((yylsp[0]));
			(yyval.id) = lookup_ID((yyvsp[0].str), current_module.c_str());

			if ( ! (yyval.id) )
				reporter->Error("identifier not defined: %s", (yyvsp[0].str));

			delete [] (yyvsp[0].str);
			}
#line 4227 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 236:
#line 1586 "parse.y" /* yacc.c:1646  */
    { (yyval.b) = true; }
#line 4233 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 237:
#line 1588 "parse.y" /* yacc.c:1646  */
    { (yyval.b) = false; }
#line 4239 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 238:
#line 1592 "parse.y" /* yacc.c:1646  */
    { (yyval.b) = true; brofiler.IncIgnoreDepth(); }
#line 4245 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;

  case 239:
#line 1594 "parse.y" /* yacc.c:1646  */
    { (yyval.b) = false; }
#line 4251 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
    break;


#line 4255 "/home/benjamin/Bro/bro-2.3.1/build/src/p.cc" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1596 "parse.y" /* yacc.c:1906  */


int yyerror(const char msg[])
	{
	char* msgbuf = new char[strlen(msg) + strlen(last_tok) + 128];

	if ( last_tok[0] == '\n' )
		sprintf(msgbuf, "%s, on previous line", msg);
	else if ( last_tok[0] == '\0' )
		sprintf(msgbuf, "%s, at end of file", msg);
	else
		sprintf(msgbuf, "%s, at or near \"%s\"", msg, last_tok);

	if ( in_debug )
		g_curr_debug_error = copy_string(msg);

	reporter->Error("%s", msgbuf);

	return 0;
	}
