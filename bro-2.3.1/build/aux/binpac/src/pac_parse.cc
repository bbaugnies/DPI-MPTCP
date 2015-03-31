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
#line 83 "pac_parse.yy" /* yacc.c:339  */


#include "pac_action.h"
#include "pac_analyzer.h"
#include "pac_array.h"
#include "pac_attr.h"
#include "pac_case.h"
#include "pac_common.h"
#include "pac_conn.h"
#include "pac_context.h"
#include "pac_cstr.h"
#include "pac_dataptr.h"
#include "pac_dataunit.h"
#include "pac_dbg.h"
#include "pac_decl.h"
#include "pac_embedded.h"
#include "pac_enum.h"
#include "pac_exception.h"
#include "pac_expr.h"
#include "pac_exttype.h"
#include "pac_flow.h"
#include "pac_func.h"
#include "pac_id.h"
#include "pac_inputbuf.h"
#include "pac_let.h"
#include "pac_output.h"
#include "pac_param.h"
#include "pac_paramtype.h"
#include "pac_primitive.h"
#include "pac_record.h"
#include "pac_redef.h"
#include "pac_regex.h"
#include "pac_state.h"
#include "pac_strtype.h"
#include "pac_type.h"
#include "pac_utils.h"
#include "pac_withinput.h"

extern int yyerror(const char msg[]);
extern int yylex();
extern int yychar;
extern char* yytext;
extern int yyleng;
extern void begin_RE();
extern void end_RE();

extern string input_filename;
extern int line_number;
extern Output* header_output;
extern Output* source_output;


#line 119 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:339  */

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
   by #include "pac_parse.h".  */
#ifndef YY_YY_HOME_BENJAMIN_BRO_BRO_2_3_1_BUILD_AUX_BINPAC_SRC_PAC_PARSE_H_INCLUDED
# define YY_YY_HOME_BENJAMIN_BRO_BRO_2_3_1_BUILD_AUX_BINPAC_SRC_PAC_PARSE_H_INCLUDED
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
    TOK_TYPE = 258,
    TOK_RECORD = 259,
    TOK_CASE = 260,
    TOK_ENUM = 261,
    TOK_LET = 262,
    TOK_FUNCTION = 263,
    TOK_REFINE = 264,
    TOK_CASEFUNC = 265,
    TOK_CASETYPE = 266,
    TOK_TYPEATTR = 267,
    TOK_HELPERHEADER = 268,
    TOK_HELPERCODE = 269,
    TOK_RIGHTARROW = 270,
    TOK_DEFAULT = 271,
    TOK_OF = 272,
    TOK_PADDING = 273,
    TOK_TO = 274,
    TOK_ALIGN = 275,
    TOK_WITHINPUT = 276,
    TOK_INT8 = 277,
    TOK_INT16 = 278,
    TOK_INT32 = 279,
    TOK_INT64 = 280,
    TOK_UINT8 = 281,
    TOK_UINT16 = 282,
    TOK_UINT32 = 283,
    TOK_UINT64 = 284,
    TOK_ID = 285,
    TOK_NUMBER = 286,
    TOK_REGEX = 287,
    TOK_STRING = 288,
    TOK_BEGIN_RE = 289,
    TOK_END_RE = 290,
    TOK_ATTR_ALSO = 291,
    TOK_ATTR_BYTEORDER = 292,
    TOK_ATTR_CHECK = 293,
    TOK_ATTR_CHUNKED = 294,
    TOK_ATTR_EXPORTSOURCEDATA = 295,
    TOK_ATTR_IF = 296,
    TOK_ATTR_LENGTH = 297,
    TOK_ATTR_LET = 298,
    TOK_ATTR_LINEBREAKER = 299,
    TOK_ATTR_MULTILINE = 300,
    TOK_ATTR_ONELINE = 301,
    TOK_ATTR_REFCOUNT = 302,
    TOK_ATTR_REQUIRES = 303,
    TOK_ATTR_RESTOFDATA = 304,
    TOK_ATTR_RESTOFFLOW = 305,
    TOK_ATTR_TRANSIENT = 306,
    TOK_ATTR_UNTIL = 307,
    TOK_ANALYZER = 308,
    TOK_CONNECTION = 309,
    TOK_FLOW = 310,
    TOK_STATE = 311,
    TOK_ACTION = 312,
    TOK_WHEN = 313,
    TOK_HELPER = 314,
    TOK_DATAUNIT = 315,
    TOK_FLOWDIR = 316,
    TOK_WITHCONTEXT = 317,
    TOK_LPB_EXTERN = 318,
    TOK_LPB_HEADER = 319,
    TOK_LPB_CODE = 320,
    TOK_LPB_MEMBER = 321,
    TOK_LPB_INIT = 322,
    TOK_LPB_CLEANUP = 323,
    TOK_LPB_EOF = 324,
    TOK_LPB = 325,
    TOK_RPB = 326,
    TOK_EMBEDDED_ATOM = 327,
    TOK_EMBEDDED_STRING = 328,
    TOK_PAC_VAL = 329,
    TOK_PAC_SET = 330,
    TOK_PAC_TYPE = 331,
    TOK_PAC_TYPEOF = 332,
    TOK_PAC_CONST_DEF = 333,
    TOK_END_PAC = 334,
    TOK_EXTERN = 335,
    TOK_PLUSEQ = 336,
    TOK_OR = 337,
    TOK_AND = 338,
    TOK_EQUAL = 339,
    TOK_NEQ = 340,
    TOK_LE = 341,
    TOK_GE = 342,
    TOK_LSHIFT = 343,
    TOK_RSHIFT = 344,
    TOK_SIZEOF = 345,
    TOK_OFFSETOF = 346
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 136 "pac_parse.yy" /* yacc.c:355  */

	ActionParam		*actionparam;
	ActionParamType		*actionparamtype;
	AnalyzerElement		*aelem;
	AnalyzerElementList	*aelemlist;
	Attr			*attr;
	AttrList		*attrlist;
	ConstString		*cstr;
	CaseExpr		*caseexpr;
	CaseExprList		*caseexprlist;
	CaseField		*casefield;
	CaseFieldList 		*casefieldlist;
	ContextField		*contextfield;
	ContextFieldList 	*contextfieldlist;
	Decl			*decl;
	EmbeddedCode		*embedded_code;
	Enum			*enumitem;
	EnumList		*enumlist;
	Expr			*expr;
	ExprList 		*exprlist;
	Field 			*field;
	FieldList 		*fieldlist;
	Function		*function;
	ID			*id;
	InputBuffer		*input;
	LetFieldList		*letfieldlist;
	LetField		*letfield;
	Number			*num;
	PacPrimitive		*pacprimitive;
	Param 			*param;
	ParamList 		*paramlist;
	RecordFieldList 	*recordfieldlist;
	RecordField		*recordfield;
	RegEx			*regex;
	StateVar		*statevar;
	StateVarList		*statevarlist;
	const char		*str;
	Type 			*type;
	int			val;

