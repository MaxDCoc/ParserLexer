
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 ".\\parser.y"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "parser.tab.h"

extern FILE* yyin;
extern int yylex();
void yyerror(const char* message);
int yyparse();
int cont = 0;



/* Line 189 of yacc.c  */
#line 88 "parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     DOCTYPE = 258,
     DOCTOKEN = 259,
     ARTICLE = 260,
     HTTPS = 261,
     FTPS = 262,
     HTTP = 263,
     FTP = 264,
     PORT = 265,
     DOM = 266,
     ROUTE = 267,
     FRAG = 268,
     ENDTAG_ART = 269,
     ENDTAG_S = 270,
     ENDTAG_TT1 = 271,
     ENDTAG_TT2 = 272,
     ENDTAG_TB = 273,
     ENDTAG_TH = 274,
     ENDTAG_TF = 275,
     ENDTAG_TG = 276,
     ENDTAG_ET = 277,
     ENDTAG_ETBL = 278,
     LINK = 279,
     ENDTAG_IT = 280,
     ENDTAG_SS = 281,
     ENDTAG_INFO = 282,
     ENDTAG_RW = 283,
     ENDTAG_ABS = 284,
     ENDTAG_ADD = 285,
     ENDTAG_AUT = 286,
     ENDTAG_COM = 287,
     ENDTAG_SP = 288,
     ENDTAG_EMP = 289,
     ENDTAG_P = 290,
     ENDTAG_IMP = 291,
     ENDTAG_FN = 292,
     ENDTAG_SN = 293,
     ENDTAG_ST = 294,
     ENDTAG_CT = 295,
     ENDTAG_STT = 296,
     ENDTAG_PH = 297,
     ENDTAG_EM = 298,
     ENDTAG_DT = 299,
     ENDTAG_YR = 300,
     ENDTAG_HD = 301,
     ENDTAG_IL = 302,
     ENDTAG_LI = 303,
     ENDTAG_MOBJ = 304,
     ENDTAG_CP = 305,
     ENDTAG = 306,
     SECTION = 307,
     SIMPLESECTION = 308,
     TITLE = 309,
     TITLE2 = 310,
     LISTITEM = 311,
     INFO = 312,
     TGROUP = 313,
     ENTRY = 314,
     ROW = 315,
     THEAD = 316,
     TFOOT = 317,
     TBODY = 318,
     INFORMALTABLE = 319,
     ITEMIZEDLIST = 320,
     ABSTRACT = 321,
     ADDRESS = 322,
     AUTHOR = 323,
     COMMENT = 324,
     SIMPARA = 325,
     EMPHASIS = 326,
     PARA = 327,
     IMPORTANT = 328,
     ENTRYBL = 329,
     FIRSTNAME = 330,
     SURNAME = 331,
     STREET = 332,
     CITY = 333,
     STATE = 334,
     PHONE = 335,
     EMAIL = 336,
     DATE = 337,
     YEAR = 338,
     HOLDER = 339,
     COPYRIGHT = 340,
     MEDIAOBJECT = 341,
     IMAGEDATA = 342,
     VIDEODATA = 343,
     TOKEN = 344
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 18 ".\\parser.y"

    char * texto;



