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

/* All symbols defined below should begin with RE_ or YY, to avoid
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
#line 3 "re-parse.y" /* yacc.c:339  */

#include <stdlib.h>

#include "CCL.h"
#include "NFA.h"
#include "EquivClass.h"
#include "Reporter.h"

int csize = 256;
int syntax_error = 0;

int clower(int sym);
void RE_error(const char msg[]);

#line 81 "/home/benjamin/Bro/bro-2.3.1/build/src/rep.cc" /* yacc.c:339  */

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
   by #include "re-parse.h".  */
#ifndef YY_YY_HOME_BENJAMIN_BRO_BRO_2_3_1_BUILD_SRC_RE_PARSE_H_INCLUDED
# define YY_YY_HOME_BENJAMIN_BRO_BRO_2_3_1_BUILD_SRC_RE_PARSE_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int RE_debug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum RE_tokentype
  {
    TOK_CHAR = 258,
    TOK_NUMBER = 259,
    TOK_CCL = 260,
    TOK_CCE = 261
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 20 "re-parse.y" /* yacc.c:355  */

	int int_val;
	cce_func cce_val;
	CCL* ccl_val;
	NFA_Machine* mach_val;

#line 135 "/home/benjamin/Bro/bro-2.3.1/build/src/rep.cc" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE RE_lval;

int RE_parse (void);

#endif /* !YY_YY_HOME_BENJAMIN_BRO_BRO_2_3_1_BUILD_SRC_RE_PARSE_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 150 "/home/benjamin/Bro/bro-2.3.1/build/src/rep.cc" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 RE_type_uint8;
#else
typedef unsigned char RE_type_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 RE_type_int8;
#else
typedef signed char RE_type_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 RE_type_uint16;
#else
typedef unsigned short int RE_type_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 RE_type_int16;
#else
typedef short int RE_type_int16;
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
/* Suppress an incorrect diagnostic about RE_lval being uninitialized.  */
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


#if ! defined RE_overflow || YYERROR_VERBOSE

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
#endif /* ! defined RE_overflow || YYERROR_VERBOSE */


#if (! defined RE_overflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union RE_alloc
{
  RE_type_int16 RE_ss_alloc;
  YYSTYPE RE_vs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union RE_alloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (RE_type_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T RE_newbytes;                                            \
        YYCOPY (&RE_ptr->Stack_alloc, Stack, RE_size);                    \
        Stack = &RE_ptr->Stack_alloc;                                    \
        RE_newbytes = RE_stacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        RE_ptr += RE_newbytes / sizeof (*RE_ptr);                          \
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
          YYSIZE_T RE_i;                         \
          for (RE_i = 0; RE_i < (Count); RE_i++)   \
            (Dst)[RE_i] = (Src)[RE_i];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  19
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   48

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  23
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  9
/* YYNRULES -- Number of rules.  */
#define YYNRULES  31
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  44

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by re_lex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   261

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? RE_translate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by re_lex, without out-of-bounds checking.  */
static const RE_type_uint8 RE_translate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    15,     2,    19,     2,     2,     2,
      16,    17,     8,     9,    12,    22,    14,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    10,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    20,     2,    21,    18,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    11,     7,    13,     2,     2,     2,     2,
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
       5,     6
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const RE_type_uint8 RE_rline[] =
{
       0,    33,    33,    36,    40,    42,    44,    47,    49,    52,
      55,    58,    61,    85,    95,   108,   113,   120,   123,   126,
     129,   136,   142,   149,   152,   159,   179,   187,   190,   193,
     201,   210
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const RE_tname[] =
{
  "$end", "error", "$undefined", "TOK_CHAR", "TOK_NUMBER", "TOK_CCL",
  "TOK_CCE", "'|'", "'*'", "'+'", "'?'", "'{'", "','", "'}'", "'.'",
  "'\"'", "'('", "')'", "'^'", "'$'", "'['", "']'", "'-'", "$accept",
  "flexrule", "re", "series", "singleton", "full_ccl", "ccl", "ccl_expr",
  "string", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const RE_type_uint16 RE_toknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   124,    42,    43,
      63,   123,    44,   125,    46,    34,    40,    41,    94,    36,
      91,    93,    45
};
# endif

#define YYPACT_NINF -14

#define RE_pact_value_is_default(Yystate) \
  (!!((Yystate) == (-14)))

#define YYTABLE_NINF -7

#define RE_table_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const RE_type_int8 RE_pact[] =
{
       1,   -14,   -14,   -14,   -14,   -14,    21,   -14,   -14,   -13,
      14,    11,    21,    22,   -14,     8,    -4,   -14,     4,   -14,
      21,    22,   -14,   -14,   -14,    24,   -14,   -14,   -14,     6,
      12,   -14,   -14,   -14,    21,    30,   -14,    41,    25,   -14,
     -14,    32,   -14,   -14
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const RE_type_uint8 RE_defact[] =
{
       0,     3,    20,    17,    15,    31,     6,    21,    22,    28,
       0,     2,     5,     8,    16,     0,     0,    28,     0,     1,
       0,     7,     9,    10,    11,     0,    30,    18,    19,     0,
      26,    29,    23,    27,     4,     0,    24,     0,     0,    14,
      25,     0,    13,    12
};

  /* YYPGOTO[NTERM-NUM].  */
static const RE_type_int8 RE_pgoto[] =
{
     -14,   -14,    40,    27,   -12,   -14,    31,   -14,   -14
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const RE_type_int8 RE_defgoto[] =
{
      -1,    10,    11,    12,    13,    14,    18,    33,    15
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const RE_type_int8 RE_table[] =
{
      21,    -6,     1,    20,     2,    17,     3,    30,    -6,    30,
      31,    26,    31,    28,    19,     4,     5,     6,    20,     7,
       8,     9,    21,    27,     2,    32,     3,    36,    35,    41,
      22,    23,    24,    25,    37,     4,     5,     6,    42,     7,
       8,     9,    38,    39,    40,    43,    16,    34,    29
};

static const RE_type_uint8 RE_check[] =
{
      12,     0,     1,     7,     3,    18,     5,     3,     7,     3,
       6,     3,     6,    17,     0,    14,    15,    16,     7,    18,
      19,    20,    34,    15,     3,    21,     5,    21,     4,     4,
       8,     9,    10,    11,    22,    14,    15,    16,    13,    18,
      19,    20,    12,    13,     3,    13,     6,    20,    17
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const RE_type_uint8 RE_stos[] =
{
       0,     1,     3,     5,    14,    15,    16,    18,    19,    20,
      24,    25,    26,    27,    28,    31,    25,    18,    29,     0,
       7,    27,     8,     9,    10,    11,     3,    15,    17,    29,
       3,     6,    21,    30,    26,     4,    21,    22,    12,    13,
       3,     4,    13,    13
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const RE_type_uint8 RE_r1[] =
{
       0,    23,    24,    24,    25,    25,    25,    26,    26,    27,
      27,    27,    27,    27,    27,    27,    27,    27,    27,    27,
      27,    27,    27,    28,    28,    29,    29,    29,    29,    30,
      31,    31
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const RE_type_uint8 RE_r2[] =
{
       0,     2,     1,     1,     3,     1,     0,     2,     1,     2,
       2,     2,     6,     5,     4,     1,     1,     1,     3,     3,
       1,     1,     1,     3,     4,     4,     2,     2,     0,     1,
       2,     0
};


#define RE_errok         (RE_errstatus = 0)
#define RE_clearin       (RE_char = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto RE_acceptlab
#define YYABORT         goto RE_abortlab
#define YYERROR         goto RE_errorlab


#define YYRECOVERING()  (!!RE_errstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (RE_char == YYEMPTY)                                        \
    {                                                           \
      RE_char = (Token);                                         \
      RE_lval = (Value);                                         \
      YYPOPSTACK (RE_len);                                       \
      RE_state = *RE_ssp;                                         \
      goto RE_backup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      RE_error (YY_("syntax error: cannot back up")); \
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
  if (RE_debug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (RE_debug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      RE__symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
RE__symbol_value_print (FILE *RE_output, int RE_type, YYSTYPE const * const RE_valuep)
{
  FILE *RE_o = RE_output;
  YYUSE (RE_o);
  if (!RE_valuep)
    return;
# ifdef YYPRINT
  if (RE_type < YYNTOKENS)
    YYPRINT (RE_output, RE_toknum[RE_type], *RE_valuep);
# endif
  YYUSE (RE_type);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
RE__symbol_print (FILE *RE_output, int RE_type, YYSTYPE const * const RE_valuep)
{
  YYFPRINTF (RE_output, "%s %s (",
             RE_type < YYNTOKENS ? "token" : "nterm", RE_tname[RE_type]);

  RE__symbol_value_print (RE_output, RE_type, RE_valuep);
  YYFPRINTF (RE_output, ")");
}

/*------------------------------------------------------------------.
| RE__stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
RE__stack_print (RE_type_int16 *RE_bottom, RE_type_int16 *RE_top)
{
  YYFPRINTF (stderr, "Stack now");
  for (; RE_bottom <= RE_top; RE_bottom++)
    {
      int RE_bot = *RE_bottom;
      YYFPRINTF (stderr, " %d", RE_bot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (RE_debug)                                                  \
    RE__stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
RE__reduce_print (RE_type_int16 *RE_ssp, YYSTYPE *RE_vsp, int RE_rule)
{
  unsigned long int RE_lno = RE_rline[RE_rule];
  int RE_nrhs = RE_r2[RE_rule];
  int RE_i;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             RE_rule - 1, RE_lno);
  /* The symbols being reduced.  */
  for (RE_i = 0; RE_i < RE_nrhs; RE_i++)
    {
      YYFPRINTF (stderr, "   $%d = ", RE_i + 1);
      RE__symbol_print (stderr,
                       RE_stos[RE_ssp[RE_i + 1 - RE_nrhs]],
                       &(RE_vsp[(RE_i + 1) - (RE_nrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (RE_debug)                          \
    RE__reduce_print (RE_ssp, RE_vsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int RE_debug;
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

# ifndef RE_strlen
#  if defined __GLIBC__ && defined _STRING_H
#   define RE_strlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
RE_strlen (const char *RE_str)
{
  YYSIZE_T RE_len;
  for (RE_len = 0; RE_str[RE_len]; RE_len++)
    continue;
  return RE_len;
}
#  endif
# endif

# ifndef RE_stpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define RE_stpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
RE_stpcpy (char *RE_dest, const char *RE_src)
{
  char *RE_d = RE_dest;
  const char *RE_s = RE_src;

  while ((*RE_d++ = *RE_s++) != '\0')
    continue;

  return RE_d - 1;
}
#  endif
# endif

# ifndef RE_tnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for RE_error.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from RE_tname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
RE_tnamerr (char *RE_res, const char *RE_str)
{
  if (*RE_str == '"')
    {
      YYSIZE_T RE_n = 0;
      char const *RE_p = RE_str;

      for (;;)
        switch (*++RE_p)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++RE_p != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (RE_res)
              RE_res[RE_n] = *RE_p;
            RE_n++;
            break;

          case '"':
            if (RE_res)
              RE_res[RE_n] = '\0';
            return RE_n;
          }
    do_not_strip_quotes: ;
    }

  if (! RE_res)
    return RE_strlen (RE_str);

  return RE_stpcpy (RE_res, RE_str) - RE_res;
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
RE_syntax_error (YYSIZE_T *RE_msg_alloc, char **RE_msg,
                RE_type_int16 *RE_ssp, int RE_token)
{
  YYSIZE_T RE_size0 = RE_tnamerr (YY_NULLPTR, RE_tname[RE_token]);
  YYSIZE_T RE_size = RE_size0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *RE_format = YY_NULLPTR;
  /* Arguments of RE_format. */
  char const *RE_arg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int RE_count = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in RE_char) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated RE_char.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (RE_token != YYEMPTY)
    {
      int RE_n = RE_pact[*RE_ssp];
      RE_arg[RE_count++] = RE_tname[RE_token];
      if (!RE_pact_value_is_default (RE_n))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int RE_xbegin = RE_n < 0 ? -RE_n : 0;
          /* Stay within bounds of both RE_check and RE_tname.  */
          int RE_checklim = YYLAST - RE_n + 1;
          int RE_xend = RE_checklim < YYNTOKENS ? RE_checklim : YYNTOKENS;
          int RE_x;

          for (RE_x = RE_xbegin; RE_x < RE_xend; ++RE_x)
            if (RE_check[RE_x + RE_n] == RE_x && RE_x != YYTERROR
                && !RE_table_value_is_error (RE_table[RE_x + RE_n]))
              {
                if (RE_count == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    RE_count = 1;
                    RE_size = RE_size0;
                    break;
                  }
                RE_arg[RE_count++] = RE_tname[RE_x];
                {
                  YYSIZE_T RE_size1 = RE_size + RE_tnamerr (YY_NULLPTR, RE_tname[RE_x]);
                  if (! (RE_size <= RE_size1
                         && RE_size1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  RE_size = RE_size1;
                }
              }
        }
    }

  switch (RE_count)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        RE_format = S;                       \
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
    YYSIZE_T RE_size1 = RE_size + RE_strlen (RE_format);
    if (! (RE_size <= RE_size1 && RE_size1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    RE_size = RE_size1;
  }

  if (*RE_msg_alloc < RE_size)
    {
      *RE_msg_alloc = 2 * RE_size;
      if (! (RE_size <= *RE_msg_alloc
             && *RE_msg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *RE_msg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *RE_p = *RE_msg;
    int RE_i = 0;
    while ((*RE_p = *RE_format) != '\0')
      if (*RE_p == '%' && RE_format[1] == 's' && RE_i < RE_count)
        {
          RE_p += RE_tnamerr (RE_p, RE_arg[RE_i++]);
          RE_format += 2;
        }
      else
        {
          RE_p++;
          RE_format++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
RE_destruct (const char *RE_msg, int RE_type, YYSTYPE *RE_valuep)
{
  YYUSE (RE_valuep);
  if (!RE_msg)
    RE_msg = "Deleting";
  YY_SYMBOL_PRINT (RE_msg, RE_type, RE_valuep, RE_locationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (RE_type);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int RE_char;

/* The semantic value of the lookahead symbol.  */
YYSTYPE RE_lval;
/* Number of syntax errors so far.  */
int RE_nerrs;


/*----------.
| RE_parse.  |
`----------*/

int
RE_parse (void)
{
    int RE_state;
    /* Number of tokens to shift before error messages enabled.  */
    int RE_errstatus;

    /* The stacks and their tools:
       'RE_ss': related to states.
       'RE_vs': related to semantic values.

       Refer to the stacks through separate pointers, to allow RE_overflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    RE_type_int16 RE_ssa[YYINITDEPTH];
    RE_type_int16 *RE_ss;
    RE_type_int16 *RE_ssp;

    /* The semantic value stack.  */
    YYSTYPE RE_vsa[YYINITDEPTH];
    YYSTYPE *RE_vs;
    YYSTYPE *RE_vsp;

    YYSIZE_T RE_stacksize;

  int RE_n;
  int RE_result;
  /* Lookahead token as an internal (translated) token number.  */
  int RE_token = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE RE_val;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char RE_msgbuf[128];
  char *RE_msg = RE_msgbuf;
  YYSIZE_T RE_msg_alloc = sizeof RE_msgbuf;
#endif

#define YYPOPSTACK(N)   (RE_vsp -= (N), RE_ssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int RE_len = 0;

  RE_ssp = RE_ss = RE_ssa;
  RE_vsp = RE_vs = RE_vsa;
  RE_stacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  RE_state = 0;
  RE_errstatus = 0;
  RE_nerrs = 0;
  RE_char = YYEMPTY; /* Cause a token to be read.  */
  goto RE_setstate;

/*------------------------------------------------------------.
| RE_newstate -- Push a new state, which is found in RE_state.  |
`------------------------------------------------------------*/
 RE_newstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  RE_ssp++;

 RE_setstate:
  *RE_ssp = RE_state;

  if (RE_ss + RE_stacksize - 1 <= RE_ssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T RE_size = RE_ssp - RE_ss + 1;

#ifdef RE_overflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *RE_vs1 = RE_vs;
        RE_type_int16 *RE_ss1 = RE_ss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if RE_overflow is a macro.  */
        RE_overflow (YY_("memory exhausted"),
                    &RE_ss1, RE_size * sizeof (*RE_ssp),
                    &RE_vs1, RE_size * sizeof (*RE_vsp),
                    &RE_stacksize);

        RE_ss = RE_ss1;
        RE_vs = RE_vs1;
      }
#else /* no RE_overflow */
# ifndef YYSTACK_RELOCATE
      goto RE_exhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= RE_stacksize)
        goto RE_exhaustedlab;
      RE_stacksize *= 2;
      if (YYMAXDEPTH < RE_stacksize)
        RE_stacksize = YYMAXDEPTH;

      {
        RE_type_int16 *RE_ss1 = RE_ss;
        union RE_alloc *RE_ptr =
          (union RE_alloc *) YYSTACK_ALLOC (YYSTACK_BYTES (RE_stacksize));
        if (! RE_ptr)
          goto RE_exhaustedlab;
        YYSTACK_RELOCATE (RE_ss_alloc, RE_ss);
        YYSTACK_RELOCATE (RE_vs_alloc, RE_vs);
#  undef YYSTACK_RELOCATE
        if (RE_ss1 != RE_ssa)
          YYSTACK_FREE (RE_ss1);
      }
# endif
#endif /* no RE_overflow */

      RE_ssp = RE_ss + RE_size - 1;
      RE_vsp = RE_vs + RE_size - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) RE_stacksize));

      if (RE_ss + RE_stacksize - 1 <= RE_ssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", RE_state));

  if (RE_state == YYFINAL)
    YYACCEPT;

  goto RE_backup;

/*-----------.
| RE_backup.  |
`-----------*/
RE_backup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  RE_n = RE_pact[RE_state];
  if (RE_pact_value_is_default (RE_n))
    goto RE_default;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (RE_char == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      RE_char = re_lex ();
    }

  if (RE_char <= YYEOF)
    {
      RE_char = RE_token = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      RE_token = YYTRANSLATE (RE_char);
      YY_SYMBOL_PRINT ("Next token is", RE_token, &RE_lval, &RE_lloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  RE_n += RE_token;
  if (RE_n < 0 || YYLAST < RE_n || RE_check[RE_n] != RE_token)
    goto RE_default;
  RE_n = RE_table[RE_n];
  if (RE_n <= 0)
    {
      if (RE_table_value_is_error (RE_n))
        goto RE_errlab;
      RE_n = -RE_n;
      goto RE_reduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (RE_errstatus)
    RE_errstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", RE_token, &RE_lval, &RE_lloc);

  /* Discard the shifted token.  */
  RE_char = YYEMPTY;

  RE_state = RE_n;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++RE_vsp = RE_lval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto RE_newstate;


/*-----------------------------------------------------------.
| RE_default -- do the default action for the current state.  |
`-----------------------------------------------------------*/
RE_default:
  RE_n = RE_defact[RE_state];
  if (RE_n == 0)
    goto RE_errlab;
  goto RE_reduce;


/*-----------------------------.
| RE_reduce -- Do a reduction.  |
`-----------------------------*/
RE_reduce:
  /* RE_n is the number of a rule to reduce with.  */
  RE_len = RE_r2[RE_n];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  RE_val = RE_vsp[1-RE_len];


  YY_REDUCE_PRINT (RE_n);
  switch (RE_n)
    {
        case 2:
#line 34 "re-parse.y" /* yacc.c:1646  */
    { (RE_vsp[0].mach_val)->AddAccept(1); nfa = (RE_vsp[0].mach_val); }
#line 1250 "/home/benjamin/Bro/bro-2.3.1/build/src/rep.cc" /* yacc.c:1646  */
    break;

  case 3:
#line 37 "re-parse.y" /* yacc.c:1646  */
    { return 1; }
#line 1256 "/home/benjamin/Bro/bro-2.3.1/build/src/rep.cc" /* yacc.c:1646  */
    break;

  case 4:
#line 41 "re-parse.y" /* yacc.c:1646  */
    { (RE_val.mach_val) = make_alternate((RE_vsp[-2].mach_val), (RE_vsp[0].mach_val)); }
#line 1262 "/home/benjamin/Bro/bro-2.3.1/build/src/rep.cc" /* yacc.c:1646  */
    break;

  case 6:
#line 44 "re-parse.y" /* yacc.c:1646  */
    { (RE_val.mach_val) = new NFA_Machine(new EpsilonState()); }
#line 1268 "/home/benjamin/Bro/bro-2.3.1/build/src/rep.cc" /* yacc.c:1646  */
    break;

  case 7:
#line 48 "re-parse.y" /* yacc.c:1646  */
    { (RE_vsp[-1].mach_val)->AppendMachine((RE_vsp[0].mach_val)); }
#line 1274 "/home/benjamin/Bro/bro-2.3.1/build/src/rep.cc" /* yacc.c:1646  */
    break;

  case 9:
#line 53 "re-parse.y" /* yacc.c:1646  */
    { (RE_vsp[-1].mach_val)->MakeClosure(); }
#line 1280 "/home/benjamin/Bro/bro-2.3.1/build/src/rep.cc" /* yacc.c:1646  */
    break;

  case 10:
#line 56 "re-parse.y" /* yacc.c:1646  */
    { (RE_vsp[-1].mach_val)->MakePositiveClosure(); }
#line 1286 "/home/benjamin/Bro/bro-2.3.1/build/src/rep.cc" /* yacc.c:1646  */
    break;

  case 11:
#line 59 "re-parse.y" /* yacc.c:1646  */
    { (RE_vsp[-1].mach_val)->MakeOptional(); }
#line 1292 "/home/benjamin/Bro/bro-2.3.1/build/src/rep.cc" /* yacc.c:1646  */
    break;

  case 12:
#line 62 "re-parse.y" /* yacc.c:1646  */
    {
			if ( (RE_vsp[-3].int_val) > (RE_vsp[-1].int_val) || (RE_vsp[-3].int_val) < 0 )
				synerr("bad iteration values");
			else
				{
				if ( (RE_vsp[-3].int_val) == 0 )
					{
					if ( (RE_vsp[-1].int_val) == 0 )
						{
						(RE_val.mach_val) = new NFA_Machine(new EpsilonState());
						Unref((RE_vsp[-5].mach_val));
						}
					else
						{
						(RE_vsp[-5].mach_val)->MakeRepl(1, (RE_vsp[-1].int_val));
						(RE_vsp[-5].mach_val)->MakeOptional();
						}
					}
				else
					(RE_vsp[-5].mach_val)->MakeRepl((RE_vsp[-3].int_val), (RE_vsp[-1].int_val));
				}
			}
#line 1319 "/home/benjamin/Bro/bro-2.3.1/build/src/rep.cc" /* yacc.c:1646  */
    break;

  case 13:
#line 86 "re-parse.y" /* yacc.c:1646  */
    {
			if ( (RE_vsp[-2].int_val) < 0 )
				synerr("iteration value must be positive");
			else if ( (RE_vsp[-2].int_val) == 0 )
				(RE_vsp[-4].mach_val)->MakeClosure();
			else
				(RE_vsp[-4].mach_val)->MakeRepl((RE_vsp[-2].int_val), NO_UPPER_BOUND);
			}
#line 1332 "/home/benjamin/Bro/bro-2.3.1/build/src/rep.cc" /* yacc.c:1646  */
    break;

  case 14:
#line 96 "re-parse.y" /* yacc.c:1646  */
    {
			if ( (RE_vsp[-1].int_val) < 0 )
				synerr("iteration value must be positive");
			else if ( (RE_vsp[-1].int_val) == 0 )
				{
				Unref((RE_vsp[-3].mach_val));
				(RE_val.mach_val) = new NFA_Machine(new EpsilonState());
				}
			else
				(RE_vsp[-3].mach_val)->LinkCopies((RE_vsp[-1].int_val)-1);
			}
#line 1348 "/home/benjamin/Bro/bro-2.3.1/build/src/rep.cc" /* yacc.c:1646  */
    break;

  case 15:
#line 109 "re-parse.y" /* yacc.c:1646  */
    {
			(RE_val.mach_val) = new NFA_Machine(new NFA_State(rem->AnyCCL()));
			}
#line 1356 "/home/benjamin/Bro/bro-2.3.1/build/src/rep.cc" /* yacc.c:1646  */
    break;

  case 16:
#line 114 "re-parse.y" /* yacc.c:1646  */
    {
			(RE_vsp[0].ccl_val)->Sort();
			rem->EC()->CCL_Use((RE_vsp[0].ccl_val));
			(RE_val.mach_val) = new NFA_Machine(new NFA_State((RE_vsp[0].ccl_val)));
			}
#line 1366 "/home/benjamin/Bro/bro-2.3.1/build/src/rep.cc" /* yacc.c:1646  */
    break;

  case 17:
#line 121 "re-parse.y" /* yacc.c:1646  */
    { (RE_val.mach_val) = new NFA_Machine(new NFA_State((RE_vsp[0].ccl_val))); }
#line 1372 "/home/benjamin/Bro/bro-2.3.1/build/src/rep.cc" /* yacc.c:1646  */
    break;

  case 18:
#line 124 "re-parse.y" /* yacc.c:1646  */
    { (RE_val.mach_val) = (RE_vsp[-1].mach_val); }
#line 1378 "/home/benjamin/Bro/bro-2.3.1/build/src/rep.cc" /* yacc.c:1646  */
    break;

  case 19:
#line 127 "re-parse.y" /* yacc.c:1646  */
    { (RE_val.mach_val) = (RE_vsp[-1].mach_val); }
#line 1384 "/home/benjamin/Bro/bro-2.3.1/build/src/rep.cc" /* yacc.c:1646  */
    break;

  case 20:
#line 130 "re-parse.y" /* yacc.c:1646  */
    {
			if ( case_insensitive && (RE_vsp[0].int_val) >= 'A' && (RE_vsp[0].int_val) <= 'Z' )
				(RE_vsp[0].int_val) = clower((RE_vsp[0].int_val));
			(RE_val.mach_val) = new NFA_Machine(new NFA_State((RE_vsp[0].int_val), rem->EC()));
			}
#line 1394 "/home/benjamin/Bro/bro-2.3.1/build/src/rep.cc" /* yacc.c:1646  */
    break;

  case 21:
#line 137 "re-parse.y" /* yacc.c:1646  */
    {
			(RE_val.mach_val) = new NFA_Machine(new NFA_State(SYM_BOL, rem->EC()));
			(RE_val.mach_val)->MarkBOL();
			}
#line 1403 "/home/benjamin/Bro/bro-2.3.1/build/src/rep.cc" /* yacc.c:1646  */
    break;

  case 22:
#line 143 "re-parse.y" /* yacc.c:1646  */
    {
			(RE_val.mach_val) = new NFA_Machine(new NFA_State(SYM_EOL, rem->EC()));
			(RE_val.mach_val)->MarkEOL();
			}
#line 1412 "/home/benjamin/Bro/bro-2.3.1/build/src/rep.cc" /* yacc.c:1646  */
    break;

  case 23:
#line 150 "re-parse.y" /* yacc.c:1646  */
    { (RE_val.ccl_val) = (RE_vsp[-1].ccl_val); }
#line 1418 "/home/benjamin/Bro/bro-2.3.1/build/src/rep.cc" /* yacc.c:1646  */
    break;

  case 24:
#line 153 "re-parse.y" /* yacc.c:1646  */
    {
			(RE_vsp[-1].ccl_val)->Negate();
			(RE_val.ccl_val) = (RE_vsp[-1].ccl_val);
			}
#line 1427 "/home/benjamin/Bro/bro-2.3.1/build/src/rep.cc" /* yacc.c:1646  */
    break;

  case 25:
#line 160 "re-parse.y" /* yacc.c:1646  */
    {
			if ( case_insensitive )
				{
				if ( (RE_vsp[-2].int_val) >= 'A' && (RE_vsp[-2].int_val) <= 'Z' )
					(RE_vsp[-2].int_val) = clower((RE_vsp[-2].int_val));
				if ( (RE_vsp[0].int_val) >= 'A' && (RE_vsp[0].int_val) <= 'Z' )
					(RE_vsp[0].int_val) = clower((RE_vsp[0].int_val));
				}

			if ( (RE_vsp[-2].int_val) > (RE_vsp[0].int_val) )
				synerr("negative range in character class");

			else
				{
				for ( int i = (RE_vsp[-2].int_val); i <= (RE_vsp[0].int_val); ++i )
					(RE_vsp[-3].ccl_val)->Add(i);
				}
			}
#line 1450 "/home/benjamin/Bro/bro-2.3.1/build/src/rep.cc" /* yacc.c:1646  */
    break;

  case 26:
#line 180 "re-parse.y" /* yacc.c:1646  */
    {
			if ( case_insensitive && (RE_vsp[0].int_val) >= 'A' && (RE_vsp[0].int_val) <= 'Z' )
				(RE_vsp[0].int_val) = clower((RE_vsp[0].int_val));

			(RE_vsp[-1].ccl_val)->Add((RE_vsp[0].int_val));
			}
#line 1461 "/home/benjamin/Bro/bro-2.3.1/build/src/rep.cc" /* yacc.c:1646  */
    break;

  case 28:
#line 190 "re-parse.y" /* yacc.c:1646  */
    { (RE_val.ccl_val) = curr_ccl; }
#line 1467 "/home/benjamin/Bro/bro-2.3.1/build/src/rep.cc" /* yacc.c:1646  */
    break;

  case 29:
#line 194 "re-parse.y" /* yacc.c:1646  */
    {
			for ( int c = 0; c < csize; ++c )
				if ( isascii(c) && (RE_vsp[0].cce_val)(c) )
					curr_ccl->Add(c);
			}
#line 1477 "/home/benjamin/Bro/bro-2.3.1/build/src/rep.cc" /* yacc.c:1646  */
    break;

  case 30:
#line 202 "re-parse.y" /* yacc.c:1646  */
    {
			if ( case_insensitive && (RE_vsp[0].int_val) >= 'A' && (RE_vsp[0].int_val) <= 'Z' )
				(RE_vsp[0].int_val) = clower((RE_vsp[0].int_val));

			(RE_vsp[-1].mach_val)->AppendState(new NFA_State((RE_vsp[0].int_val), rem->EC()));
			}
#line 1488 "/home/benjamin/Bro/bro-2.3.1/build/src/rep.cc" /* yacc.c:1646  */
    break;

  case 31:
#line 210 "re-parse.y" /* yacc.c:1646  */
    { (RE_val.mach_val) = new NFA_Machine(new EpsilonState()); }
#line 1494 "/home/benjamin/Bro/bro-2.3.1/build/src/rep.cc" /* yacc.c:1646  */
    break;


#line 1498 "/home/benjamin/Bro/bro-2.3.1/build/src/rep.cc" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter RE_char, and that requires
     that RE_token be updated with the new translation.  We take the
     approach of translating immediately before every use of RE_token.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering RE_char or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", RE_r1[RE_n], &RE_val, &RE_loc);

  YYPOPSTACK (RE_len);
  RE_len = 0;
  YY_STACK_PRINT (RE_ss, RE_ssp);

  *++RE_vsp = RE_val;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  RE_n = RE_r1[RE_n];

  RE_state = RE_pgoto[RE_n - YYNTOKENS] + *RE_ssp;
  if (0 <= RE_state && RE_state <= YYLAST && RE_check[RE_state] == *RE_ssp)
    RE_state = RE_table[RE_state];
  else
    RE_state = RE_defgoto[RE_n - YYNTOKENS];

  goto RE_newstate;


/*--------------------------------------.
| RE_errlab -- here on detecting error.  |
`--------------------------------------*/
RE_errlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  RE_token = RE_char == YYEMPTY ? YYEMPTY : YYTRANSLATE (RE_char);

  /* If not already recovering from an error, report this error.  */
  if (!RE_errstatus)
    {
      ++RE_nerrs;
#if ! YYERROR_VERBOSE
      RE_error (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR RE_syntax_error (&RE_msg_alloc, &RE_msg, \
                                        RE_ssp, RE_token)
      {
        char const *RE_msgp = YY_("syntax error");
        int RE_syntax_error_status;
        RE_syntax_error_status = YYSYNTAX_ERROR;
        if (RE_syntax_error_status == 0)
          RE_msgp = RE_msg;
        else if (RE_syntax_error_status == 1)
          {
            if (RE_msg != RE_msgbuf)
              YYSTACK_FREE (RE_msg);
            RE_msg = (char *) YYSTACK_ALLOC (RE_msg_alloc);
            if (!RE_msg)
              {
                RE_msg = RE_msgbuf;
                RE_msg_alloc = sizeof RE_msgbuf;
                RE_syntax_error_status = 2;
              }
            else
              {
                RE_syntax_error_status = YYSYNTAX_ERROR;
                RE_msgp = RE_msg;
              }
          }
        RE_error (RE_msgp);
        if (RE_syntax_error_status == 2)
          goto RE_exhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (RE_errstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (RE_char <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (RE_char == YYEOF)
            YYABORT;
        }
      else
        {
          RE_destruct ("Error: discarding",
                      RE_token, &RE_lval);
          RE_char = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto RE_errlab1;


/*---------------------------------------------------.
| RE_errorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
RE_errorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label RE_errorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto RE_errorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (RE_len);
  RE_len = 0;
  YY_STACK_PRINT (RE_ss, RE_ssp);
  RE_state = *RE_ssp;
  goto RE_errlab1;


/*-------------------------------------------------------------.
| RE_errlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
RE_errlab1:
  RE_errstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      RE_n = RE_pact[RE_state];
      if (!RE_pact_value_is_default (RE_n))
        {
          RE_n += YYTERROR;
          if (0 <= RE_n && RE_n <= YYLAST && RE_check[RE_n] == YYTERROR)
            {
              RE_n = RE_table[RE_n];
              if (0 < RE_n)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (RE_ssp == RE_ss)
        YYABORT;


      RE_destruct ("Error: popping",
                  RE_stos[RE_state], RE_vsp);
      YYPOPSTACK (1);
      RE_state = *RE_ssp;
      YY_STACK_PRINT (RE_ss, RE_ssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++RE_vsp = RE_lval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", RE_stos[RE_n], RE_vsp, RE_lsp);

  RE_state = RE_n;
  goto RE_newstate;


/*-------------------------------------.
| RE_acceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
RE_acceptlab:
  RE_result = 0;
  goto RE_return;

/*-----------------------------------.
| RE_abortlab -- YYABORT comes here.  |
`-----------------------------------*/
RE_abortlab:
  RE_result = 1;
  goto RE_return;

#if !defined RE_overflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| RE_exhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
RE_exhaustedlab:
  RE_error (YY_("memory exhausted"));
  RE_result = 2;
  /* Fall through.  */
#endif

RE_return:
  if (RE_char != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      RE_token = YYTRANSLATE (RE_char);
      RE_destruct ("Cleanup: discarding lookahead",
                  RE_token, &RE_lval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (RE_len);
  YY_STACK_PRINT (RE_ss, RE_ssp);
  while (RE_ssp != RE_ss)
    {
      RE_destruct ("Cleanup: popping",
                  RE_stos[*RE_ssp], RE_vsp);
      YYPOPSTACK (1);
    }
#ifndef RE_overflow
  if (RE_ss != RE_ssa)
    YYSTACK_FREE (RE_ss);
#endif
#if YYERROR_VERBOSE
  if (RE_msg != RE_msgbuf)
    YYSTACK_FREE (RE_msg);
#endif
  return RE_result;
}
#line 212 "re-parse.y" /* yacc.c:1906  */


int clower(int sym)
	{
	return (isascii(sym) && isupper(sym)) ?  tolower(sym) : sym;
	}

void synerr(const char str[])
	{
	syntax_error = true;
	reporter->Error("%s (compiling pattern /%s/)", str, RE_parse_input);
	}

void RE_error(const char msg[])
	{
	}