#line 292 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_HOME_BENJAMIN_BRO_BRO_2_3_1_BUILD_AUX_BINPAC_SRC_PAC_PARSE_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 307 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:358  */

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
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1293

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  116
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  68
/* YYNRULES -- Number of rules.  */
#define YYNRULES  192
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  426

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   346

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   106,     2,     2,     2,   104,    95,     2,
     109,   110,   102,   100,    84,   101,   113,   103,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    86,    83,
      93,    81,    94,    85,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   111,     2,   112,    97,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   114,    96,   115,   105,     2,     2,     2,
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
      75,    76,    77,    78,    79,    80,    82,    87,    88,    89,
      90,    91,    92,    98,    99,   107,   108
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   180,   180,   183,   188,   193,   199,   199,   204,   204,
     208,   213,   213,   217,   217,   222,   222,   226,   226,   230,
     230,   234,   234,   238,   242,   246,   250,   254,   260,   264,
     268,   272,   278,   279,   282,   286,   290,   294,   298,   302,
     308,   314,   320,   325,   331,   337,   342,   347,   353,   358,
     363,   368,   374,   379,   386,   389,   396,   399,   405,   412,
     416,   423,   427,   431,   435,   442,   446,   450,   454,   460,
     466,   471,   478,   482,   488,   493,   498,   505,   509,   515,
     521,   527,   532,   539,   543,   550,   553,   559,   564,   571,
     575,   579,   583,   587,   591,   595,   599,   605,   609,   613,
     617,   621,   625,   629,   633,   637,   641,   645,   649,   653,
     657,   661,   665,   669,   673,   677,   681,   685,   689,   693,
     697,   701,   707,   713,   720,   723,   730,   734,   740,   744,
     750,   755,   762,   766,   772,   778,   786,   789,   796,   800,
     804,   808,   812,   816,   824,   828,   832,   839,   842,   849,
     855,   861,   865,   872,   875,   880,   885,   892,   896,   900,
     904,   911,   914,   920,   925,   931,   936,   943,   951,   958,
     961,   967,   973,   981,   982,   985,   989,   993,   997,  1001,
    1005,  1009,  1013,  1017,  1021,  1025,  1029,  1033,  1037,  1041,
    1045,  1052,  1055
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_TYPE", "TOK_RECORD", "TOK_CASE",
  "TOK_ENUM", "TOK_LET", "TOK_FUNCTION", "TOK_REFINE", "TOK_CASEFUNC",
  "TOK_CASETYPE", "TOK_TYPEATTR", "TOK_HELPERHEADER", "TOK_HELPERCODE",
  "TOK_RIGHTARROW", "TOK_DEFAULT", "TOK_OF", "TOK_PADDING", "TOK_TO",
  "TOK_ALIGN", "TOK_WITHINPUT", "TOK_INT8", "TOK_INT16", "TOK_INT32",
  "TOK_INT64", "TOK_UINT8", "TOK_UINT16", "TOK_UINT32", "TOK_UINT64",
  "TOK_ID", "TOK_NUMBER", "TOK_REGEX", "TOK_STRING", "TOK_BEGIN_RE",
  "TOK_END_RE", "TOK_ATTR_ALSO", "TOK_ATTR_BYTEORDER", "TOK_ATTR_CHECK",
  "TOK_ATTR_CHUNKED", "TOK_ATTR_EXPORTSOURCEDATA", "TOK_ATTR_IF",
  "TOK_ATTR_LENGTH", "TOK_ATTR_LET", "TOK_ATTR_LINEBREAKER",
  "TOK_ATTR_MULTILINE", "TOK_ATTR_ONELINE", "TOK_ATTR_REFCOUNT",
  "TOK_ATTR_REQUIRES", "TOK_ATTR_RESTOFDATA", "TOK_ATTR_RESTOFFLOW",
  "TOK_ATTR_TRANSIENT", "TOK_ATTR_UNTIL", "TOK_ANALYZER", "TOK_CONNECTION",
  "TOK_FLOW", "TOK_STATE", "TOK_ACTION", "TOK_WHEN", "TOK_HELPER",
  "TOK_DATAUNIT", "TOK_FLOWDIR", "TOK_WITHCONTEXT", "TOK_LPB_EXTERN",
  "TOK_LPB_HEADER", "TOK_LPB_CODE", "TOK_LPB_MEMBER", "TOK_LPB_INIT",
  "TOK_LPB_CLEANUP", "TOK_LPB_EOF", "TOK_LPB", "TOK_RPB",
  "TOK_EMBEDDED_ATOM", "TOK_EMBEDDED_STRING", "TOK_PAC_VAL", "TOK_PAC_SET",
  "TOK_PAC_TYPE", "TOK_PAC_TYPEOF", "TOK_PAC_CONST_DEF", "TOK_END_PAC",
  "TOK_EXTERN", "'='", "TOK_PLUSEQ", "';'", "','", "'?'", "':'", "TOK_OR",
  "TOK_AND", "TOK_EQUAL", "TOK_NEQ", "TOK_LE", "TOK_GE", "'<'", "'>'",
  "'&'", "'|'", "'^'", "TOK_LSHIFT", "TOK_RSHIFT", "'+'", "'-'", "'*'",
  "'/'", "'%'", "'~'", "'!'", "TOK_SIZEOF", "TOK_OFFSETOF", "'('", "')'",
  "'['", "']'", "'.'", "'{'", "'}'", "$accept", "decls", "decl",
  "decl_with_attr", "$@1", "$@2", "$@3", "$@4", "$@5", "$@6", "$@7", "$@8",
  "decl_without_attr", "optsemicolon", "tok_id", "analyzercontext",
  "contextfieldlist", "contextfield", "funcproto", "function", "optparams",
  "paramlist", "param", "optinit", "opttype", "type", "type3", "type2",
  "type1", "recordfieldlist", "recordfield", "recordfield0", "padding",
  "optfieldid", "caseindex", "casefieldlist", "casefield", "casefield0",
  "optexprlist", "exprlist", "expr", "cstr", "regex", "caseexprlist",
  "caseexpr", "enumlist", "enumlist1", "enumitem", "conn", "flow",
  "sahlist", "sah", "statevarlist", "statevar", "actionparam",
  "actionparamtype", "embedded_code", "embedded_pac_primitive", "optargs",
  "letfieldlist", "letfield", "withinputfield", "input", "optattrs",
  "attrlist", "optcomma", "attr", "optlinebreaker", YY_NULLPTR
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
     335,    61,   336,    59,    44,    63,    58,   337,   338,   339,
     340,   341,   342,    60,    62,    38,   124,    94,   343,   344,
      43,    45,    42,    47,    37,   126,    33,   345,   346,    40,
      41,    91,    93,    46,   123,   125
};
# endif

#define YYPACT_NINF -283

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-283)))