/* Line 214 of yacc.c  */
#line 219 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 231 "parser.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1162

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  67
/* YYNRULES -- Number of rules.  */
#define YYNRULES  283
/* YYNRULES -- Number of states.  */
#define YYNSTATES  510

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   344

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      85,    86,    87,    88,    89
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    13,    20,    26,    32,    38,    44,
      50,    56,    62,    67,    72,    77,    82,    87,    92,    97,
     102,   107,   111,   115,   119,   123,   127,   130,   133,   136,
     139,   142,   145,   148,   151,   154,   157,   159,   161,   163,
     165,   167,   169,   171,   173,   175,   177,   179,   182,   184,
     187,   189,   196,   203,   209,   215,   221,   227,   233,   239,
     245,   250,   255,   260,   265,   270,   275,   280,   285,   290,
     294,   298,   302,   306,   310,   311,   317,   322,   327,   332,
     336,   340,   344,   348,   351,   354,   357,   360,   363,   366,
     369,   371,   373,   375,   377,   379,   381,   383,   385,   387,
     390,   393,   398,   402,   406,   409,   412,   415,   418,   421,
     424,   426,   428,   430,   432,   434,   436,   440,   443,   446,
     448,   450,   453,   455,   458,   460,   465,   469,   471,   473,
     475,   477,   479,   481,   483,   485,   487,   490,   493,   496,
     499,   501,   503,   505,   507,   511,   515,   518,   521,   524,
     527,   530,   533,   535,   537,   539,   541,   543,   545,   549,
     553,   557,   565,   572,   579,   586,   592,   598,   604,   609,
     611,   613,   615,   617,   619,   621,   624,   626,   628,   632,
     635,   638,   640,   642,   647,   651,   654,   657,   660,   663,
     665,   667,   669,   671,   675,   679,   683,   687,   691,   695,
     699,   703,   707,   711,   716,   720,   723,   726,   728,   730,
     739,   747,   755,   763,   770,   777,   784,   790,   798,   805,
     812,   819,   825,   831,   837,   842,   851,   859,   867,   875,
     882,   889,   896,   902,   910,   917,   924,   931,   937,   943,
     949,   954,   958,   961,   963,   967,   971,   975,   978,   980,
     983,   985,   991,   996,  1001,  1005,  1009,  1013,  1017,  1020,
    1022,  1026,  1029,  1032,  1034,  1036,  1041,  1045,  1049,  1052,
    1055,  1058,  1061,  1064,  1067,  1070,  1073,  1075,  1077,  1079,
    1081,  1083,  1085,  1087
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      91,     0,    -1,     3,    92,    -1,     5,    98,   111,    93,
      95,    14,    -1,     5,    98,   111,    93,    94,    14,    -1,
       5,    98,   111,    93,    14,    -1,     5,    98,   111,    95,
      14,    -1,     5,    98,   111,    94,    14,    -1,     5,    98,
      93,    95,    14,    -1,     5,    98,    93,    94,    14,    -1,
       5,   111,    93,    95,    14,    -1,     5,   111,    93,    94,
      14,    -1,     5,    98,   111,    14,    -1,     5,    98,    93,
      14,    -1,     5,   111,    93,    14,    -1,     5,    98,    95,
      14,    -1,     5,    98,    94,    14,    -1,     5,   111,    95,
      14,    -1,     5,   111,    94,    14,    -1,     5,    93,    95,
      14,    -1,     5,    93,    94,    14,    -1,     5,    98,    14,
      -1,     5,   111,    14,    -1,     5,    93,    14,    -1,     5,
      94,    14,    -1,     5,    95,    14,    -1,   141,    93,    -1,
     125,    93,    -1,   123,    93,    -1,   115,    93,    -1,   102,
      93,    -1,   137,    93,    -1,   144,    93,    -1,   114,    93,
      -1,   101,    93,    -1,   117,    93,    -1,   125,    -1,   116,
      -1,   141,    -1,   123,    -1,   115,    -1,   102,    -1,   137,
      -1,   144,    -1,   114,    -1,   101,    -1,   117,    -1,    97,
      94,    -1,    97,    -1,    96,    95,    -1,    96,    -1,    52,
      98,   112,    93,    95,    15,    -1,    52,    98,   112,    93,
      94,    15,    -1,    52,    98,   112,    93,    15,    -1,    52,
      98,   112,    95,    15,    -1,    52,    98,   112,    94,    15,
      -1,    52,    98,    93,    95,    15,    -1,    52,    98,    93,
      94,    15,    -1,    52,   112,    93,    95,    15,    -1,    52,
     112,    93,    94,    15,    -1,    52,    98,   112,    15,    -1,
      52,    98,    93,    15,    -1,    52,   112,    93,    15,    -1,
      52,    98,    95,    15,    -1,    52,    98,    94,    15,    -1,
      52,   112,    95,    15,    -1,    52,   112,    94,    15,    -1,
      52,    93,    95,    15,    -1,    52,    93,    94,    15,    -1,
      52,    98,    15,    -1,    52,   112,    15,    -1,    52,    93,
      15,    -1,    52,    94,    15,    -1,    52,    95,    15,    -1,
      -1,    53,    98,   111,    93,    26,    -1,    53,    98,   111,
      26,    -1,    53,    98,    93,    26,    -1,    53,   111,    93,
      26,    -1,    53,    98,    26,    -1,    53,   111,    26,    -1,
      53,    93,    26,    -1,    57,    99,    27,    -1,   137,    99,
      -1,   101,    99,    -1,   102,    99,    -1,   104,    99,    -1,
     134,    99,    -1,   108,    99,    -1,   111,    99,    -1,   137,
      -1,   101,    -1,   102,    -1,   104,    -1,   134,    -1,   108,
      -1,   111,    -1,   123,    -1,   115,    -1,   123,   100,    -1,
     115,   100,    -1,    66,   111,   100,    29,    -1,    66,   100,
      29,    -1,    67,   103,    30,    -1,   109,   103,    -1,   129,
     103,    -1,   130,   103,    -1,   131,   103,    -1,   132,   103,
      -1,   133,   103,    -1,   109,    -1,   129,    -1,   130,    -1,
     131,    -1,   132,    -1,   133,    -1,    68,   105,    31,    -1,
     127,   105,    -1,   128,   105,    -1,   127,    -1,   128,    -1,
     135,   106,    -1,   135,    -1,   136,   107,    -1,   136,    -1,
      85,   106,   107,    50,    -1,    85,   106,    50,    -1,    89,
      -1,    10,    -1,    12,    -1,    13,    -1,     6,    -1,     8,
      -1,     7,    -1,     9,    -1,    11,    -1,   109,   110,    -1,
     116,   110,    -1,   133,   110,    -1,   117,   110,    -1,   109,
      -1,   116,    -1,   133,    -1,   117,    -1,    54,   110,    16,
      -1,    55,   110,    17,    -1,   109,   113,    -1,   116,   113,
      -1,   133,   113,    -1,   104,   113,    -1,   114,   113,    -1,
     117,   113,    -1,   109,    -1,   116,    -1,   133,    -1,   104,
      -1,   114,    -1,   117,    -1,    69,   113,    32,    -1,    70,
     113,    33,    -1,    71,   113,    34,    -1,    24,   118,   119,
     120,   121,   122,    51,    -1,    24,   118,   119,   120,   121,
      51,    -1,    24,   118,   119,   120,   122,    51,    -1,    24,
     118,   119,   121,   122,    51,    -1,    24,   118,   119,   120,
      51,    -1,    24,   118,   119,   121,    51,    -1,    24,   118,
     119,   122,    51,    -1,    24,   118,   119,    51,    -1,     6,
      -1,     8,    -1,     9,    -1,     7,    -1,    11,    -1,    10,
      -1,    12,   121,    -1,    12,    -1,    13,    -1,    72,   124,
      35,    -1,   109,   124,    -1,    93,   124,    -1,    93,    -1,
     109,    -1,    73,   111,    93,    36,    -1,    73,    93,    36,
      -1,   109,   126,    -1,   117,   126,    -1,   116,   126,    -1,
     114,   126,    -1,   116,    -1,   114,    -1,   109,    -1,   117,
      -1,    75,   126,    37,    -1,    76,   126,    38,    -1,    77,
     126,    39,    -1,    78,   126,    40,    -1,    79,   126,    41,
      -1,    80,   126,    42,    -1,    81,   126,    43,    -1,    82,
     126,    44,    -1,    83,   126,    45,    -1,    84,   126,    46,
      -1,    86,    98,   138,    49,    -1,    86,   138,    49,    -1,
     139,   138,    -1,   140,   138,    -1,   140,    -1,   139,    -1,
      98,    88,   118,   119,   120,   121,   122,    51,    -1,    98,
      88,   118,   119,   120,   121,    51,    -1,    98,    88,   118,
     119,   120,   122,    51,    -1,    98,    88,   118,   119,   121,
     122,    51,    -1,    98,    88,   118,   119,   120,    51,    -1,
      98,    88,   118,   119,   122,    51,    -1,    98,    88,   118,
     119,   121,    51,    -1,    98,    88,   118,   119,    51,    -1,
      88,   118,   119,   120,   121,   122,    51,    -1,    88,   118,
     119,   120,   121,    51,    -1,    88,   118,   119,   120,   122,
      51,    -1,    88,   118,   119,   121,   122,    51,    -1,    88,
     118,   119,   120,    51,    -1,    88,   118,   119,   122,    51,
      -1,    88,   118,   119,   121,    51,    -1,    88,   118,   119,
      51,    -1,    98,    87,   118,   119,   120,   121,   122,    51,
      -1,    98,    87,   118,   119,   120,   121,    51,    -1,    98,
      87,   118,   119,   120,   122,    51,    -1,    98,    87,   118,
     119,   121,   122,    51,    -1,    98,    87,   118,   119,   120,
      51,    -1,    98,    87,   118,   119,   122,    51,    -1,    98,
      87,   118,   119,   121,    51,    -1,    98,    87,   118,   119,
      51,    -1,    87,   118,   119,   120,   121,   122,    51,    -1,
      87,   118,   119,   120,   121,    51,    -1,    87,   118,   119,
     120,   122,    51,    -1,    87,   118,   119,   121,   122,    51,
      -1,    87,   118,   119,   120,    51,    -1,    87,   118,   119,
     122,    51,    -1,    87,   118,   119,   121,    51,    -1,    87,
     118,   119,    51,    -1,    65,   142,    47,    -1,   143,   142,
      -1,   143,    -1,    56,    93,    48,    -1,    64,   145,    25,
      -1,    64,   146,    25,    -1,   137,   145,    -1,   137,    -1,
     147,   146,    -1,   147,    -1,    58,   148,   150,   149,    21,
      -1,    58,   150,   149,    21,    -1,    58,   148,   149,    21,
      -1,    58,   149,    21,    -1,    61,   151,    19,    -1,    63,
     151,    18,    -1,    62,   151,    20,    -1,   152,   151,    -1,
     152,    -1,    60,   153,    28,    -1,   155,   153,    -1,   154,
     153,    -1,   155,    -1,   154,    -1,    74,   148,   149,    23,
      -1,    74,   149,    23,    -1,    59,   156,    22,    -1,   109,
     156,    -1,   141,   156,    -1,   125,   156,    -1,   123,   156,
      -1,   115,   156,    -1,   137,   156,    -1,   114,   156,    -1,
     101,   156,    -1,   109,    -1,   141,    -1,   125,    -1,   123,
      -1,   115,    -1,   137,    -1,   114,    -1,   101,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    25,    25,    28,    29,    31,    33,    34,    36,    37,
      40,    41,    44,    46,    48,    50,    51,    53,    54,    56,
      57,    60,    61,    62,    63,    64,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    90,    91,    94,
      95,    98,    99,   102,   104,   105,   107,   108,   111,   112,
     115,   117,   119,   121,   122,   124,   125,   127,   128,   131,
     132,   133,   134,   135,   138,   139,   141,   143,   145,   147,
     149,   151,   155,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   174,   175,   176,
     177,   180,   181,   184,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   201,   204,   205,   206,
     207,   210,   211,   214,   215,   218,   219,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   233,   234,   235,   236,
     237,   238,   239,   240,   243,   246,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   263,   266,
     269,   272,   273,   274,   275,   276,   277,   278,   279,   282,
     283,   284,   285,   288,   291,   294,   295,   298,   301,   304,
     305,   306,   307,   310,   311,   314,   315,   316,   317,   318,
     319,   320,   321,   324,   327,   330,   333,   336,   339,   342,
     345,   348,   351,   354,   355,   358,   359,   360,   361,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   400,   403,   404,   407,   410,   411,   414,   415,   418,
     419,   423,   424,   425,   426,   429,   432,   435,   438,   439,
     442,   445,   446,   447,   448,   452,   453,   456,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DOCTYPE", "DOCTOKEN", "ARTICLE",
  "HTTPS", "FTPS", "HTTP", "FTP", "PORT", "DOM", "ROUTE", "FRAG",
  "ENDTAG_ART", "ENDTAG_S", "ENDTAG_TT1", "ENDTAG_TT2", "ENDTAG_TB",
  "ENDTAG_TH", "ENDTAG_TF", "ENDTAG_TG", "ENDTAG_ET", "ENDTAG_ETBL",
  "LINK", "ENDTAG_IT", "ENDTAG_SS", "ENDTAG_INFO", "ENDTAG_RW",
  "ENDTAG_ABS", "ENDTAG_ADD", "ENDTAG_AUT", "ENDTAG_COM", "ENDTAG_SP",
  "ENDTAG_EMP", "ENDTAG_P", "ENDTAG_IMP", "ENDTAG_FN", "ENDTAG_SN",
  "ENDTAG_ST", "ENDTAG_CT", "ENDTAG_STT", "ENDTAG_PH", "ENDTAG_EM",
  "ENDTAG_DT", "ENDTAG_YR", "ENDTAG_HD", "ENDTAG_IL", "ENDTAG_LI",
  "ENDTAG_MOBJ", "ENDTAG_CP", "ENDTAG", "SECTION", "SIMPLESECTION",
  "TITLE", "TITLE2", "LISTITEM", "INFO", "TGROUP", "ENTRY", "ROW", "THEAD",
  "TFOOT", "TBODY", "INFORMALTABLE", "ITEMIZEDLIST", "ABSTRACT", "ADDRESS",
  "AUTHOR", "COMMENT", "SIMPARA", "EMPHASIS", "PARA", "IMPORTANT",
  "ENTRYBL", "FIRSTNAME", "SURNAME", "STREET", "CITY", "STATE", "PHONE",
  "EMAIL", "DATE", "YEAR", "HOLDER", "COPYRIGHT", "MEDIAOBJECT",
  "IMAGEDATA", "VIDEODATA", "TOKEN", "$accept", "sigma", "article", "opt",
  "Ssect", "sect", "section", "simplesection", "info", "in_info", "in_abs",
  "abstract", "address", "in_ad", "author", "in_aut", "in_cr1", "in_cr2",
  "copyright", "texto", "in_tit", "title", "title2", "in_g1", "comment",
  "simpara", "emphasis", "link", "prot", "dom", "port", "route", "frag",
  "para", "in_para", "important", "in_g2", "firstname", "surname",
  "street", "city", "state", "phone", "email", "date", "year", "holder",
  "mediaobject", "media", "videoobject", "imageobject", "itemizedlist",
  "in_il", "listitem", "informaltable", "in_it1", "in_it2", "tgroup",
  "thead", "tbody", "tfoot", "add_row", "row", "in_row", "entrybl",
  "entry", "in_ent", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
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
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    94,    94,    95,
      95,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    97,    97,    97,    97,    97,    97,
      97,    97,    98,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,   100,   100,   100,
     100,   101,   101,   102,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   104,   105,   105,   105,
     105,   106,   106,   107,   107,   108,   108,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   110,   110,   110,   110,
     110,   110,   110,   110,   111,   112,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   114,   115,
     116,   117,   117,   117,   117,   117,   117,   117,   117,   118,
     118,   118,   118,   119,   120,   121,   121,   122,   123,   124,
     124,   124,   124,   125,   125,   126,   126,   126,   126,   126,
     126,   126,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   137,   138,   138,   138,   138,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   141,   142,   142,   143,   144,   144,   145,   145,   146,
     146,   147,   147,   147,   147,   148,   149,   150,   151,   151,
     152,   153,   153,   153,   153,   154,   154,   155,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   156
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     6,     6,     5,     5,     5,     5,     5,
       5,     5,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     3,     3,     3,     3,     3,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     2,
       1,     6,     6,     5,     5,     5,     5,     5,     5,     5,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     3,
       3,     3,     3,     3,     0,     5,     4,     4,     4,     3,
       3,     3,     3,     2,     2,     2,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     4,     3,     3,     2,     2,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     3,     2,     2,     1,
       1,     2,     1,     2,     1,     4,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       1,     1,     1,     1,     3,     3,     2,     2,     2,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     7,     6,     6,     6,     5,     5,     5,     4,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     3,     2,
       2,     1,     1,     4,     3,     2,     2,     2,     2,     1,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     4,     3,     2,     2,     1,     1,     8,
       7,     7,     7,     6,     6,     6,     5,     7,     6,     6,
       6,     5,     5,     5,     4,     8,     7,     7,     7,     6,
       6,     6,     5,     7,     6,     6,     6,     5,     5,     5,
       4,     3,     2,     1,     3,     3,     3,     2,     1,     2,
       1,     5,     4,     4,     3,     3,     3,     3,     2,     1,
       3,     2,     2,     1,     1,     4,     3,     3,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,    74,     2,     1,     0,    74,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,    48,     0,    45,    41,     0,
      44,    40,    37,    46,    39,    36,    42,    38,    43,   169,
     172,   170,   171,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   131,   133,   132,   134,   128,   135,   129,
     130,     0,   127,   140,     0,   141,   143,   142,     0,     0,
       0,     0,    91,    92,    93,    95,    96,    94,    90,     0,
     248,     0,     0,   250,     0,     0,   243,     0,     0,    98,
      97,     0,     0,     0,     0,     0,   110,   111,   112,   113,
     114,   115,   155,   152,     0,   156,   153,   157,   154,     0,
       0,   181,   182,     0,     0,     0,     0,     0,     0,     0,
     208,   207,    23,     0,     0,    24,    25,    49,    47,    21,
       0,     0,     0,     0,    34,    30,    22,     0,     0,     0,
      33,    29,    35,    28,    27,    31,    26,    32,   173,     0,
       0,    71,     0,     0,    72,    73,    69,     0,     0,     0,
       0,    70,     0,     0,     0,    81,    79,     0,     0,    80,
       0,   191,   190,   189,   192,     0,   136,   144,   137,   139,
     138,     0,     0,     0,   119,   120,     0,     0,     0,   122,
      82,    84,    85,    86,    88,    89,    87,    83,     0,     0,
       0,     0,     0,     0,   247,   245,   246,   249,     0,   241,
     242,   102,     0,   100,    99,     0,     0,     0,     0,   103,
     104,   105,   106,   107,   108,   109,   149,   146,   158,   150,
     147,   151,   148,   159,   160,   180,   179,   178,   184,     0,
       0,     0,     0,     0,     0,     0,   204,   205,   206,    20,
      19,    13,     0,     0,    16,    15,    12,     0,     0,     0,
      14,     0,     0,    18,    17,   174,   176,   177,   168,     0,
       0,     0,   145,    68,    67,    61,     0,     0,    64,    63,
      60,     0,     0,     0,    62,     0,     0,    66,    65,    77,
      76,     0,    78,   185,   188,   187,   186,   199,     0,     0,
     116,   117,   118,   200,     0,   126,     0,     0,   124,   121,
       0,     0,   259,     0,     0,     0,     0,   254,     0,   244,
     101,   195,   196,   197,   198,   183,     0,     0,     0,     0,
       0,     0,   203,     9,     8,     5,     0,     0,     7,     6,
      11,    10,   175,   165,     0,     0,   166,     0,   167,    57,
      56,    53,     0,     0,    55,    54,    59,    58,    75,   193,
     194,   201,     0,   125,   123,     0,     0,     0,   264,   263,
     255,   258,   257,   256,   253,     0,   252,   240,     0,     0,
       0,   224,     0,     0,     0,     0,     0,     0,     0,     4,
       3,   162,     0,   163,   164,    52,    51,   202,   283,   276,
     282,   280,   279,   278,   281,   277,     0,     0,     0,   260,
     262,   261,   251,   237,     0,     0,   239,     0,   238,   221,
       0,     0,   223,     0,   222,   232,     0,     0,     0,   216,
       0,     0,     0,     0,     0,   161,   275,   268,   274,   272,
     271,   270,   273,   269,   267,     0,   266,   234,     0,   235,
     236,   218,     0,   219,   220,   229,     0,     0,   231,     0,
     230,   213,     0,     0,   215,     0,   214,   232,     0,     0,
       0,   216,     0,     0,     0,   265,   233,   217,   226,     0,
     227,   228,   210,     0,   211,   212,   229,     0,     0,   231,
       0,   230,   213,     0,     0,   215,     0,   214,   225,   209,
     226,     0,   227,   228,   210,     0,   211,   212,   225,   209
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     4,   111,    22,    23,    24,    25,   244,    71,
      87,    27,    28,    95,   102,   183,   188,   307,    75,   171,
      64,    76,    49,   104,    30,    31,    32,    33,    43,   149,
     269,   270,   271,    34,   113,    35,   175,   184,   185,    97,
      98,    99,   100,   108,    77,   189,   308,    36,   119,   120,
     121,    37,    85,    86,    38,    81,    82,    83,   201,   202,
     203,   311,   312,   367,   368,   369,   406
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -246
static const yytype_int16 yypact[] =
{
      -1,    12,    31,   942,  -246,  -246,   142,   965,   992,   813,
     394,   -37,   -22,   427,   729,   765,   765,   765,   693,  1042,
     283,    -2,    30,    52,   -15,    26,   778,   540,   540,   803,
     540,   540,  -246,   540,   540,   540,   540,   540,   540,  -246,
    -246,  -246,  -246,   116,   813,   127,   124,   128,   862,   892,
     131,  1015,  1065,  -246,  -246,  -246,  -246,  -246,  -246,  -246,
    -246,   476,  -246,   813,   147,   813,   813,   813,   121,   476,
      89,   151,   394,   394,   394,   394,   394,   394,   394,   300,
     118,   184,   187,   162,   540,   176,   -22,   203,   222,   222,
     222,   476,   476,   476,   476,   214,   729,   729,   729,   729,
     729,   729,   765,   765,   204,   765,   765,   765,   765,   218,
     228,   693,   693,   230,   232,   540,   142,   142,   298,   226,
     283,   283,  -246,   271,   282,  -246,  -246,  -246,  -246,  -246,
      11,   313,   339,   839,  -246,  -246,  -246,    48,   350,   359,
    -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,    10,
     329,  -246,   342,   365,  -246,  -246,  -246,   206,   369,   402,
     915,  -246,   224,   414,   453,  -246,  -246,   445,  1076,  -246,
     449,   476,   476,   476,   476,   448,  -246,  -246,  -246,  -246,
    -246,   476,   476,   461,   121,   121,   451,   476,   -32,    89,
    -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,   436,   436,
     436,   305,   477,   438,  -246,  -246,  -246,  -246,   464,  -246,
    -246,  -246,   485,  -246,  -246,   479,   480,   481,   484,  -246,
    -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,
    -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,   487,
     116,   116,   142,   142,   332,   472,  -246,  -246,  -246,  -246,
    -246,  -246,   513,   516,  -246,  -246,  -246,   101,   519,   522,
    -246,   524,   525,  -246,  -246,  -246,   528,  -246,  -246,    16,
       2,   486,  -246,  -246,  -246,  -246,   531,   533,  -246,  -246,
    -246,   231,   534,   535,  -246,   536,   539,  -246,  -246,  -246,
    -246,   537,  -246,  -246,  -246,  -246,  -246,  -246,   530,   521,
    -246,  -246,  -246,  -246,   517,  -246,   476,   511,   490,  -246,
     -55,   549,   436,   550,   551,   554,   438,  -246,   557,  -246,
    -246,  -246,  -246,  -246,  -246,  -246,    14,    20,   116,   116,
     142,   142,  -246,  -246,  -246,  -246,   567,   568,  -246,  -246,
    -246,  -246,  -246,  -246,    82,   520,  -246,   532,  -246,  -246,
    -246,  -246,   569,   570,  -246,  -246,  -246,  -246,  -246,  -246,
    -246,  -246,   541,  -246,  -246,   642,   289,   560,   -55,   -55,
    -246,  -246,  -246,  -246,  -246,   571,  -246,  -246,   125,   157,
     538,  -246,   155,   180,   552,    33,   152,   116,   116,  -246,
    -246,  -246,   565,  -246,  -246,  -246,  -246,  -246,   642,   642,
     642,   642,   642,   642,   642,   642,   595,   438,   597,  -246,
    -246,  -246,  -246,  -246,   254,   574,  -246,   576,  -246,  -246,
     275,   577,  -246,   578,  -246,  -246,   178,   278,   579,  -246,
     251,   285,   584,   171,   242,  -246,  -246,  -246,  -246,  -246,
    -246,  -246,  -246,  -246,  -246,   613,  -246,  -246,   592,  -246,
    -246,  -246,   596,  -246,  -246,  -246,   315,   607,  -246,   608,
    -246,  -246,   324,   609,  -246,   610,  -246,  -246,   259,   325,
     611,  -246,   274,   326,   618,  -246,  -246,  -246,  -246,   627,
    -246,  -246,  -246,   628,  -246,  -246,  -246,   328,   630,  -246,
     631,  -246,  -246,   331,   632,  -246,   633,  -246,  -246,  -246,
    -246,   636,  -246,  -246,  -246,   647,  -246,  -246,  -246,  -246
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -246,  -246,  -246,   637,   212,   221,  -246,  -246,   340,   523,
     323,    32,   239,   626,   246,   265,   457,   401,  -246,    -9,
     343,   179,   543,   201,    53,    23,   108,   450,   -57,  -193,
    -245,   208,   146,    42,   327,   105,   -53,  -246,  -246,  -246,
    -246,  -246,  -246,   234,  -246,  -246,  -246,     0,   -35,  -246,
    -246,   292,   591,  -246,  -246,   638,   646,  -246,   344,  -200,
     512,  -186,  -246,    95,  -246,  -246,   345
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      63,   315,     1,   318,   365,    96,   103,   103,   103,   112,
      78,    80,   122,   313,   314,   267,   186,     3,   305,   366,
     265,    79,   266,   267,   265,   251,   266,   267,   266,   267,
     265,     5,   266,   267,    84,    63,    89,     7,   215,   216,
     217,   218,    72,   265,   125,   266,   267,   326,   327,    20,
       7,     8,   306,   346,    63,    90,    63,    63,    63,   240,
     241,   268,   260,     7,     8,   377,   126,   343,   105,   105,
     105,   381,    78,    78,    78,    78,    78,    78,    78,     8,
      80,   378,   382,   245,   425,   247,   248,    96,    96,    96,
      96,    96,    96,   103,   103,   267,   103,   103,   103,   103,
       7,     8,   112,   112,    72,    72,    72,    72,    72,    72,
      72,    89,    89,    89,   172,   335,   375,    65,   293,   294,
     295,   296,   172,   106,   106,   106,   371,   148,   298,   299,
      90,    90,    90,   391,   304,   385,   386,   266,   267,   154,
     426,   430,   151,   155,   172,   172,   172,   172,    39,    40,
      41,    42,    65,     7,     8,   105,   105,   165,   105,   105,
     105,   105,   265,   177,   266,   267,   408,   266,   267,   173,
     267,    65,   187,    65,    65,    65,   413,   173,   190,     7,
       8,   265,    29,   266,   267,   328,   329,    52,   468,   472,
     266,   267,    88,   267,   433,   434,   181,   182,   115,   173,
     173,   173,   173,   429,    20,   133,   419,   445,   416,   205,
     106,   106,   206,   106,   106,   106,   106,   109,   110,    46,
      79,   275,   467,   209,   172,   172,   172,   172,    47,   455,
     168,   422,   211,   123,   172,   172,   228,   128,   131,   284,
     172,   138,   124,    67,   219,   127,   351,   132,   101,    73,
     139,   233,   265,   362,   266,   267,    74,   152,     7,     8,
     158,   163,   234,   266,   267,   237,   153,   267,   238,   159,
     164,   266,   267,   387,   388,   246,     7,     8,    67,   173,
     173,   173,   173,     7,     8,   249,   266,   267,   267,   173,
     173,   267,    16,   471,    18,   173,   250,    67,   267,    67,
      67,    67,   461,   226,   227,   447,   229,   230,   231,   232,
     486,    73,    73,    73,    73,    73,    73,    73,    74,    74,
      74,    74,    74,    74,    74,   492,   451,   254,   267,   458,
     101,   101,   101,   101,   101,   101,   464,   267,   267,   267,
      10,   267,   252,    26,   267,   258,   272,    48,    51,   261,
     198,   253,   200,   255,   259,    10,   399,   273,   262,   172,
     118,   198,   199,   200,   263,   404,   478,   199,   200,   276,
     116,   117,   282,   264,   285,   482,   489,   495,   277,   500,
     274,   283,   504,   286,   278,   242,   243,   150,   401,   399,
     399,   399,   399,   399,   399,   399,   399,   398,   404,   404,
     404,   404,   404,   404,   404,   404,   176,   402,   178,   179,
     180,   212,   213,   214,   173,   345,   347,   279,   400,   330,
     331,   401,   401,   401,   401,   401,   401,   401,   401,   287,
     398,   398,   398,   398,   398,   398,   398,   398,   235,   236,
     402,   402,   402,   402,   402,   402,   402,   402,     9,   301,
     302,   400,   400,   400,   400,   400,   400,   400,   400,    66,
      13,    14,    68,   410,   411,   107,   107,   107,   288,   336,
     403,   289,   380,   384,   342,   292,    69,   344,   337,    70,
      20,     9,    53,    54,    55,    56,    57,    58,    59,    60,
     392,   297,   300,   352,    66,   303,   310,    16,   317,    18,
       6,   200,   353,   403,   403,   403,   403,   403,   403,   403,
     403,   174,   319,    66,   320,    66,    66,    66,   321,   174,
     322,   332,   323,   325,   415,   417,   324,   333,   421,   423,
     334,   428,   432,   338,   379,   383,   339,   348,   340,   341,
     266,   174,   174,   174,   174,    15,   349,    17,   350,   354,
     355,   356,   107,   107,   357,   107,   107,   107,   107,   360,
     448,   363,   361,   358,     6,    62,   452,   359,   370,   373,
     372,   393,   457,   459,   306,   374,   463,   465,   376,   470,
     474,   389,   390,   394,   395,   396,   414,   397,   409,   418,
     420,   160,   412,   427,   431,   191,   192,   193,   194,   195,
     196,   197,   479,   424,    11,    12,    13,    14,   483,    15,
      16,    17,    18,    19,   488,   490,   435,   444,   494,   496,
     446,   174,   174,   174,   174,   449,    20,   450,   453,   454,
     460,   174,   174,   501,   456,   466,   475,   174,   462,   505,
      21,   469,   473,   476,    45,    50,   309,   477,    53,    54,
      55,    56,    57,    58,    59,    60,   114,   405,   480,   481,
     484,   485,   491,   130,   134,   135,   137,   140,   141,   497,
     142,   143,   144,   145,   146,   147,   487,   210,   498,   499,
     493,   502,   503,   506,   507,   157,   162,   508,   167,   170,
     405,   405,   405,   405,   405,   405,   405,   405,   509,    53,
      54,    55,    56,    57,    58,    59,    60,    12,    13,   364,
     407,    15,    16,   316,    18,    19,     0,     6,   204,     0,
       0,   208,   220,   221,   222,   223,   224,   225,    20,   207,
       0,    62,     0,     0,     0,    53,    54,    55,    56,    57,
      58,    59,    60,   436,   437,   438,   439,   440,   441,   442,
     443,     0,   239,     0,     0,     0,   174,    11,    12,    13,
      14,     0,    15,    16,    17,    18,    19,     0,     0,     0,
     257,    53,    54,    55,    56,    57,    58,    59,    60,    20,
       0,     0,    62,     0,     0,     0,     0,     0,     0,     6,
       0,     0,   129,     0,     0,     0,     0,   281,     0,     0,
       0,     0,     6,     0,     0,   291,    91,    92,    93,    94,
      61,     0,     0,     0,     0,     0,     0,   136,    62,    53,
      54,    55,    56,    57,    58,    59,    60,     6,     0,     0,
       7,     8,     9,    68,    15,     0,    17,     6,     0,     0,
       0,     0,    11,    12,    13,    14,    61,    15,    16,    17,
      18,    19,     0,   256,    62,     7,     8,     0,     0,     0,
       0,     0,     0,     6,    20,     0,     0,    11,    12,    13,
      14,     0,    15,    16,    17,    18,    19,   156,     0,     0,
       0,     0,     0,     0,    17,     0,     6,     0,     0,    20,
       0,     7,     8,     0,    61,     0,     0,     0,     0,     0,
       0,     0,    62,    11,    12,    13,    14,   161,    15,    16,
      17,    18,    19,     0,     7,     8,     6,    44,     0,     0,
       0,     0,     0,     0,     0,    20,    11,    12,    13,    14,
     280,    15,    16,    17,    18,    19,     0,     0,     0,     6,
       0,     0,     0,     0,     7,     8,     0,     0,    20,     0,
       0,     0,     0,     0,     0,     0,    11,    12,    13,    14,
       0,    15,    16,    17,    18,    19,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    20,    11,
      12,    13,    14,     0,    15,    16,    17,    18,    19,     6,
       0,     0,     0,     0,     7,     8,     9,     0,     0,    10,
       0,    20,     0,     0,     0,     0,    11,    12,    13,    14,
       0,    15,    16,    17,    18,    19,     6,     7,     8,     0,
      44,     0,    10,     0,     0,     0,     0,     0,    20,    11,
      12,    13,    14,     0,    15,    16,    17,    18,    19,     6,
       0,   166,     0,     0,     0,     0,     9,     0,     0,    10,
       0,    20,     0,     0,     0,     0,    11,    12,    13,    14,
       0,    15,    16,    17,    18,    19,     6,     0,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,    20,    11,
      12,    13,    14,     0,    15,    16,    17,    18,    19,     6,
       0,   169,     0,     0,     0,     0,     9,     0,     0,     0,
       6,    20,   290,     0,     0,     0,    11,    12,    13,    14,
       0,    15,    16,    17,    18,    19,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    20,    11,
      12,    13,    14,     0,    15,    16,    17,    18,    19,     0,
      11,    12,    13,    14,     0,    15,    16,    17,    18,    19,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    20
};