#define YYTABLE_NINF -171

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-171)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -283,   705,  -283,   175,   175,   175,   175,   164,   175,   175,
     175,  -283,  -283,  -283,    12,   -65,  1209,  -283,  -283,  -283,
    -283,  -283,  -283,  -283,  -283,  -283,  -283,   -90,    -7,  -283,
     175,   175,   175,   175,   175,   175,   -27,  -283,  -283,   413,
     529,   578,   175,  -283,  -283,   -44,   556,  -283,  -283,   556,
     -35,   -57,   -23,   -48,   -47,  -283,   -36,  -283,  -283,  -283,
     556,  -283,   639,  -283,   -32,   -31,    13,   175,  -283,   556,
    -283,    19,    29,    30,    34,    38,    43,    64,   -32,   -32,
     -32,  -283,  -283,  -283,   556,   556,   556,   175,  -283,  -283,
    -283,  -283,   556,   556,  -283,  -283,    47,   556,   556,   556,
      21,    22,   556,  -283,  1029,  -283,  -283,  1029,   556,  -283,
     556,   556,   556,  -283,   556,  1029,  -283,  1209,   175,    52,
     175,   744,    53,    49,   -58,  -283,   610,  1029,    25,    27,
    1209,    57,    63,    65,    66,    68,    70,    73,   724,   751,
     778,    59,  -283,  1029,   527,   132,   157,   -73,   -73,   175,
     175,   832,   556,   556,   556,   556,   556,   556,   556,   556,
     556,   556,   556,   556,   556,   556,   556,   556,   556,   556,
     556,   556,   556,   175,  1029,    14,  1029,   859,   886,    79,
     108,  1029,  -283,   -51,   268,   112,    82,   115,  -283,   556,
      91,  -283,    90,  -283,  -283,   556,  -283,   744,   175,   116,
    -283,  -283,  -283,   671,  -283,  -283,  -283,  -283,  -283,  -283,
    -283,  -283,  -283,  -283,  -283,   556,    92,  -283,    93,    97,
    -283,   915,  1082,  1107,  1132,  1132,  1132,  1132,  1132,  1132,
     346,   346,   346,   300,   300,   157,   157,   -73,   -73,   -73,
      98,   942,  -283,  -283,   126,   130,   131,  -283,  -283,  -283,
     556,  -283,   102,  -283,  -283,  -283,   556,  -283,   175,   203,
    1029,   556,   487,  1029,  -283,  -283,   744,   321,   365,   165,
     182,   467,    83,   120,   511,   121,   122,   511,   805,  -283,
    -283,  -283,   556,  -283,  -283,   744,    53,  -283,  -283,  1029,
    -283,  1029,  -283,   109,   -50,  -283,   971,  -283,   212,  -283,
       1,   158,   225,  -283,   161,  1209,    26,   175,   139,   175,
     176,   181,  -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,
    -283,   159,   173,  -283,  -283,  -283,  -283,   407,  1056,    -9,
    1209,    17,  -283,  -283,  -283,   556,   556,  -283,   175,  -283,
    -283,   175,  -283,  -283,   206,   175,   175,   717,  1191,  1199,
    1207,   753,  -283,  -283,   556,  -283,  -283,  -283,   188,   184,
    1209,  -283,   712,   448,  1029,  1029,   189,   191,    89,   170,
     174,   174,  -283,  -283,  -283,  -283,  -283,  1029,  1209,  -283,
    -283,  -283,    -6,  -283,  -283,   744,   744,  -283,   198,   202,
     175,   556,   224,   204,  -283,   556,   556,   556,  -283,  -283,
     753,  -283,   199,   183,   185,   187,  -283,  1029,  1029,  1000,
    -283,   175,   221,  -283,   556,  -283,   186,  -283,  -283,   190,
     175,  1215,   211,  -283,  -283,  -283
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,     0,     0,     0,     0,     0,     0,
       0,   153,   153,   153,     0,    32,   169,     5,    39,    38,
      34,    36,    35,    37,     6,    11,     8,     0,     0,    10,
       0,     0,     0,     0,     0,     0,    17,    19,    21,     0,
       0,     0,     0,    33,     3,     0,     0,   177,   178,     0,
       0,     0,     0,     0,   191,   185,     0,   187,   188,   189,
       0,     4,   173,   172,    49,     0,    56,    52,   153,     0,
      47,     0,     0,     0,     0,     0,     0,     0,    49,    49,
      49,    30,   154,   155,     0,     0,     0,     0,   156,    28,
      29,    13,     0,     0,    90,   122,     0,     0,     0,     0,
       0,     0,     0,    89,   176,   120,   121,   179,     0,   165,
       0,     0,     0,   184,    85,   190,   174,     0,    52,     0,
       0,     0,    54,     0,     0,    51,     0,    45,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    14,   175,     0,     0,    97,   103,   115,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    85,     0,     0,   180,     0,   182,     0,     0,     0,
      86,    88,   171,     0,     0,   132,     0,   128,   131,     0,
      65,    57,    61,    68,    67,     0,     9,     0,     0,     0,
      46,   124,    81,   173,   136,   136,   136,    42,    16,   136,
     136,   136,   157,   158,   159,     0,     0,   123,     0,     0,
      95,     0,   117,   116,   109,   110,   112,   111,   114,   113,
     104,   105,   106,   107,   108,    98,    99,   100,   101,   102,
       0,     0,    92,   181,    56,     0,     0,   183,   192,   186,
       0,    48,     0,     7,    58,    59,     0,    12,   129,     0,
      79,     0,     0,    55,    53,    50,     0,     0,     0,     0,
       0,     0,     0,     0,   134,     0,     0,   135,     0,   124,
      93,    94,     0,    96,    91,     0,    54,   163,   164,    87,
      70,   133,   130,     0,     0,    63,     0,    44,     0,    24,
       0,     0,     0,    23,     0,   169,     0,     0,     0,     0,
       0,     0,   153,   153,   153,   153,    25,   137,    26,    27,
      40,     0,     0,    18,    20,    22,   160,     0,   118,    61,
     169,     0,    81,    66,    62,     0,     0,   125,     0,    80,
      82,     0,   144,   147,     0,     0,     0,     0,     0,     0,
       0,     0,    41,   119,     0,   166,    78,    60,     0,     0,
     169,    73,     0,     0,   127,   126,     0,     0,     0,     0,
     161,   161,   138,   139,   140,   141,    43,   168,   169,    77,
      69,    71,     0,    72,    64,     0,     0,   145,     0,     0,
       0,    85,     0,     0,   167,     0,     0,     0,    84,    83,
       0,   148,     0,     0,     0,     0,   142,    75,    76,     0,
     149,     0,     0,   162,    85,    74,   151,   150,   153,     0,
       0,     0,     0,   152,   146,   143
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,
    -283,  -283,  -283,  -283,    -3,  -283,  -283,  -283,  -283,     0,
     -25,   196,   107,    23,    74,  -283,  -283,  -176,  -276,  -283,
    -283,  -283,  -283,  -283,  -283,   -24,  -283,  -283,  -167,  -218,
      -4,   -97,   -70,    40,  -283,  -283,  -283,    62,   117,  -283,
     -83,  -283,  -283,  -283,  -283,  -283,    -2,  -283,   -54,  -283,
    -283,  -283,  -283,  -282,   195,  -283,   216,  -283
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    15,    16,    64,    66,    65,   142,    77,    78,
      79,    80,    17,    44,   103,   208,   272,   322,    28,    29,
     119,   124,   125,   196,   122,   253,   254,   191,   192,   331,
     359,   360,   361,   362,   259,   268,   304,   305,   179,   180,
     181,   105,   106,   267,   301,   186,   187,   188,   273,   276,
     274,   317,   368,   389,   403,   417,    39,    88,   392,   175,
     245,   246,   378,    61,    62,   117,    63,   113
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      24,    25,    26,    27,   240,    36,    37,    38,   255,   329,
      40,    41,   354,   395,   396,    42,   336,    18,    43,    67,
      18,   264,    19,   340,   193,    19,   198,    71,    72,    73,
      74,    75,    76,   198,   250,   -15,   171,    92,   172,    91,
     173,   341,   104,   294,    20,   107,   108,    20,   355,   300,
     306,   194,   199,   135,   136,   137,   115,   109,   110,   251,
     333,   111,   112,    68,   123,   127,   126,    21,    22,    23,
      21,    22,    23,   114,    69,   376,    70,   118,   381,   145,
     138,   139,   140,   120,   141,   250,    18,   193,   143,   144,
     297,    19,    18,   146,   147,   148,   394,    19,   151,   121,
     193,   128,   262,   356,   174,   397,   176,   177,   178,   300,
     250,   129,   130,    20,   194,   123,   131,   185,   190,    20,
     132,   269,   270,   271,   410,   133,   134,   194,   277,   243,
     149,   150,   357,   184,   195,   197,    21,    22,    23,   201,
     215,   202,    21,    22,    23,   306,   218,   219,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   217,   241,   193,
     242,   204,   244,   307,    30,    31,    32,   205,    18,   206,
     207,   190,   209,    19,   210,   260,   383,   211,   193,   249,
     307,   263,   250,   256,   190,   123,   194,   257,   320,   258,
     261,   262,   266,   280,   387,    20,   279,   281,   283,   398,
     399,   278,   285,   287,   288,   194,   290,    33,    34,    35,
     293,   308,   309,   332,   404,   310,   311,   335,    21,    22,
      23,   312,   313,   314,   315,   323,   324,   325,   308,   309,
     338,   337,   310,   311,   339,   351,   289,   419,   312,   313,
     314,   315,   291,   343,   193,   185,   352,   345,   296,   168,
     169,   170,   346,   190,   369,   193,   171,   380,   172,   321,
     173,    18,   252,   189,   379,   385,    19,   386,   328,   390,
     316,   194,   190,   391,   400,   401,   405,   406,   193,   193,
     411,   418,   194,   412,   425,   413,   414,   318,    20,   420,
     422,    95,    96,   193,    27,   265,   344,   342,   363,   330,
     347,   348,   349,   350,   183,   194,   194,   393,   286,   327,
     292,    21,    22,    23,    18,   203,    93,   275,   358,    19,
     194,   364,   365,   182,     0,   366,     0,   298,   367,     0,
       0,     0,   370,   371,     0,     0,     0,     0,   190,     0,
     377,    20,    94,     0,    95,    96,     0,     0,     0,   190,
       0,     0,     0,     0,     0,   388,     0,     0,    18,     0,
      93,     0,     0,    19,    21,    22,    23,     0,     0,     0,
       0,   302,   190,   190,     0,     0,     0,   402,     0,     0,
       0,   407,   408,   409,     0,    20,    94,   190,    95,    96,
     166,   167,   168,   169,   170,     0,     0,     0,   416,   171,
      18,   172,    93,   173,     0,    19,   421,   423,    21,    22,
      23,     0,    97,   298,     0,     0,    98,    99,   100,   101,
     102,     0,     0,     0,     0,     0,   299,    20,    94,     0,
      95,    96,     0,     0,   164,   165,   166,   167,   168,   169,
     170,    18,     0,    93,     0,   171,    19,   172,     0,   173,
      21,    22,    23,     0,   302,     0,    97,     0,     0,     0,
      98,    99,   100,   101,   102,   307,     0,     0,    20,    94,
     303,    95,    96,     0,    81,    82,    83,    84,    85,    86,
      18,    87,    93,     0,     0,    19,     0,     0,     0,     0,
       0,    21,    22,    23,     0,     0,     0,     0,    97,     0,
       0,     0,    98,    99,   100,   101,   102,    20,    94,   307,
      95,    96,   353,   308,   309,     0,     0,   310,   311,     0,
       0,     0,     0,   312,   313,   314,   315,     0,     0,     0,
      21,    22,    23,     0,   216,     0,     0,     0,     0,    97,
       0,     0,     0,    98,    99,   100,   101,   102,     0,    18,
       0,    93,     0,   384,    19,     0,     0,   308,   309,     0,
       0,   310,   311,     0,     0,     0,     0,   312,   313,   314,
     315,     0,   319,     0,     0,     0,    20,    94,    97,    95,
      96,     0,    98,    99,   100,   101,   102,     0,     0,   295,
      89,    82,    83,    84,    85,    86,     0,    87,     0,    21,
      22,    23,   152,     0,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,     0,     0,     0,     0,   171,     0,   172,  -170,
     173,     0,  -170,     0,     0,  -170,  -170,  -170,  -170,    90,
      82,    83,    84,    85,    86,     0,    87,    97,     0,     0,
       0,    98,    99,   100,   101,   102,     0,     0,     0,     0,
       0,   -31,     0,     0,   -31,     0,     0,   -31,   -31,   -31,
     -31,   200,    82,    83,    84,    85,    86,     0,    87,     0,
       0,     0,  -170,  -170,  -170,     0,     0,     0,     0,     0,
       0,     0,  -170,  -170,  -170,     2,     0,     0,     3,     0,
       0,     4,     5,     6,     7,    18,     0,   189,     0,  -170,
      19,     0,  -170,   116,   -31,   -31,   -31,     0,     0,     0,
     382,     0,     0,     0,   -31,   -31,   -31,     0,     0,     0,
       0,     0,    20,     0,     0,    95,    96,    18,     0,   189,
       0,   -31,    19,     0,   -31,   116,    18,     0,     8,     9,
      10,    19,     0,     0,     0,    21,    22,    23,    11,    12,
      13,     0,     0,     0,    20,     0,     0,    95,    96,     0,
       0,     0,     0,    20,     0,    14,    95,    96,   372,    82,
      83,    84,    85,    86,     0,    87,     0,    21,    22,    23,
       0,     0,     0,   212,     0,     0,    21,    22,    23,   152,
       0,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,     0,
     213,     0,     0,   171,     0,   172,   152,   173,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,     0,   214,     0,     0,
     171,     0,   172,   152,   173,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,     0,   326,     0,     0,   171,     0,   172,
     152,   173,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
       0,     0,     0,     0,   171,     0,   172,   152,   173,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,     0,     0,     0,
       0,   171,   220,   172,   152,   173,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,     0,     0,     0,     0,   171,   247,
     172,   152,   173,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,     0,     0,     0,     0,   171,   248,   172,     0,   173,
     152,   282,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
       0,     0,     0,     0,   171,     0,   172,   152,   173,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,     0,     0,     0,
       0,   171,     0,   172,   284,   173,   152,     0,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,     0,     0,     0,     0,
     171,     0,   172,   334,   173,   152,     0,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,     0,     0,     0,     0,   171,
       0,   172,   415,   173,   152,     0,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,     0,     0,     0,     0,   171,     0,
     172,     0,   173,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,     0,     0,     0,     0,   171,     0,   172,     0,   173,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,     0,     0,     0,
       0,   171,     0,   172,     0,   173,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,     0,     0,     0,     0,   171,     0,   172,     0,
     173,  -171,  -171,  -171,  -171,  -171,  -171,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,     0,     0,     0,
       0,   171,     0,   172,     0,   173,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,   373,    82,    83,    84,    85,    86,     0,    87,
     374,    82,    83,    84,    85,    86,     0,    87,   375,    82,
      83,    84,    85,    86,     0,    87,   424,    82,    83,    84,
      85,    86,     0,    87
};

static const yytype_int16 yycheck[] =
{
       3,     4,     5,     6,   171,     8,     9,    10,   184,   285,
      12,    13,    21,    19,    20,     3,    15,     3,    83,   109,
       3,   197,     8,   305,   121,     8,    84,    30,    31,    32,
      33,    34,    35,    84,    84,    62,   109,    81,   111,    42,
     113,    15,    46,   261,    30,    49,    81,    30,   330,   267,
     268,   121,   110,    78,    79,    80,    60,   114,    81,   110,
     110,   109,   109,    70,    67,    69,    68,    53,    54,    55,
      53,    54,    55,   109,    81,   351,    83,   109,   360,    32,
      84,    85,    86,   114,    87,    84,     3,   184,    92,    93,
     266,     8,     3,    97,    98,    99,   378,     8,   102,    86,
     197,    82,   111,    86,   108,   111,   110,   111,   112,   327,
      84,    82,    82,    30,   184,   118,    82,   120,   121,    30,
      82,   204,   205,   206,   400,    82,    62,   197,   211,   115,
     109,   109,   115,    81,    81,    86,    53,    54,    55,   114,
      81,   114,    53,    54,    55,   363,   149,   150,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,    35,   172,   266,
     173,   114,   175,     8,    10,    11,    12,   114,     3,   114,
     114,   184,   114,     8,   114,   189,   362,   114,   285,   110,
       8,   195,    84,    81,   197,   198,   266,   115,   115,    84,
     109,   111,    86,   110,   115,    30,   114,   110,   110,   385,
     386,   215,    86,    83,    83,   285,   114,    53,    54,    55,
      17,    56,    57,   114,   391,    60,    61,    15,    53,    54,
      55,    66,    67,    68,    69,   115,   115,   115,    56,    57,
      15,    83,    60,    61,    83,    86,   250,   414,    66,    67,
      68,    69,   256,   114,   351,   258,    83,    81,   262,   102,
     103,   104,    81,   266,    58,   362,   109,    83,   111,   272,
     113,     3,     4,     5,    86,    86,     8,    86,   282,   109,
     115,   351,   285,   109,    86,    83,    62,    83,   385,   386,
      91,    70,   362,   110,    83,   110,   109,   115,    30,   113,
     110,    33,    34,   400,   307,   198,   309,   307,   332,   286,
     312,   313,   314,   315,   118,   385,   386,   371,   244,   279,
     258,    53,    54,    55,     3,   130,     5,   210,   331,     8,
     400,   335,   336,   117,    -1,   338,    -1,    16,   341,    -1,
      -1,    -1,   345,   346,    -1,    -1,    -1,    -1,   351,    -1,
     354,    30,    31,    -1,    33,    34,    -1,    -1,    -1,   362,
      -1,    -1,    -1,    -1,    -1,   368,    -1,    -1,     3,    -1,
       5,    -1,    -1,     8,    53,    54,    55,    -1,    -1,    -1,
      -1,    16,   385,   386,    -1,    -1,    -1,   390,    -1,    -1,
      -1,   395,   396,   397,    -1,    30,    31,   400,    33,    34,
     100,   101,   102,   103,   104,    -1,    -1,    -1,   411,   109,
       3,   111,     5,   113,    -1,     8,   418,   420,    53,    54,
      55,    -1,   101,    16,    -1,    -1,   105,   106,   107,   108,
     109,    -1,    -1,    -1,    -1,    -1,   115,    30,    31,    -1,
      33,    34,    -1,    -1,    98,    99,   100,   101,   102,   103,
     104,     3,    -1,     5,    -1,   109,     8,   111,    -1,   113,
      53,    54,    55,    -1,    16,    -1,   101,    -1,    -1,    -1,
     105,   106,   107,   108,   109,     8,    -1,    -1,    30,    31,
     115,    33,    34,    -1,    71,    72,    73,    74,    75,    76,
       3,    78,     5,    -1,    -1,     8,    -1,    -1,    -1,    -1,
      -1,    53,    54,    55,    -1,    -1,    -1,    -1,   101,    -1,
      -1,    -1,   105,   106,   107,   108,   109,    30,    31,     8,
      33,    34,   115,    56,    57,    -1,    -1,    60,    61,    -1,
      -1,    -1,    -1,    66,    67,    68,    69,    -1,    -1,    -1,
      53,    54,    55,    -1,    17,    -1,    -1,    -1,    -1,   101,
      -1,    -1,    -1,   105,   106,   107,   108,   109,    -1,     3,
      -1,     5,    -1,   115,     8,    -1,    -1,    56,    57,    -1,
      -1,    60,    61,    -1,    -1,    -1,    -1,    66,    67,    68,
      69,    -1,   115,    -1,    -1,    -1,    30,    31,   101,    33,
      34,    -1,   105,   106,   107,   108,   109,    -1,    -1,   112,
      71,    72,    73,    74,    75,    76,    -1,    78,    -1,    53,
      54,    55,    85,    -1,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,    -1,    -1,    -1,    -1,   109,    -1,   111,     0,
     113,    -1,     3,    -1,    -1,     6,     7,     8,     9,    71,
      72,    73,    74,    75,    76,    -1,    78,   101,    -1,    -1,
      -1,   105,   106,   107,   108,   109,    -1,    -1,    -1,    -1,
      -1,     0,    -1,    -1,     3,    -1,    -1,     6,     7,     8,
       9,    71,    72,    73,    74,    75,    76,    -1,    78,    -1,
      -1,    -1,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    64,    65,     0,    -1,    -1,     3,    -1,
      -1,     6,     7,     8,     9,     3,    -1,     5,    -1,    80,
       8,    -1,    83,    84,    53,    54,    55,    -1,    -1,    -1,
      18,    -1,    -1,    -1,    63,    64,    65,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    33,    34,     3,    -1,     5,
      -1,    80,     8,    -1,    83,    84,     3,    -1,    53,    54,
      55,     8,    -1,    -1,    -1,    53,    54,    55,    63,    64,
      65,    -1,    -1,    -1,    30,    -1,    -1,    33,    34,    -1,
      -1,    -1,    -1,    30,    -1,    80,    33,    34,    71,    72,
      73,    74,    75,    76,    -1,    78,    -1,    53,    54,    55,
      -1,    -1,    -1,    79,    -1,    -1,    53,    54,    55,    85,
      -1,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,    -1,
      79,    -1,    -1,   109,    -1,   111,    85,   113,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,    -1,    79,    -1,    -1,
     109,    -1,   111,    85,   113,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,    -1,    79,    -1,    -1,   109,    -1,   111,
      85,   113,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
      -1,    -1,    -1,    -1,   109,    -1,   111,    85,   113,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,    -1,    -1,    -1,
      -1,   109,   110,   111,    85,   113,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,    -1,    -1,    -1,    -1,   109,   110,
     111,    85,   113,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,    -1,    -1,    -1,    -1,   109,   110,   111,    -1,   113,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
      -1,    -1,    -1,    -1,   109,    -1,   111,    85,   113,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,    -1,    -1,    -1,
      -1,   109,    -1,   111,   112,   113,    85,    -1,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,    -1,    -1,    -1,    -1,
     109,    -1,   111,   112,   113,    85,    -1,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,    -1,    -1,    -1,    -1,   109,
      -1,   111,   112,   113,    85,    -1,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,    -1,    -1,    -1,    -1,   109,    -1,
     111,    -1,   113,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,    -1,    -1,    -1,    -1,   109,    -1,   111,    -1,   113,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,    -1,    -1,    -1,
      -1,   109,    -1,   111,    -1,   113,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,    -1,    -1,    -1,    -1,   109,    -1,   111,    -1,
     113,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,    -1,    -1,    -1,
      -1,   109,    -1,   111,    -1,   113,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    71,    72,    73,    74,    75,    76,    -1,    78,
      71,    72,    73,    74,    75,    76,    -1,    78,    71,    72,
      73,    74,    75,    76,    -1,    78,    71,    72,    73,    74,
      75,    76,    -1,    78
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   117,     0,     3,     6,     7,     8,     9,    53,    54,
      55,    63,    64,    65,    80,   118,   119,   128,     3,     8,
      30,    53,    54,    55,   130,   130,   130,   130,   134,   135,
      10,    11,    12,    53,    54,    55,   130,   130,   130,   172,
     172,   172,     3,    83,   129,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,   179,   180,   182,   120,   122,   121,   109,    70,    81,
      83,   130,   130,   130,   130,   130,   130,   124,   125,   126,
     127,    71,    72,    73,    74,    75,    76,    78,   173,    71,
      71,   130,    81,     5,    31,    33,    34,   101,   105,   106,
     107,   108,   109,   130,   156,   157,   158,   156,    81,   114,
      81,   109,   109,   183,   109,   156,    84,   181,   109,   136,
     114,    86,   140,   130,   137,   138,   172,   156,    82,    82,
      82,    82,    82,    82,    62,   136,   136,   136,   156,   156,
     156,   130,   123,   156,   156,    32,   156,   156,   156,   109,
     109,   156,    85,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   109,   111,   113,   156,   175,   156,   156,   156,   154,
     155,   156,   182,   137,    81,   130,   161,   162,   163,     5,
     130,   143,   144,   157,   158,    81,   139,    86,    84,   110,
      71,   114,   114,   180,   114,   114,   114,   114,   131,   114,
     114,   114,    79,    79,    79,    81,    17,    35,   130,   130,
     110,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     154,   156,   130,   115,   130,   176,   177,   110,   110,   110,
      84,   110,     4,   141,   142,   143,    81,   115,    84,   150,
     156,   109,   111,   156,   143,   138,    86,   159,   151,   166,
     166,   166,   132,   164,   166,   164,   165,   166,   156,   114,
     110,   110,    86,   110,   112,    86,   140,    83,    83,   156,
     114,   156,   163,    17,   155,   112,   156,   143,    16,   115,
     155,   160,    16,   115,   152,   153,   155,     8,    56,    57,
      60,    61,    66,    67,    68,    69,   115,   167,   115,   115,
     115,   130,   133,   115,   115,   115,    79,   159,   156,   144,
     139,   145,   114,   110,   112,    15,    15,    83,    15,    83,
     179,    15,   135,   114,   130,    81,    81,   172,   172,   172,
     172,    86,    83,   115,    21,   179,    86,   115,   130,   146,
     147,   148,   149,   151,   156,   156,   130,   130,   168,    58,
     130,   130,    71,    71,    71,    71,   144,   156,   178,    86,
      83,   179,    18,   143,   115,    86,    86,   115,   130,   169,
     109,   109,   174,   174,   179,    19,    20,   111,   143,   143,
      86,    83,   130,   170,   154,    62,    83,   156,   156,   156,
     144,    91,   110,   110,   109,   112,   130,   171,    70,   154,
     113,   172,   110,   130,    71,    83
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   116,   117,   117,   118,   118,   120,   119,   121,   119,
     119,   122,   119,   123,   119,   124,   119,   125,   119,   126,
     119,   127,   119,   119,   119,   119,   119,   119,   128,   128,
     128,   128,   129,   129,   130,   130,   130,   130,   130,   130,
     131,   132,   132,   133,   134,   135,   135,   135,   136,   136,
     137,   137,   137,   138,   139,   139,   140,   140,   141,   142,
     142,   143,   143,   143,   143,   144,   144,   144,   144,   145,
     145,   146,   147,   147,   148,   148,   148,   149,   149,   150,
     151,   151,   152,   153,   153,   154,   154,   155,   155,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   157,   158,   159,   159,   160,   160,   161,   161,
     162,   162,   163,   163,   164,   165,   166,   166,   167,   167,
     167,   167,   167,   167,   167,   167,   167,   168,   168,   169,
     170,   171,   171,   172,   172,   172,   172,   173,   173,   173,
     173,   174,   174,   175,   175,   175,   176,   177,   178,   179,
     179,   180,   180,   181,   181,   182,   182,   182,   182,   182,
     182,   182,   182,   182,   182,   182,   182,   182,   182,   182,
     182,   183,   183
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     3,     2,     1,     0,     6,     0,     5,
       2,     0,     6,     0,     4,     0,     5,     0,     7,     0,
       7,     0,     7,     7,     7,     7,     7,     7,     3,     3,
       3,     5,     0,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     0,     3,     6,     3,     4,     2,     3,     0,
       3,     1,     0,     3,     0,     2,     0,     2,     1,     1,
       4,     1,     4,     3,     6,     1,     4,     1,     1,     3,
       0,     2,     2,     1,     5,     4,     4,     2,     1,     1,
       3,     0,     2,     5,     5,     0,     1,     3,     1,     1,
       1,     4,     3,     4,     4,     3,     4,     2,     3,     3,
       3,     3,     3,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     3,     3,     5,     6,
       1,     1,     1,     3,     0,     3,     3,     3,     1,     2,
       3,     1,     1,     3,     1,     1,     0,     2,     3,     3,
       3,     3,     5,     9,     2,     4,     9,     0,     3,     3,
       3,     1,     3,     0,     2,     2,     2,     3,     3,     3,
       5,     0,     3,     3,     3,     0,     4,     6,     1,     0,
       1,     3,     1,     0,     1,     3,     2,     1,     1,     2,
       3,     4,     3,     4,     2,     1,     4,     1,     1,     1,
       2,     0,     3
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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
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

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

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
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 180 "pac_parse.yy" /* yacc.c:1646  */
    {
				// Put initialization here
				}
#line 1881 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 3:
#line 184 "pac_parse.yy" /* yacc.c:1646  */
    {
				}
#line 1888 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 4:
#line 189 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.decl) = (yyvsp[-1].decl);
				(yyvsp[-1].decl)->AddAttrs((yyvsp[0].attrlist));
				}