static const yytype_int16 yycheck[] =
{
       9,   201,     3,   203,    59,    14,    15,    16,    17,    18,
      10,    11,    14,   199,   200,    13,    69,     5,    50,    74,
      10,    58,    12,    13,    10,    14,    12,    13,    12,    13,
      10,     0,    12,    13,    56,    44,    13,    52,    91,    92,
      93,    94,    10,    10,    14,    12,    13,   240,   241,    86,
      52,    53,    84,    51,    63,    13,    65,    66,    67,   116,
     117,    51,    14,    52,    53,    51,    14,    51,    15,    16,
      17,    51,    72,    73,    74,    75,    76,    77,    78,    53,
      80,   326,   327,   118,    51,   120,   121,    96,    97,    98,
      99,   100,   101,   102,   103,    13,   105,   106,   107,   108,
      52,    53,   111,   112,    72,    73,    74,    75,    76,    77,
      78,    88,    89,    90,    61,    14,   316,     9,   171,   172,
     173,   174,    69,    15,    16,    17,   312,    11,   181,   182,
      88,    89,    90,    51,   187,   328,   329,    12,    13,    15,
     385,   386,    15,    15,    91,    92,    93,    94,     6,     7,
       8,     9,    44,    52,    53,   102,   103,    26,   105,   106,
     107,   108,    10,    16,    12,    13,   366,    12,    13,    61,
      13,    63,    83,    65,    66,    67,    51,    69,    27,    52,
      53,    10,     3,    12,    13,   242,   243,     8,   433,   434,
      12,    13,    13,    13,   387,   388,    75,    76,    19,    91,
      92,    93,    94,    51,    86,    26,    51,   407,    51,    25,
     102,   103,    25,   105,   106,   107,   108,    16,    17,     7,
      58,    15,    51,    47,   171,   172,   173,   174,     7,    51,
      51,    51,    29,    21,   181,   182,    32,    25,    26,    15,
     187,    29,    21,     9,    30,    24,    15,    26,    14,    10,
      29,    33,    10,   306,    12,    13,    10,    45,    52,    53,
      48,    49,    34,    12,    13,    35,    45,    13,    36,    48,
      49,    12,    13,   330,   331,    49,    52,    53,    44,   171,
     172,   173,   174,    52,    53,    14,    12,    13,    13,   181,
     182,    13,    70,    51,    72,   187,    14,    63,    13,    65,
      66,    67,    51,   102,   103,    51,   105,   106,   107,   108,
      51,    72,    73,    74,    75,    76,    77,    78,    72,    73,
      74,    75,    76,    77,    78,    51,    51,    14,    13,    51,
      96,    97,    98,    99,   100,   101,    51,    13,    13,    13,
      57,    13,   130,     3,    13,   133,    17,     7,     8,   137,
      61,   130,    63,    14,   133,    57,   365,    15,   137,   306,
      20,    61,    62,    63,    14,   365,    51,    62,    63,   157,
      87,    88,   160,    14,   162,    51,    51,    51,   157,    51,
      15,   160,    51,   162,    15,    87,    88,    44,   365,   398,
     399,   400,   401,   402,   403,   404,   405,   365,   398,   399,
     400,   401,   402,   403,   404,   405,    63,   365,    65,    66,
      67,    88,    89,    90,   306,   269,   270,    15,   365,    87,
      88,   398,   399,   400,   401,   402,   403,   404,   405,    15,
     398,   399,   400,   401,   402,   403,   404,   405,   111,   112,
     398,   399,   400,   401,   402,   403,   404,   405,    54,   184,
     185,   398,   399,   400,   401,   402,   403,   404,   405,     9,
      66,    67,    68,   368,   369,    15,    16,    17,    15,   257,
     365,    26,   326,   327,   266,    26,    82,   269,   257,    85,
      86,    54,     6,     7,     8,     9,    10,    11,    12,    13,
     344,    43,    31,   281,    44,    44,    60,    70,    21,    72,
      24,    63,   281,   398,   399,   400,   401,   402,   403,   404,
     405,    61,    48,    63,    29,    65,    66,    67,    39,    69,
      40,    49,    41,    36,   378,   379,    42,    14,   382,   383,
      14,   385,   386,    14,   326,   327,    14,    51,    14,    14,
      12,    91,    92,    93,    94,    69,    15,    71,    15,    15,
      15,    15,   102,   103,    15,   105,   106,   107,   108,    38,
     414,    50,    45,    26,    24,    89,   420,    37,    19,    18,
      20,    51,   426,   427,    84,    21,   430,   431,    21,   433,
     434,    14,    14,    51,    15,    15,   378,    46,    28,    51,
     382,    48,    21,   385,   386,    72,    73,    74,    75,    76,
      77,    78,   456,    51,    64,    65,    66,    67,   462,    69,
      70,    71,    72,    73,   468,   469,    51,    22,   472,   473,
      23,   171,   172,   173,   174,    51,    86,    51,    51,    51,
      51,   181,   182,   487,   426,    51,    23,   187,   430,   493,
       3,   433,   434,    51,     7,     8,   189,    51,     6,     7,
       8,     9,    10,    11,    12,    13,    19,   365,    51,    51,
      51,    51,    51,    26,    27,    28,    29,    30,    31,    51,
      33,    34,    35,    36,    37,    38,   468,    86,    51,    51,
     472,    51,    51,    51,    51,    48,    49,    51,    51,    52,
     398,   399,   400,   401,   402,   403,   404,   405,    51,     6,
       7,     8,     9,    10,    11,    12,    13,    65,    66,   308,
     366,    69,    70,   201,    72,    73,    -1,    24,    80,    -1,
      -1,    84,    96,    97,    98,    99,   100,   101,    86,    83,
      -1,    89,    -1,    -1,    -1,     6,     7,     8,     9,    10,
      11,    12,    13,   398,   399,   400,   401,   402,   403,   404,
     405,    -1,   115,    -1,    -1,    -1,   306,    64,    65,    66,
      67,    -1,    69,    70,    71,    72,    73,    -1,    -1,    -1,
     133,     6,     7,     8,     9,    10,    11,    12,    13,    86,
      -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      -1,    -1,    14,    -1,    -1,    -1,    -1,   160,    -1,    -1,
      -1,    -1,    24,    -1,    -1,   168,    77,    78,    79,    80,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    14,    89,     6,
       7,     8,     9,    10,    11,    12,    13,    24,    -1,    -1,
      52,    53,    54,    68,    69,    -1,    71,    24,    -1,    -1,
      -1,    -1,    64,    65,    66,    67,    81,    69,    70,    71,
      72,    73,    -1,    14,    89,    52,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    86,    -1,    -1,    64,    65,    66,
      67,    -1,    69,    70,    71,    72,    73,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    24,    -1,    -1,    86,
      -1,    52,    53,    -1,    81,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    64,    65,    66,    67,    15,    69,    70,
      71,    72,    73,    -1,    52,    53,    24,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    64,    65,    66,    67,
      15,    69,    70,    71,    72,    73,    -1,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    52,    53,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,
      -1,    69,    70,    71,    72,    73,    24,    52,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    64,
      65,    66,    67,    -1,    69,    70,    71,    72,    73,    24,
      -1,    -1,    -1,    -1,    52,    53,    54,    -1,    -1,    57,
      -1,    86,    -1,    -1,    -1,    -1,    64,    65,    66,    67,
      -1,    69,    70,    71,    72,    73,    24,    52,    53,    -1,
      55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    86,    64,
      65,    66,    67,    -1,    69,    70,    71,    72,    73,    24,
      -1,    26,    -1,    -1,    -1,    -1,    54,    -1,    -1,    57,
      -1,    86,    -1,    -1,    -1,    -1,    64,    65,    66,    67,
      -1,    69,    70,    71,    72,    73,    24,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    64,
      65,    66,    67,    -1,    69,    70,    71,    72,    73,    24,
      -1,    26,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      24,    86,    26,    -1,    -1,    -1,    64,    65,    66,    67,
      -1,    69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    64,
      65,    66,    67,    -1,    69,    70,    71,    72,    73,    -1,
      64,    65,    66,    67,    -1,    69,    70,    71,    72,    73,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    91,     5,    92,     0,    24,    52,    53,    54,
      57,    64,    65,    66,    67,    69,    70,    71,    72,    73,
      86,    93,    94,    95,    96,    97,    98,   101,   102,   111,
     114,   115,   116,   117,   123,   125,   137,   141,   144,     6,
       7,     8,     9,   118,    55,    93,    94,    95,    98,   112,
      93,    98,   111,     6,     7,     8,     9,    10,    11,    12,
      13,    81,    89,   109,   110,   116,   117,   133,    68,    82,
      85,    99,   101,   102,   104,   108,   111,   134,   137,    58,
     137,   145,   146,   147,    56,   142,   143,   100,   111,   115,
     123,    77,    78,    79,    80,   103,   109,   129,   130,   131,
     132,   133,   104,   109,   113,   114,   116,   117,   133,   113,
     113,    93,   109,   124,    93,   111,    87,    88,    98,   138,
     139,   140,    14,    94,    95,    14,    14,    95,    94,    14,
      93,    94,    95,   111,    93,    93,    14,    93,    94,    95,
      93,    93,    93,    93,    93,    93,    93,    93,    11,   119,
     110,    15,    94,    95,    15,    15,    15,    93,    94,    95,
     112,    15,    93,    94,    95,    26,    26,    93,   111,    26,
      93,   109,   114,   116,   117,   126,   110,    16,   110,   110,
     110,    75,    76,   105,   127,   128,   126,    83,   106,   135,
      27,    99,    99,    99,    99,    99,    99,    99,    61,    62,
      63,   148,   149,   150,   145,    25,    25,   146,    93,    47,
     142,    29,   100,   100,   100,   126,   126,   126,   126,    30,
     103,   103,   103,   103,   103,   103,   113,   113,    32,   113,
     113,   113,   113,    33,    34,   124,   124,    35,    36,    93,
     118,   118,    87,    88,    98,   138,    49,   138,   138,    14,
      14,    14,    94,    95,    14,    14,    14,    93,    94,    95,
      14,    94,    95,    14,    14,    10,    12,    13,    51,   120,
     121,   122,    17,    15,    15,    15,    94,    95,    15,    15,
      15,    93,    94,    95,    15,    94,    95,    15,    15,    26,
      26,    93,    26,   126,   126,   126,   126,    43,   126,   126,
      31,   105,   105,    44,   126,    50,    84,   107,   136,   106,
      60,   151,   152,   151,   151,   149,   150,    21,   149,    48,
      29,    39,    40,    41,    42,    36,   119,   119,   118,   118,
      87,    88,    49,    14,    14,    14,    94,    95,    14,    14,
      14,    14,   121,    51,   121,   122,    51,   122,    51,    15,
      15,    15,    94,    95,    15,    15,    15,    15,    26,    37,
      38,    45,   126,    50,   107,    59,    74,   153,   154,   155,
      19,   151,    20,    18,    21,   149,    21,    51,   120,   121,
     122,    51,   120,   121,   122,   119,   119,   118,   118,    14,
      14,    51,   122,    51,    51,    15,    15,    46,   101,   109,
     114,   115,   123,   125,   137,   141,   156,   148,   149,    28,
     153,   153,    21,    51,   121,   122,    51,   122,    51,    51,
     121,   122,    51,   122,    51,    51,   120,   121,   122,    51,
     120,   121,   122,   119,   119,    51,   156,   156,   156,   156,
     156,   156,   156,   156,    22,   149,    23,    51,   122,    51,
      51,    51,   122,    51,    51,    51,   121,   122,    51,   122,
      51,    51,   121,   122,    51,   122,    51,    51,   120,   121,
     122,    51,   120,   121,   122,    23,    51,    51,    51,   122,
      51,    51,    51,   122,    51,    51,    51,   121,   122,    51,
     122,    51,    51,   121,   122,    51,   122,    51,    51,    51,
      51,   122,    51,    51,    51,   122,    51,    51,    51,    51
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
      

/* Line 1455 of yacc.c  */
#line 2063 "parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 476 ".\\parser.y"



void yyerror(const char* message) {
    printf("%s\n", message);
    cont +=1;
}


int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("ERROR: No fue proporcionado un archivo de entrada");
        return 1;
    }

    FILE* input_file = fopen(argv[1], "r");
    if (!input_file) {
        printf("No se pudo abrir el archivo: %s\n", argv[1]);
        return 1;
    }

    yyin = input_file;  // Establece el archivo de entrada para Flex

    yyparse();

    fclose(input_file);

    if (!cont) printf("Felicidades, analisis sintactico/lexico exitoso!\n");
    return 0;
}