#line 1897 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 5:
#line 194 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.decl) = (yyvsp[0].decl);
				}
#line 1905 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 6:
#line 199 "pac_parse.yy" /* yacc.c:1646  */
    { current_decl_id = (yyvsp[0].id); }
#line 1911 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 7:
#line 200 "pac_parse.yy" /* yacc.c:1646  */
    {
				TypeDecl* decl = new TypeDecl((yyvsp[-4].id), (yyvsp[-2].paramlist), (yyvsp[0].type));
				(yyval.decl) = decl;
				}
#line 1920 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 8:
#line 204 "pac_parse.yy" /* yacc.c:1646  */
    { current_decl_id = (yyvsp[0].id); }
#line 1926 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 9:
#line 205 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.decl) = new LetDecl((yyvsp[-3].id), (yyvsp[-1].type), (yyvsp[0].expr));
				}
#line 1934 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 10:
#line 209 "pac_parse.yy" /* yacc.c:1646  */
    {
				current_decl_id = (yyvsp[0].function)->id();
				(yyval.decl) = new FuncDecl((yyvsp[0].function));
				}
#line 1943 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 11:
#line 213 "pac_parse.yy" /* yacc.c:1646  */
    { current_decl_id = (yyvsp[0].id); }
#line 1949 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 12:
#line 214 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.decl) = new EnumDecl((yyvsp[-4].id), (yyvsp[-1].enumlist));
				}
#line 1957 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 13:
#line 217 "pac_parse.yy" /* yacc.c:1646  */
    { current_decl_id = (yyvsp[0].id); }
#line 1963 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 14:
#line 218 "pac_parse.yy" /* yacc.c:1646  */
    {
				Type *extern_type = new ExternType((yyvsp[-1].id), ExternType::PLAIN);
				(yyval.decl) = new TypeDecl((yyvsp[-1].id), 0, extern_type);
				}
#line 1972 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 15:
#line 222 "pac_parse.yy" /* yacc.c:1646  */
    { current_decl_id = (yyvsp[0].id); }
#line 1978 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 16:
#line 223 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.decl) = new AnalyzerContextDecl((yyvsp[-3].id), (yyvsp[0].contextfieldlist));
				}
#line 1986 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 17:
#line 226 "pac_parse.yy" /* yacc.c:1646  */
    { current_decl_id = (yyvsp[0].id); }
#line 1992 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 18:
#line 227 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.decl) = new ConnDecl((yyvsp[-5].id), (yyvsp[-3].paramlist), (yyvsp[-1].aelemlist));
				}
#line 2000 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 19:
#line 230 "pac_parse.yy" /* yacc.c:1646  */
    { current_decl_id = (yyvsp[0].id); }
#line 2006 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 20:
#line 231 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.decl) = new ConnDecl((yyvsp[-5].id), (yyvsp[-3].paramlist), (yyvsp[-1].aelemlist));
				}
#line 2014 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 21:
#line 234 "pac_parse.yy" /* yacc.c:1646  */
    { current_decl_id = (yyvsp[0].id); }
#line 2020 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 22:
#line 235 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.decl) = new FlowDecl((yyvsp[-5].id), (yyvsp[-3].paramlist), (yyvsp[-1].aelemlist));
				}
#line 2028 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 23:
#line 239 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.decl) = ProcessCaseTypeRedef((yyvsp[-4].id), (yyvsp[-1].casefieldlist));
				}
#line 2036 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 24:
#line 243 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.decl) = ProcessCaseExprRedef((yyvsp[-4].id), (yyvsp[-1].caseexprlist));
				}
#line 2044 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 25:
#line 247 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.decl) = ProcessAnalyzerRedef((yyvsp[-4].id), Decl::CONN, (yyvsp[-1].aelemlist));
				}
#line 2052 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 26:
#line 251 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.decl) = ProcessAnalyzerRedef((yyvsp[-4].id), Decl::CONN, (yyvsp[-1].aelemlist));
				}
#line 2060 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 27:
#line 255 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.decl) = ProcessAnalyzerRedef((yyvsp[-4].id), Decl::FLOW, (yyvsp[-1].aelemlist));
				}
#line 2068 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 28:
#line 261 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.decl) = new HelperDecl(HelperDecl::HEADER, 0, (yyvsp[-1].embedded_code));
				}
#line 2076 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 29:
#line 265 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.decl) = new HelperDecl(HelperDecl::CODE, 0, (yyvsp[-1].embedded_code));
				}
#line 2084 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 30:
#line 269 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.decl) = new HelperDecl(HelperDecl::EXTERN, 0, (yyvsp[-1].embedded_code));
				}
#line 2092 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 31:
#line 273 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.decl) = ProcessTypeAttrRedef((yyvsp[-2].id), (yyvsp[0].attrlist));
				}
#line 2100 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 34:
#line 283 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.id) = (yyvsp[0].id);
				}
#line 2108 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 35:
#line 287 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.id) = new ID("connection");
				}
#line 2116 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 36:
#line 291 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.id) = new ID("analyzer");
				}
#line 2124 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 37:
#line 295 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.id) = new ID("flow");
				}
#line 2132 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 38:
#line 299 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.id) = new ID("function");
				}
#line 2140 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 39:
#line 303 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.id) = new ID("type");
				}
#line 2148 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 40:
#line 309 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.contextfieldlist) = (yyvsp[-1].contextfieldlist);
				}
#line 2156 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 41:
#line 315 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyvsp[-2].contextfieldlist)->push_back((yyvsp[-1].contextfield));
				(yyval.contextfieldlist) = (yyvsp[-2].contextfieldlist);
				}
#line 2165 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 42:
#line 320 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.contextfieldlist) = new ContextFieldList();
				}
#line 2173 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 43:
#line 326 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.contextfield) = new ContextField((yyvsp[-2].id), (yyvsp[0].type));
				}
#line 2181 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 44:
#line 332 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.function) = new Function((yyvsp[-5].id), (yyvsp[0].type), (yyvsp[-3].paramlist));
				}
#line 2189 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 45:
#line 338 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyvsp[-2].function)->set_expr((yyvsp[0].expr));
				(yyval.function) = (yyvsp[-2].function);
				}
#line 2198 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 46:
#line 343 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyvsp[-3].function)->set_code((yyvsp[-1].embedded_code));
				(yyval.function) = (yyvsp[-3].function);
				}
#line 2207 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 47:
#line 348 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.function) = (yyvsp[-1].function);
				}
#line 2215 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 48:
#line 354 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.paramlist) = (yyvsp[-1].paramlist);
				}
#line 2223 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 49:
#line 358 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.paramlist) = 0;
				}
#line 2231 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 50:
#line 364 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyvsp[-2].paramlist)->push_back((yyvsp[0].param));
				(yyval.paramlist) = (yyvsp[-2].paramlist);
				}
#line 2240 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 51:
#line 369 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.paramlist) = new ParamList();
				(yyval.paramlist)->push_back((yyvsp[0].param));
				}
#line 2249 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 52:
#line 374 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.paramlist) = new ParamList();
				}
#line 2257 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 53:
#line 380 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.param) = new Param((yyvsp[-2].id), (yyvsp[0].type));
				}
#line 2265 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 54:
#line 386 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.expr) = 0;
				}
#line 2273 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 55:
#line 390 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.expr) = (yyvsp[0].expr);
				}
#line 2281 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 56:
#line 396 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.type) = 0;
				}
#line 2289 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 57:
#line 400 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.type) = (yyvsp[0].type);
				}
#line 2297 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 58:
#line 406 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.type) = (yyvsp[0].type);
				}
#line 2305 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 59:
#line 413 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.type) = (yyvsp[0].type);
				}
#line 2313 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 60:
#line 417 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.type) = new RecordType((yyvsp[-1].recordfieldlist));
				}
#line 2321 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 61:
#line 424 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.type) = (yyvsp[0].type);
				}
#line 2329 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 62:
#line 428 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.type) = new ArrayType((yyvsp[-3].type), (yyvsp[-1].expr));
				}
#line 2337 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 63:
#line 432 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.type) = new ArrayType((yyvsp[-2].type));
				}
#line 2345 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 64:
#line 436 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.type) = new CaseType((yyvsp[-4].expr), (yyvsp[-1].casefieldlist));
				}
#line 2353 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 65:
#line 443 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.type) = Type::LookUpByID((yyvsp[0].id));
				}
#line 2361 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 66:
#line 447 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.type) = new ParameterizedType((yyvsp[-3].id), (yyvsp[-1].exprlist));
				}
#line 2369 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 67:
#line 451 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.type) = new StringType((yyvsp[0].regex));
				}
#line 2377 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 68:
#line 455 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.type) = new StringType((yyvsp[0].cstr));
				}
#line 2385 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 69:
#line 461 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyvsp[-2].recordfieldlist)->push_back((yyvsp[-1].recordfield));
				(yyval.recordfieldlist) = (yyvsp[-2].recordfieldlist);
				}
#line 2394 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 70:
#line 466 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.recordfieldlist) = new RecordFieldList();
				}
#line 2402 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 71:
#line 472 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyvsp[-1].recordfield)->AddAttr((yyvsp[0].attrlist));
				(yyval.recordfield) = (yyvsp[-1].recordfield);
				}
#line 2411 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 72:
#line 479 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.recordfield) = new RecordDataField((yyvsp[-1].id), (yyvsp[0].type));
				}
#line 2419 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 73:
#line 483 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.recordfield) = (yyvsp[0].recordfield);
				}
#line 2427 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 74:
#line 489 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.recordfield) = new RecordPaddingField(
					(yyvsp[-4].id), PAD_BY_LENGTH, (yyvsp[-1].expr));
				}
#line 2436 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 75:
#line 494 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.recordfield) = new RecordPaddingField(
					(yyvsp[-3].id), PAD_TO_OFFSET, (yyvsp[0].expr));
				}
#line 2445 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 76:
#line 499 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.recordfield) = new RecordPaddingField(
					(yyvsp[-3].id), PAD_TO_NEXT_WORD, (yyvsp[0].expr));
				}
#line 2454 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 77:
#line 506 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.id) = (yyvsp[-1].id);
				}
#line 2462 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 78:
#line 510 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.id) = ID::NewAnonymousID("anonymous_field_");
				}
#line 2470 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 79:
#line 516 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.expr) = (yyvsp[0].expr);
				}
#line 2478 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 80:
#line 522 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyvsp[-2].casefieldlist)->push_back((yyvsp[-1].casefield));
				(yyval.casefieldlist) = (yyvsp[-2].casefieldlist);
				}
#line 2487 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 81:
#line 527 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.casefieldlist) = new CaseFieldList();
				}
#line 2495 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 82:
#line 533 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyvsp[-1].casefield)->AddAttr((yyvsp[0].attrlist));
				(yyval.casefield) = (yyvsp[-1].casefield);
				}
#line 2504 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 83:
#line 540 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.casefield) = new CaseField((yyvsp[-4].exprlist), (yyvsp[-2].id), (yyvsp[0].type));
				}
#line 2512 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 84:
#line 544 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.casefield) = new CaseField(0, (yyvsp[-2].id), (yyvsp[0].type));
				}
#line 2520 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 85:
#line 550 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.exprlist) = 0;
				}
#line 2528 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 86:
#line 554 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.exprlist) = (yyvsp[0].exprlist);
				}
#line 2536 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 87:
#line 560 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyvsp[-2].exprlist)->push_back((yyvsp[0].expr));
				(yyval.exprlist) = (yyvsp[-2].exprlist);
				}
#line 2545 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 88:
#line 565 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.exprlist) = new ExprList();
				(yyval.exprlist)->push_back((yyvsp[0].expr));
				}
#line 2554 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 89:
#line 572 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.expr) = new Expr((yyvsp[0].id));
				}
#line 2562 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 90:
#line 576 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.expr) = new Expr((yyvsp[0].num));
				}
#line 2570 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 91:
#line 580 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.expr) = new Expr(Expr::EXPR_SUBSCRIPT, (yyvsp[-3].expr), (yyvsp[-1].expr));
				}
#line 2578 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 92:
#line 584 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.expr) = new Expr(Expr::EXPR_MEMBER, (yyvsp[-2].expr), new Expr((yyvsp[0].id)));
				}
#line 2586 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 93:
#line 588 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.expr) = new Expr(Expr::EXPR_SIZEOF, new Expr((yyvsp[-1].id)));
				}
#line 2594 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 94:
#line 592 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.expr) = new Expr(Expr::EXPR_OFFSETOF, new Expr((yyvsp[-1].id)));
				}
#line 2602 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 95:
#line 596 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.expr) = new Expr(Expr::EXPR_PAREN, (yyvsp[-1].expr));
				}
#line 2610 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 96:
#line 600 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.expr) = new Expr(Expr::EXPR_CALL,
				              (yyvsp[-3].expr),
				              new Expr((yyvsp[-1].exprlist)));
				}
#line 2620 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 97:
#line 606 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.expr) = new Expr(Expr::EXPR_NEG, (yyvsp[0].expr));
				}
#line 2628 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 98:
#line 610 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.expr) = new Expr(Expr::EXPR_PLUS, (yyvsp[-2].expr), (yyvsp[0].expr));
				}
#line 2636 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 99:
#line 614 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.expr) = new Expr(Expr::EXPR_MINUS, (yyvsp[-2].expr), (yyvsp[0].expr));
				}
#line 2644 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 100:
#line 618 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.expr) = new Expr(Expr::EXPR_TIMES, (yyvsp[-2].expr), (yyvsp[0].expr));
				}
#line 2652 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 101:
#line 622 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.expr) = new Expr(Expr::EXPR_DIV, (yyvsp[-2].expr), (yyvsp[0].expr));
				}
#line 2660 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 102:
#line 626 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.expr) = new Expr(Expr::EXPR_MOD, (yyvsp[-2].expr), (yyvsp[0].expr));
				}
#line 2668 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 103:
#line 630 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.expr) = new Expr(Expr::EXPR_BITNOT, (yyvsp[0].expr));
				}
#line 2676 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 104:
#line 634 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.expr) = new Expr(Expr::EXPR_BITAND, (yyvsp[-2].expr), (yyvsp[0].expr));
				}
#line 2684 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 105:
#line 638 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.expr) = new Expr(Expr::EXPR_BITOR, (yyvsp[-2].expr), (yyvsp[0].expr));
				}
#line 2692 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 106:
#line 642 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.expr) = new Expr(Expr::EXPR_BITXOR, (yyvsp[-2].expr), (yyvsp[0].expr));
				}
#line 2700 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 107:
#line 646 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.expr) = new Expr(Expr::EXPR_LSHIFT, (yyvsp[-2].expr), (yyvsp[0].expr));
				}
#line 2708 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 108:
#line 650 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.expr) = new Expr(Expr::EXPR_RSHIFT, (yyvsp[-2].expr), (yyvsp[0].expr));
				}
#line 2716 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 109:
#line 654 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.expr) = new Expr(Expr::EXPR_EQUAL, (yyvsp[-2].expr), (yyvsp[0].expr));
				}
#line 2724 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 110:
#line 658 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.expr) = new Expr(Expr::EXPR_NEQ, (yyvsp[-2].expr), (yyvsp[0].expr));
				}
#line 2732 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 111:
#line 662 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.expr) = new Expr(Expr::EXPR_GE, (yyvsp[-2].expr), (yyvsp[0].expr));
				}
#line 2740 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 112:
#line 666 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.expr) = new Expr(Expr::EXPR_LE, (yyvsp[-2].expr), (yyvsp[0].expr));
				}
#line 2748 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 113:
#line 670 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.expr) = new Expr(Expr::EXPR_GT, (yyvsp[-2].expr), (yyvsp[0].expr));
				}
#line 2756 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 114:
#line 674 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.expr) = new Expr(Expr::EXPR_LT, (yyvsp[-2].expr), (yyvsp[0].expr));
				}
#line 2764 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 115:
#line 678 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.expr) = new Expr(Expr::EXPR_NOT, (yyvsp[0].expr));
				}
#line 2772 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 116:
#line 682 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.expr) = new Expr(Expr::EXPR_AND, (yyvsp[-2].expr), (yyvsp[0].expr));
				}
#line 2780 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 117:
#line 686 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.expr) = new Expr(Expr::EXPR_OR, (yyvsp[-2].expr), (yyvsp[0].expr));
				}
#line 2788 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 118:
#line 690 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.expr) = new Expr(Expr::EXPR_COND, (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr));
				}
#line 2796 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 119:
#line 694 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.expr) = new Expr((yyvsp[-4].expr), (yyvsp[-1].caseexprlist));
				}
#line 2804 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 120:
#line 698 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.expr) = new Expr((yyvsp[0].cstr));
				}
#line 2812 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 121:
#line 702 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.expr) = new Expr((yyvsp[0].regex));
				}
#line 2820 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 122:
#line 708 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.cstr) = new ConstString((yyvsp[0].str));
				}
#line 2828 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 123:
#line 714 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.regex) = new RegEx((yyvsp[-1].str));
				}
#line 2836 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 124:
#line 720 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.caseexprlist) = new CaseExprList();
				}
#line 2844 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 125:
#line 724 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyvsp[-2].caseexprlist)->push_back((yyvsp[-1].caseexpr));
				(yyval.caseexprlist) = (yyvsp[-2].caseexprlist);
				}
#line 2853 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 126:
#line 731 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.caseexpr) = new CaseExpr((yyvsp[-2].exprlist), (yyvsp[0].expr));
				}
#line 2861 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 127:
#line 735 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.caseexpr) = new CaseExpr(0, (yyvsp[0].expr));
				}
#line 2869 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 128:
#line 741 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.enumlist) = (yyvsp[0].enumlist);
				}
#line 2877 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 129:
#line 745 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.enumlist) = (yyvsp[-1].enumlist);
				}
#line 2885 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 130:
#line 751 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyvsp[-2].enumlist)->push_back((yyvsp[0].enumitem));
				(yyval.enumlist) = (yyvsp[-2].enumlist);
				}
#line 2894 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 131:
#line 756 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.enumlist) = new EnumList();
				(yyval.enumlist)->push_back((yyvsp[0].enumitem));
				}
#line 2903 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 132:
#line 763 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.enumitem) = new Enum((yyvsp[0].id));
				}
#line 2911 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 133:
#line 767 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.enumitem) = new Enum((yyvsp[-2].id), (yyvsp[0].expr));
				}
#line 2919 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 134:
#line 773 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.aelemlist) = (yyvsp[0].aelemlist);
				}
#line 2927 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 135:
#line 779 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.aelemlist) = (yyvsp[0].aelemlist);
				}
#line 2935 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 136:
#line 786 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.aelemlist) = new AnalyzerElementList();
				}
#line 2943 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 137:
#line 790 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyvsp[-1].aelemlist)->push_back((yyvsp[0].aelem));
				(yyval.aelemlist) = (yyvsp[-1].aelemlist);
				}
#line 2952 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 138:
#line 797 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.aelem) = new AnalyzerHelper(AnalyzerHelper::MEMBER_DECLS, (yyvsp[-1].embedded_code));
				}
#line 2960 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 139:
#line 801 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.aelem) = new AnalyzerHelper(AnalyzerHelper::INIT_CODE, (yyvsp[-1].embedded_code));
				}
#line 2968 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 140:
#line 805 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.aelem) = new AnalyzerHelper(AnalyzerHelper::CLEANUP_CODE, (yyvsp[-1].embedded_code));
				}
#line 2976 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 141:
#line 809 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.aelem) = new AnalyzerHelper(AnalyzerHelper::EOF_CODE, (yyvsp[-1].embedded_code));
				}
#line 2984 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 142:
#line 813 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.aelem) = new AnalyzerFlow((AnalyzerFlow::Direction) (yyvsp[-4].val), (yyvsp[-2].id), (yyvsp[-1].exprlist));
				}
#line 2992 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 143:
#line 817 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.aelem) = new AnalyzerDataUnit(
					(AnalyzerDataUnit::DataUnitType) (yyvsp[-8].val),
					(yyvsp[-6].id),
					(yyvsp[-5].exprlist),
					(yyvsp[-2].exprlist));
				}
#line 3004 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 144:
#line 825 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.aelem) = new AnalyzerFunction((yyvsp[0].function));
				}
#line 3012 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 145:
#line 829 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.aelem) = new AnalyzerState((yyvsp[-1].statevarlist));
				}
#line 3020 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 146:
#line 833 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.aelem) = new AnalyzerAction((yyvsp[-7].id), (AnalyzerAction::When) (yyvsp[-6].val), (yyvsp[-4].actionparam), (yyvsp[-1].embedded_code));
				}
#line 3028 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 147:
#line 839 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.statevarlist) = new StateVarList();
				}
#line 3036 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 148:
#line 843 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyvsp[-2].statevarlist)->push_back((yyvsp[-1].statevar));
				(yyval.statevarlist) = (yyvsp[-2].statevarlist);
				}
#line 3045 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 149:
#line 850 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.statevar) = new StateVar((yyvsp[-2].id), (yyvsp[0].type));
				}
#line 3053 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 150:
#line 856 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.actionparam) = new ActionParam((yyvsp[-2].id), (yyvsp[0].actionparamtype));
				}
#line 3061 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 151:
#line 862 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.actionparamtype) = new ActionParamType((yyvsp[0].id));
				}
#line 3069 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 152:
#line 866 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.actionparamtype) = new ActionParamType((yyvsp[-2].id), (yyvsp[0].id));
				}
#line 3077 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 153:
#line 872 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.embedded_code) = new EmbeddedCode();
				}
#line 3085 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 154:
#line 876 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyvsp[-1].embedded_code)->Append((yyvsp[0].val));
				(yyval.embedded_code) = (yyvsp[-1].embedded_code);
				}
#line 3094 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 155:
#line 881 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyvsp[-1].embedded_code)->Append((yyvsp[0].str));
				(yyval.embedded_code) = (yyvsp[-1].embedded_code);
				}
#line 3103 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 156:
#line 886 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyvsp[-1].embedded_code)->Append((yyvsp[0].pacprimitive));
				(yyval.embedded_code) = (yyvsp[-1].embedded_code);
				}
#line 3112 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 157:
#line 893 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.pacprimitive) = new PPVal((yyvsp[-1].expr));
				}
#line 3120 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 158:
#line 897 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.pacprimitive) = new PPSet((yyvsp[-1].expr));
				}
#line 3128 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 159:
#line 901 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.pacprimitive) = new PPType((yyvsp[-1].expr));
				}
#line 3136 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 160:
#line 905 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.pacprimitive) = new PPConstDef((yyvsp[-3].id), (yyvsp[-1].expr));
				}
#line 3144 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 161:
#line 911 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.exprlist) = 0;
				}
#line 3152 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 162:
#line 915 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.exprlist) = (yyvsp[-1].exprlist);
				}
#line 3160 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 163:
#line 921 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyvsp[-2].fieldlist)->push_back((yyvsp[-1].field));
				(yyval.fieldlist) = (yyvsp[-2].fieldlist);
				}
#line 3169 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 164:
#line 926 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyvsp[-2].fieldlist)->push_back((yyvsp[-1].field));
				(yyval.fieldlist) = (yyvsp[-2].fieldlist);
				}
#line 3178 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 165:
#line 931 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.fieldlist) = new FieldList();
				}
#line 3186 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 166:
#line 937 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.field) = new LetField((yyvsp[-3].id), (yyvsp[-2].type), (yyvsp[-1].expr));
				(yyval.field)->AddAttr((yyvsp[0].attrlist));
				}
#line 3195 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 167:
#line 944 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.field) = new WithInputField((yyvsp[-5].id), (yyvsp[-3].type), (yyvsp[-1].input));
				(yyval.field)->AddAttr((yyvsp[0].attrlist));
				}
#line 3204 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 168:
#line 952 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.input) = new InputBuffer((yyvsp[0].expr));
				}
#line 3212 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 169:
#line 958 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.attrlist) = 0;
				}
#line 3220 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 170:
#line 962 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.attrlist) = (yyvsp[0].attrlist);
				}
#line 3228 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 171:
#line 968 "pac_parse.yy" /* yacc.c:1646  */
    {
				if ( (yyvsp[0].attr) )
					(yyvsp[-2].attrlist)->push_back((yyvsp[0].attr));
				(yyval.attrlist) = (yyvsp[-2].attrlist);
				}
#line 3238 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 172:
#line 974 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.attrlist) = new AttrList();
				if ( (yyvsp[0].attr) )
					(yyval.attrlist)->push_back((yyvsp[0].attr));
				}
#line 3248 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 175:
#line 986 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.attr) = new Attr(ATTR_BYTEORDER, (yyvsp[0].expr));
				}
#line 3256 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 176:
#line 990 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.attr) = new Attr(ATTR_CHECK, (yyvsp[0].expr));
				}
#line 3264 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 177:
#line 994 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.attr) = new Attr(ATTR_CHUNKED);
				}
#line 3272 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 178:
#line 998 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.attr) = new Attr(ATTR_EXPORTSOURCEDATA);
				}
#line 3280 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 179:
#line 1002 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.attr) = new Attr(ATTR_IF, (yyvsp[0].expr));
				}
#line 3288 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 180:
#line 1006 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.attr) = new Attr(ATTR_LENGTH, (yyvsp[0].expr));
				}
#line 3296 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 181:
#line 1010 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.attr) = new LetAttr((yyvsp[-1].fieldlist));
				}
#line 3304 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 182:
#line 1014 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.attr) = new Attr(ATTR_LINEBREAKER, (yyvsp[0].expr));
				}
#line 3312 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 183:
#line 1018 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.attr) = new Attr(ATTR_MULTILINE, (yyvsp[-1].expr));
				}
#line 3320 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 184:
#line 1022 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.attr) = new Attr(ATTR_ONELINE, (yyvsp[0].expr));
				}
#line 3328 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 185:
#line 1026 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.attr) = new Attr(ATTR_REFCOUNT);
				}
#line 3336 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 186:
#line 1030 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.attr) = new Attr(ATTR_REQUIRES, (yyvsp[-1].exprlist));
				}
#line 3344 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 187:
#line 1034 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.attr) = new Attr(ATTR_RESTOFDATA);
				}
#line 3352 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 188:
#line 1038 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.attr) = new Attr(ATTR_RESTOFFLOW);
				}
#line 3360 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 189:
#line 1042 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.attr) = new Attr(ATTR_TRANSIENT);
				}
#line 3368 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 190:
#line 1046 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.attr) = new Attr(ATTR_UNTIL, (yyvsp[0].expr));
				}
#line 3376 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 191:
#line 1052 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.expr) = 0;
				}
#line 3384 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;

  case 192:
#line 1056 "pac_parse.yy" /* yacc.c:1646  */
    {
				(yyval.expr) = (yyvsp[-1].expr);
				}
#line 3392 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
    break;


#line 3396 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.cc" /* yacc.c:1646  */
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
                      yytoken, &yylval);
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


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
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
#line 1061 "pac_parse.yy" /* yacc.c:1906  */


const ID* current_decl_id = 0;

int yyerror(const char msg[])
	{
	char* msgbuf =
		new char[strlen(msg) + yyleng + 64];

	if ( ! yychar || ! yytext || yytext[0] == '\0' )
		sprintf(msgbuf, "%s, at end of file", msg);

	else if ( yytext[0] == '\n' )
		sprintf(msgbuf, "%s, on previous line", msg);

	else
		sprintf(msgbuf, "%s, at or near \"%s\"", msg, yytext);

	/*
	extern int column;
	sprintf(msgbuf, "%*s\n%*s\n", column, "^", column, msg);
	*/

	if ( ! input_filename.empty() )
		fprintf(stderr, "%s:%d: ", input_filename.c_str(), line_number);
	else
		fprintf(stderr, "line %d: ", line_number);
	fprintf(stderr, "%s", msgbuf);
	fprintf(stderr, " (yychar=%d)", yychar);
	fprintf(stderr, "\n");

	return 0;
        }
