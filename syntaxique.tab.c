
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
#line 1 "syntaxique.y"
  
     extern int depth;
	 extern int top();
	 extern int pop();
     int nbLlignes = 1;
     int nbColonne = 1;
     int x=1;
     char pza[40];
     int finwhile,ok,compo,finfor;
     int i,f,b,string,sauv_bz,sauv_bz1;

     char sauvType[20];
     char sauvType2[20];
     char sauvType3[20];
     char tld[20];

     char sauvidf[20];
     char sauvcon[20];
     

     int ping,deb,deb1,affectationctt,arith;
     int p,afecct,taille,pk,ps,pm,pd;
     
     char rd[10];
     char rf[20];
     int deb_else=0;
     int qc=0;
     int Fin_if=0;
     char tmp[20];
     char kp[30];
     int sauvg;

     int cpt1=0, stack1 [100];
     int cpt2=0, stack2 [100];
     int cpt3=0, stack3 [100];
     int cpt4=0, stack4 [100];

     void push1 (int i) 
 	{
   		if (++cpt1<100) stack1[cpt1]= i;
   		else {printf ("error: stack1 overflow\n"); exit(1);}
 	}
 	
 	int pop1 () 
 	{
   		if (cpt1>-1) return stack1[cpt1--];
   		else {printf ("error: stack1 underflow\n"); exit(1);}
 	}
    void push2 (int i) 
 	{
   		if (++cpt2<100) stack2[cpt2]= i;
   		else {printf ("error: stack2 overflow\n"); exit(1);}
 	}
 	
 	int pop2 () 
 	{
   		if (cpt2>-1) return stack2[cpt2--];
   		else {printf ("error: stack2 underflow\n"); exit(1);}
 	}
    void push3 (int i) 
 	{
   		if (++cpt3<100) stack3[cpt3]= i;
   		else {printf ("error: stack3 overflow\n"); exit(1);}
 	}
 	
 	int pop3 () 
 	{
   		if (cpt3>-1) return stack3[cpt3--];
   		else {printf ("error: stack3 underflow\n"); exit(1);}
 	}

     void resetDepth()
	{
		while(top()) pop();
		depth = 1;
	}
    

/* Line 189 of yacc.c  */
#line 152 "syntaxique.tab.c"

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
     IDF = 258,
     Int = 259,
     mcInt = 260,
     Float = 261,
     mcFloat = 262,
     Bool = 263,
     mcBool = 264,
     Char = 265,
     mcChar = 266,
     Aff = 267,
     mc_closeParanthesis = 268,
     mc_openParanthesis = 269,
     mc_closeBracket = 270,
     mc_openBracket = 271,
     Add = 272,
     Sub = 273,
     And = 274,
     Or = 275,
     Not = 276,
     Greater = 277,
     Lower = 278,
     Equal = 279,
     notEqual = 280,
     GreaterOrEqual = 281,
     LowerOrEqual = 282,
     Mul = 283,
     Div = 284,
     Indent = 285,
     mc_if = 286,
     mc_elif = 287,
     mc_else = 288,
     mc_in = 289,
     mc_while = 290,
     mc_colon = 291,
     mc_comma = 292,
     mc_range = 293,
     mc_for = 294,
     mc_newline = 295,
     Dedent = 296,
     Nodent = 297
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 78 "syntaxique.y"

int entier;
float reel;
char* str;
int depth;



/* Line 214 of yacc.c  */
#line 239 "syntaxique.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 251 "syntaxique.tab.c"

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
#define YYFINAL  53
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   273

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNRULES -- Number of states.  */
#define YYNSTATES  170

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   297

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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    13,    14,    16,    18,
      21,    24,    27,    32,    36,    39,    41,    47,    54,    61,
      63,    65,    67,    69,    71,    73,    74,    81,    83,    84,
      91,    92,    97,    98,    99,   106,   108,   113,   114,   127,
     134,   138,   140,   143,   145,   146,   149,   152,   155,   158,
     160,   162,   164,   166,   168,   170,   171,   172,   178,   179,
     180,   186,   187,   188,   194,   195,   196,   202,   206,   210,
     212,   214,   216,   221,   226,   230,   234,   238,   242,   246,
     250,   254,   256,   259,   261,   263,   265,   267,   269,   270,
     272,   276,   278,   281
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      44,     0,    -1,    45,    -1,    40,    45,    -1,    -1,    47,
      46,    45,    -1,    -1,    48,    -1,    52,    -1,    49,    40,
      -1,    80,    40,    -1,    69,    40,    -1,    68,     3,    67,
      51,    -1,     3,    67,    51,    -1,    68,     3,    -1,    50,
      -1,    68,     3,    16,     4,    15,    -1,     3,    16,     4,
      15,    67,    51,    -1,     3,    16,     3,    15,    67,    51,
      -1,    81,    -1,    69,    -1,    80,    -1,    53,    -1,    59,
      -1,    63,    -1,    -1,    31,    80,    54,    36,    62,    55,
      -1,    57,    -1,    -1,    32,    80,    56,    36,    62,    55,
      -1,    -1,    33,    36,    58,    62,    -1,    -1,    -1,    35,
      60,    80,    61,    36,    62,    -1,    48,    -1,    40,    30,
      47,    65,    -1,    -1,    39,     3,    34,    38,    14,     4,
      37,     4,    13,    64,    36,    62,    -1,    39,     3,    34,
       3,    36,    62,    -1,    42,    47,    65,    -1,    66,    -1,
      41,    47,    -1,    41,    -1,    -1,    17,    12,    -1,    18,
      12,    -1,    28,    12,    -1,    29,    12,    -1,    12,    -1,
       5,    -1,     9,    -1,    11,    -1,     7,    -1,    78,    -1,
      -1,    -1,    69,    70,    17,    71,    78,    -1,    -1,    -1,
      69,    72,    18,    73,    78,    -1,    -1,    -1,    69,    74,
      28,    75,    78,    -1,    -1,    -1,    69,    76,    29,    77,
      78,    -1,    69,    25,    69,    -1,    14,    69,    13,    -1,
       3,    -1,    81,    -1,    79,    -1,     3,    16,     4,    15,
      -1,     3,    16,     3,    15,    -1,    83,    20,    83,    -1,
      83,    19,    83,    -1,    69,    23,    69,    -1,    69,    22,
      69,    -1,    69,    26,    69,    -1,    69,    27,    69,    -1,
      69,    34,     3,    -1,    83,    -1,    82,     4,    -1,     6,
      -1,     8,    -1,    10,    -1,    17,    -1,    18,    -1,    -1,
      84,    -1,    69,    24,    69,    -1,     8,    -1,    21,    84,
      -1,    14,    80,    13,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    98,    98,   100,   101,   101,   102,   104,   105,   107,
     108,   109,   112,   122,   144,   147,   150,   160,   175,   188,
     189,   190,   193,   194,   195,   198,   198,   201,   202,   202,
     205,   205,   208,   208,   208,   211,   212,   215,   215,   223,
     231,   232,   235,   236,   237,   241,   242,   243,   244,   245,
     249,   250,   251,   252,   256,   257,   273,   257,   283,   297,
     283,   307,   321,   307,   331,   345,   331,   355,   356,   359,
     375,   376,   379,   401,   418,   419,   420,   421,   422,   423,
     424,   425,   428,   433,   434,   435,   439,   440,   441,   445,
     446,   447,   451,   452
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDF", "Int", "mcInt", "Float",
  "mcFloat", "Bool", "mcBool", "Char", "mcChar", "Aff",
  "mc_closeParanthesis", "mc_openParanthesis", "mc_closeBracket",
  "mc_openBracket", "Add", "Sub", "And", "Or", "Not", "Greater", "Lower",
  "Equal", "notEqual", "GreaterOrEqual", "LowerOrEqual", "Mul", "Div",
  "Indent", "mc_if", "mc_elif", "mc_else", "mc_in", "mc_while", "mc_colon",
  "mc_comma", "mc_range", "mc_for", "mc_newline", "Dedent", "Nodent",
  "$accept", "S", "Corps", "$@1", "Suite_Corps", "inst_base", "Dec",
  "DecT", "Affectation", "boucle_con", "if_exp", "$@2", "elif_exp", "$@3",
  "else_exp", "$@4", "while_stmt", "$@5", "$@6", "body", "for_stmt", "$@7",
  "next", "end_next", "signe_aff", "mcCode", "arith_exp", "$@8", "$@9",
  "$@10", "$@11", "$@12", "$@13", "$@14", "$@15", "term", "Tableau_indexe",
  "bool_exp", "right_factor", "Signe", "bool_term", "factore", 0
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
     295,   296,   297
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    43,    44,    45,    46,    45,    45,    47,    47,    48,
      48,    48,    49,    49,    49,    49,    50,    50,    50,    51,
      51,    51,    52,    52,    52,    54,    53,    55,    56,    55,
      58,    57,    60,    61,    59,    62,    62,    64,    63,    63,
      65,    65,    66,    66,    66,    67,    67,    67,    67,    67,
      68,    68,    68,    68,    69,    70,    71,    69,    72,    73,
      69,    74,    75,    69,    76,    77,    69,    69,    69,    78,
      78,    78,    79,    79,    80,    80,    80,    80,    80,    80,
      80,    80,    81,    81,    81,    81,    82,    82,    82,    83,
      83,    83,    84,    84
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     3,     0,     1,     1,     2,
       2,     2,     4,     3,     2,     1,     5,     6,     6,     1,
       1,     1,     1,     1,     1,     0,     6,     1,     0,     6,
       0,     4,     0,     0,     6,     1,     4,     0,    12,     6,
       3,     1,     2,     1,     0,     2,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     0,     0,     5,     0,     0,
       5,     0,     0,     5,     0,     0,     5,     3,     3,     1,
       1,     1,     4,     4,     3,     3,     3,     3,     3,     3,
       3,     1,     2,     1,     1,     1,     1,     1,     0,     1,
       3,     1,     2,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,    69,    50,    83,    53,    84,    51,    85,    52,    88,
      86,    87,     0,    88,    32,     0,     6,     0,     2,     4,
       7,     0,    15,     8,    22,    23,    24,     0,    55,    54,
      71,     0,    70,     0,    81,    89,    49,     0,     0,     0,
       0,     0,    88,    69,    55,     0,    88,    92,    55,    25,
      88,     0,     3,     1,     6,     9,    14,    88,    88,    88,
      88,    88,    88,     0,    11,     0,     0,     0,     0,    10,
      82,    88,    88,     0,     0,    45,    46,    47,    48,    13,
      20,    21,    70,     0,    68,    93,     0,    33,     0,     5,
       0,    88,    84,    88,    77,    76,    90,    67,    78,    79,
      80,    56,    59,    62,    65,    55,    75,    74,    73,    72,
       0,     0,    88,     0,     0,     0,     0,    12,    55,    88,
      88,    88,    88,    88,    88,    73,    72,     0,    35,     0,
      88,    88,     0,    16,    57,    60,    63,    66,    18,    17,
      88,    88,     0,    26,    27,    34,    39,     0,    44,    28,
      30,     0,    43,    88,    36,    41,     0,    88,     0,    42,
      44,    88,    31,    37,    40,     0,     0,    29,    88,    38
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    17,    18,    54,    19,    20,    21,    22,    79,    23,
      24,    86,   143,   156,   144,   157,    25,    50,   113,   129,
      26,   166,   154,   155,    42,    27,    28,    65,   119,    66,
     120,    67,   121,    68,   122,    29,    30,    31,    32,    33,
      34,    35
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -140
static const yytype_int16 yypact[] =
{
      85,    93,  -140,  -140,  -140,    37,  -140,  -140,  -140,     9,
    -140,  -140,     4,     9,  -140,     3,    85,    16,  -140,  -140,
    -140,   -18,  -140,  -140,  -140,  -140,  -140,    21,   166,  -140,
    -140,     5,  -140,    54,     1,  -140,  -140,    28,    52,    60,
      62,    65,     9,    64,   185,    68,     9,  -140,   225,  -140,
       9,    49,  -140,  -140,    85,  -140,   217,   164,   164,   164,
     164,   164,   164,   101,  -140,    90,    94,    80,    84,  -140,
    -140,     9,     9,   104,   108,  -140,  -140,  -140,  -140,  -140,
     198,  -140,    91,    39,  -140,  -140,    97,  -140,     8,  -140,
     126,     9,  -140,   164,    50,    50,    50,    50,    50,    50,
    -140,  -140,  -140,  -140,  -140,   212,  -140,  -140,   168,   168,
     128,   129,   131,   110,   111,   136,   145,  -140,   242,   255,
     255,   255,   255,     9,     9,  -140,  -140,   133,  -140,    38,
     131,   131,   157,  -140,  -140,  -140,  -140,  -140,  -140,  -140,
     148,     9,   132,  -140,  -140,  -140,  -140,   127,    56,  -140,
    -140,   169,   148,   148,  -140,  -140,   139,   131,   163,  -140,
      56,   131,  -140,  -140,  -140,    38,   141,  -140,   131,  -140
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -140,  -140,    -7,  -140,  -139,  -102,  -140,  -140,   -89,  -140,
    -140,  -140,    34,  -140,  -140,  -140,  -140,  -140,  -140,   -92,
    -140,  -140,    41,  -140,   -48,  -140,    -9,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,  -140,     7,  -140,    -6,   -37,  -140,
      29,   190
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -92
static const yytype_int16 yytable[] =
{
      44,   148,   117,    45,    48,    82,    51,    49,    91,    52,
     128,   114,    43,   159,   160,     3,    53,     5,    46,     7,
      71,    72,    55,     9,    56,    12,    10,    11,   128,   128,
      12,    73,    74,    80,   138,   139,    81,    48,   145,   146,
      45,    48,   110,   111,    87,    69,   115,    89,    94,    95,
      96,    97,    98,    99,    82,   128,   -91,   -91,    70,   128,
     123,   124,   105,   105,    75,   162,   128,   -55,   -58,   165,
     141,   142,    76,   -91,    77,    60,   169,    78,   -61,   -64,
      83,    85,    80,    88,   118,    81,    82,    82,     1,   -88,
       2,     3,     4,     5,     6,     7,     8,   152,   153,     9,
     106,   107,    10,    11,   100,    36,    12,   101,   103,    37,
      38,    39,   102,   104,    80,    80,    13,    81,    81,   108,
      14,    40,    41,   109,    15,    16,   134,   135,   136,   137,
     116,   -19,    48,   112,     1,   149,     2,     3,     4,     5,
       6,     7,     8,   125,   126,     9,   130,   131,    10,    11,
     132,     1,    12,     2,     3,     4,     5,     6,     7,     8,
     133,   147,     9,   140,   151,    10,    11,    43,   150,    12,
       3,   127,    92,   158,     7,   161,   163,   168,    93,    13,
      36,    10,    11,    14,   -58,    38,    39,    15,    57,    58,
      59,    60,    61,    62,   -61,   -64,    40,    41,    84,   167,
      63,   164,    47,   -58,     0,     0,    64,    57,    58,    59,
      60,    61,    62,   -61,   -64,   -55,   -58,     0,     0,    63,
      57,    58,    59,    60,    61,    62,   -61,   -64,     0,    36,
     -58,     0,    63,    90,    38,    39,    59,    60,     0,     0,
     -61,   -64,     0,   -58,     0,    40,    41,    57,    58,    59,
      60,    61,    62,   -61,   -64,    84,     0,     0,    43,    63,
     -58,     3,     0,    92,     0,     7,     0,    60,     0,     0,
     -61,   -64,    10,    11
};

static const yytype_int16 yycheck[] =
{
       9,   140,    91,     9,    13,    42,     3,    13,    56,    16,
     112,     3,     3,   152,   153,     6,     0,     8,    14,    10,
      19,    20,    40,    14,     3,    21,    17,    18,   130,   131,
      21,     3,     4,    42,   123,   124,    42,    46,   130,   131,
      46,    50,     3,     4,    50,    40,    38,    54,    57,    58,
      59,    60,    61,    62,    91,   157,    19,    20,     4,   161,
     108,   109,    71,    72,    12,   157,   168,    17,    18,   161,
      32,    33,    12,    36,    12,    25,   168,    12,    28,    29,
      16,    13,    91,    34,    93,    91,   123,   124,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    41,    42,    14,
      71,    72,    17,    18,     3,    12,    21,    17,    28,    16,
      17,    18,    18,    29,   123,   124,    31,   123,   124,    15,
      35,    28,    29,    15,    39,    40,   119,   120,   121,   122,
       4,    40,   141,    36,     3,   141,     5,     6,     7,     8,
       9,    10,    11,    15,    15,    14,    36,    36,    17,    18,
      14,     3,    21,     5,     6,     7,     8,     9,    10,    11,
      15,     4,    14,    30,    37,    17,    18,     3,    36,    21,
       6,    40,     8,     4,    10,    36,    13,    36,    14,    31,
      12,    17,    18,    35,    18,    17,    18,    39,    22,    23,
      24,    25,    26,    27,    28,    29,    28,    29,    13,   165,
      34,   160,    12,    18,    -1,    -1,    40,    22,    23,    24,
      25,    26,    27,    28,    29,    17,    18,    -1,    -1,    34,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    12,
      18,    -1,    34,    16,    17,    18,    24,    25,    -1,    -1,
      28,    29,    -1,    18,    -1,    28,    29,    22,    23,    24,
      25,    26,    27,    28,    29,    13,    -1,    -1,     3,    34,
      18,     6,    -1,     8,    -1,    10,    -1,    25,    -1,    -1,
      28,    29,    17,    18
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     6,     7,     8,     9,    10,    11,    14,
      17,    18,    21,    31,    35,    39,    40,    44,    45,    47,
      48,    49,    50,    52,    53,    59,    63,    68,    69,    78,
      79,    80,    81,    82,    83,    84,    12,    16,    17,    18,
      28,    29,    67,     3,    69,    80,    14,    84,    69,    80,
      60,     3,    45,     0,    46,    40,     3,    22,    23,    24,
      25,    26,    27,    34,    40,    70,    72,    74,    76,    40,
       4,    19,    20,     3,     4,    12,    12,    12,    12,    51,
      69,    80,    81,    16,    13,    13,    54,    80,    34,    45,
      16,    67,     8,    14,    69,    69,    69,    69,    69,    69,
       3,    17,    18,    28,    29,    69,    83,    83,    15,    15,
       3,     4,    36,    61,     3,    38,     4,    51,    69,    71,
      73,    75,    77,    67,    67,    15,    15,    40,    48,    62,
      36,    36,    14,    15,    78,    78,    78,    78,    51,    51,
      30,    32,    33,    55,    57,    62,    62,     4,    47,    80,
      36,    37,    41,    42,    65,    66,    56,    58,     4,    47,
      47,    36,    62,    13,    65,    62,    64,    55,    36,    62
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
        case 2:

/* Line 1455 of yacc.c  */
#line 98 "syntaxique.y"
    {printf("programme effectue sans aucune faute syntaxique\n");;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 101 "syntaxique.y"
    {resetDepth();;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 112 "syntaxique.y"
    { if(double_declaration((yyvsp[(2) - (4)].str))==0)
                                             {
                                                inserer_type((yyvsp[(2) - (4)].str),sauvType);
                                                if(strcmp(sauvType2,sauvType)!=0) 
                                                    printf("----------------ERREUR SEMANTIQEU: Incompatiblite de type a la ligne %d\n",nbLlignes-1);
                                                else {quadr("=",sauvidf,"",(yyvsp[(2) - (4)].str));}
                                              }
                                           else 
                                           printf("----------------ERREUR SEMANTIQEU: Double Declaration de %s a la ligne %d\n",(yyvsp[(2) - (4)].str),nbLlignes-1);
                                           ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 122 "syntaxique.y"
    { if(double_declaration((yyvsp[(1) - (3)].str))==0) 
                                        {
                                            inserer_type((yyvsp[(1) - (3)].str),sauvType2);
                                            quadr("=",sauvidf,"",(yyvsp[(1) - (3)].str));
                                        }
                                    else if(p==1)// si c'est qu'une affectation(X=4.5 avec x entier) alors on teste 
                                    {
                                        p=0;
                                        if(strcmp(sauvType2,(char *)get_type((yyvsp[(1) - (3)].str)))!=0)  
                                        {
                                            printf("----------------ERREUR SEMANTIQEU: Incompatiblite de type a la ligne %d\n",nbLlignes-1);
                                        }
                                        else
                                        {
                                            quadr("=",sauvidf,"",(yyvsp[(1) - (3)].str));                                       
                                        }                                       
                                    }
                                    else if(arith==1)
                                        {
                                           quadr("=",sauvcon,"",(yyvsp[(1) - (3)].str));  strcpy(sauvcon,""); pk=0;pm=0,ps=0;pd=0;
                                        }
                                    ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 144 "syntaxique.y"
    { if(double_declaration((yyvsp[(2) - (2)].str))==0){inserer_type((yyvsp[(2) - (2)].str),sauvType);}
                    else printf("----------------ERREUR SEMANTIQEU: Double Declaration de %s a la ligne %d\n",(yyvsp[(2) - (2)].str),nbLlignes-1);
                    ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 150 "syntaxique.y"
    { if(double_declaration((yyvsp[(2) - (5)].str))==0)
                                                        {
                                                            strcpy(sauvType3,sauvType);
                                                            inserer_type((yyvsp[(2) - (5)].str),sauvType);
                                                            inserer_taille((yyvsp[(2) - (5)].str),(yyvsp[(4) - (5)].entier));
                                                            taille=(yyvsp[(4) - (5)].entier);
                                                        }
                                                      else 
                                                        printf("----------------ERREUR SEMANTIQEU: Double Declaration of %s at line %d\n",(yyvsp[(2) - (5)].str),nbLlignes-1);
                                                    ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 160 "syntaxique.y"
    { if(double_declaration((yyvsp[(1) - (6)].str))==0) 
                                                                            inserer_type((yyvsp[(1) - (6)].str),sauvType2); 
                                                                        else if((yyvsp[(3) - (6)].entier)>=taille)
                                                                        {
                                                                            printf("----------------ERREUR SEMANTIQEU: %s Depassement du taille a la ligne %d\n",(yyvsp[(1) - (6)].str),nbLlignes-1);
                                                                        } 
                                                                         else if(p==1)// si c'est une affectation alors on teste sinon on aura une op arith
                                                                         {
                                                                            p=0;
                                                                            if(strcmp(sauvType2,(char *)get_type((yyvsp[(1) - (6)].str)))!=0)  
                                                                            {
                                                                                printf("----------------ERREUR SEMANTIQEU: Incompatiblite de type a la ligne %d\n",nbLlignes-1);
                                                                             }
                                                                         }
                                                                       ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 175 "syntaxique.y"
    { if(double_declaration((yyvsp[(1) - (6)].str))==0) 
                                                                            inserer_type((yyvsp[(1) - (6)].str),sauvType2); 
                                                                         else if(p==1)// si c'est une affectation alors on teste sinon on aura une op arith
                                                                         {
                                                                            p=0;
                                                                            if(strcmp(sauvType2,(char *)get_type((yyvsp[(1) - (6)].str)))!=0)  
                                                                            {
                                                                                printf("----------------ERREUR SEMANTIQEU: Incompatiblite de type a la ligne %d\n",nbLlignes-1);
                                                                             }
                                                                         }
                                                                       ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 188 "syntaxique.y"
    {p=1;;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 189 "syntaxique.y"
    {arith=1;;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 194 "syntaxique.y"
    {sprintf(rd,"%d",qc);ajour_quad(finwhile,1,rd);;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 195 "syntaxique.y"
    {sprintf(rf,"%d",qc);ajour_quad(finfor,1,rf);;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 198 "syntaxique.y"
    {push2(qc);quadr("BZ","","<cond-if>.temp","");;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 202 "syntaxique.y"
    {sprintf(kp,"%d",qc);sauv_bz1=qc;quadr("BZ","","<cond-elif>.temp","");sauv_bz=pop2(); ajour_quad(sauv_bz,1,kp);push2(sauv_bz1);;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 205 "syntaxique.y"
    {sauv_bz=pop2();sprintf(rd,"%d",qc);ajour_quad(sauv_bz,1,rd);;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 208 "syntaxique.y"
    {compo=1;;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 208 "syntaxique.y"
    {push1(qc);quadr("BZ","","<cond-while>.temp","");;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 208 "syntaxique.y"
    {finwhile=pop1();sprintf(rd,"%d",finwhile);quadr("BR",rd,"","");;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 215 "syntaxique.y"
    { if(double_declaration((yyvsp[(2) - (9)].str))==0)
                                                                                                 {
                                                                                                   inserer_type((yyvsp[(2) - (9)].str),"int");
                                                                                                    if ((yyvsp[(6) - (9)].entier)>(yyvsp[(8) - (9)].entier)) 
                                                                                                        printf("----------------ERREUR SEMANTIQEU: Out of range at line %d\n",nbLlignes);
                                                                                                    else {sprintf(pza,"%d",(yyvsp[(8) - (9)].entier));push3(qc);quadr("BG","",(yyvsp[(2) - (9)].str),pza);}    
                                                                                                  }
                                                                                                  else printf("----------------ERREUR SEMANTIQEU: Double Declaration of %s at line %d\n",(yyvsp[(2) - (9)].str),nbLlignes-1);;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 222 "syntaxique.y"
    {finfor=pop3();sprintf(rf,"%d",finfor);quadr("BR",rf,"","");;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 223 "syntaxique.y"
    {if(double_declaration((yyvsp[(2) - (6)].str))==0)
                                                                  {
                                                                     inserer_type((yyvsp[(2) - (6)].str),sauvType3);
                                                                  }
                                                                  else printf("----------------ERREUR SEMANTIQEU: Double Declaration of %s at line %d\n",(yyvsp[(2) - (6)].str),nbLlignes-1);
                                                                  ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 237 "syntaxique.y"
    {resetDepth();;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 249 "syntaxique.y"
    {strcpy(sauvType,(yyvsp[(1) - (1)].str));;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 250 "syntaxique.y"
    {strcpy(sauvType,(yyvsp[(1) - (1)].str));;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 251 "syntaxique.y"
    {strcpy(sauvType,(yyvsp[(1) - (1)].str));;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 252 "syntaxique.y"
    {strcpy(sauvType,(yyvsp[(1) - (1)].str));;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 257 "syntaxique.y"
    {if(strcmp(tld,"int")==0) i=1; 
                        else if(strcmp(tld,"float")==0) f=2;
                        else if(strcmp(tld,"char")==0) string=3; 
                        else b=4;
                        if(pk==0)
                        {
                           deb=qc;
                           strcat(sauvcon,sauvidf);
                           quadr("+",sauvidf,"",""); 
                        }
                        else 
                        {
                           deb=qc;
                           quadr("+",sauvcon,"",""); 
                        }

                        ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 273 "syntaxique.y"
    {strcat(sauvcon,"+");;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 273 "syntaxique.y"
    {
                                            if(ping!=i)
                                            printf("----------------ERREUR SEMANTIQEU: Expression arithmtique interdite a la ligne %d\n",nbLlignes-1);
                                            else{
                                                pk=1;
                                                strcat(sauvcon,sauvidf);
                                                ajour_quad(deb,2,sauvidf);
                                                ajour_quad(deb,3,sauvcon);                                               
                                                 }
                                        ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 283 "syntaxique.y"
    {if(strcmp(tld,"int")==0) i=1; 
                        else if(strcmp(tld,"float")==0) f=2;
                        else if(strcmp(tld,"char")==0) string=3;
                        else b=4;
                        if(ps==0)
                        {deb=qc;
                        strcat(sauvcon,sauvidf);
                        quadr("-",sauvidf,"",""); 
                        }
                        else 
                        {
                           deb=qc;
                           quadr("-",sauvcon,"",""); 
                        }
                        ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 297 "syntaxique.y"
    {strcat(sauvcon,"-");;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 297 "syntaxique.y"
    {
                                            if(ping!=i)
                                            printf("----------------ERREUR SEMANTIQEU: Expression arithmtique interdite a la ligne %d\n",nbLlignes-1);
                                            else{
                                                ps=1;
                                                strcat(sauvcon,sauvidf);
                                                ajour_quad(deb,2,sauvidf);
                                                ajour_quad(deb,3,sauvcon);                                               
                                                 }
                                        ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 307 "syntaxique.y"
    {if(strcmp(tld,"int")==0) i=1; 
                        else if(strcmp(tld,"float")==0) f=2;
                        else if(strcmp(tld,"char")==0) string=3;
                        else b=4;
                        if(pm==0)
                        {deb=qc;
                        strcat(sauvcon,sauvidf);
                        quadr("*",sauvidf,"",""); 
                        }
                        else 
                        {
                           deb=qc;
                           quadr("*",sauvcon,"",""); 
                        }
                        ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 321 "syntaxique.y"
    {strcat(sauvcon,"*");;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 321 "syntaxique.y"
    {
                                           if(ping!=i)
                                            printf("----------------ERREUR SEMANTIQEU: Expression arithmtique interdite a la ligne %d\n",nbLlignes-1);
                                            else{
                                                pm=1;
                                                strcat(sauvcon,sauvidf);
                                                ajour_quad(deb,2,sauvidf);
                                                ajour_quad(deb,3,sauvcon);                                               
                                                 }
                                        ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 331 "syntaxique.y"
    {if(strcmp(tld,"int")==0) i=1; 
                        else if(strcmp(tld,"float")==0) f=2;
                        else if(strcmp(tld,"char")==0) string=3;
                        else b=4;
                        if(pd==0)
                        {deb=qc;
                        strcat(sauvcon,sauvidf);
                        quadr("/",sauvidf,"",""); 
                        }
                        else 
                        {
                           deb=qc;
                           quadr("/",sauvcon,"",""); 
                        }
                        ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 345 "syntaxique.y"
    {x=0;strcat(sauvcon,"/");;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 345 "syntaxique.y"
    {
                                           if(ping!=i)
                                            printf("----------------ERREUR SEMANTIQEU: Expression arithmtique interdite a la ligne %d\n",nbLlignes-1);
                                            else{
                                                pd=1;
                                                strcat(sauvcon,sauvidf);
                                                ajour_quad(deb,2,sauvidf);
                                                ajour_quad(deb,3,sauvcon);                                               
                                                 }
                                        ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 359 "syntaxique.y"
    {
            if(double_declaration((yyvsp[(1) - (1)].str))==0)
            {
                printf("----------------ERREUR SEMANTIQEU: %s Not declared at line %d\n",(yyvsp[(1) - (1)].str),nbLlignes);
            }
            else 
            {
                ok=1;
                sprintf(sauvidf,"%s",(yyvsp[(1) - (1)].str));
                strcpy(tld,(char *)get_type((yyvsp[(1) - (1)].str)));
                if(strcmp(tld,"int")==0) ping=1; 
                else if(strcmp(tld,"float")==0) ping=2;
                else if(strcmp(tld,"char")==0) ping=3;
                else ping=4;
            }
          ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 379 "syntaxique.y"
    {
            if(double_declaration((yyvsp[(1) - (4)].str))==0)
            {
                printf("----------------ERREUR SEMANTIQEU: %s Not declared at line %d\n",(yyvsp[(1) - (4)].str),nbLlignes);
            }
            else 
            {
                if((yyvsp[(3) - (4)].entier)>=taille)
                {
                    printf("----------------ERREUR SEMANTIQEU: %s Depassement du taille a la ligne %d\n",(yyvsp[(1) - (4)].str),nbLlignes);
                }
                else
                {
                    strcpy(tld,(char *)get_type((yyvsp[(1) - (4)].str)));
                    if(strcmp(tld,"int")==0) ping=1; 
                    else if(strcmp(tld,"float")==0) ping=2;
                    else if(strcmp(tld,"char")==0) ping=3;
                    else ping=4;
                }
                
            }
          ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 402 "syntaxique.y"
    {
            if(double_declaration((yyvsp[(1) - (4)].str))==0)
            {
                printf("----------------ERREUR SEMANTIQEU: %s Not declared at line %d\n",(yyvsp[(1) - (4)].str),nbLlignes);
            }
            else 
            {
               strcpy(tld,(char *)get_type((yyvsp[(1) - (4)].str)));
               if(strcmp(tld,"int")==0) ping=1;   
               else if(strcmp(tld,"float")==0) ping=2;
               else if(strcmp(tld,"char")==0) ping=3;
               else ping=4;
            }
          ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 428 "syntaxique.y"
    {if((x==0) && ((yyvsp[(2) - (2)].entier) ==0)) {printf("----------------ERREUR SEMANTIQEU: DIV par zero a la ligne %d\n",nbLlignes);x=1;}
                 if((yyvsp[(2) - (2)].entier)>=-32768 && (yyvsp[(2) - (2)].entier)<=32768)
                 {strcpy(sauvType2,"int");sprintf(sauvidf,"%d",(yyvsp[(2) - (2)].entier));}
                 else printf("----------------ERREUR SEMANTIQEU: Taille non accepte sur l'entier %d a la ligne %d\n",(yyvsp[(2) - (2)].entier),nbLlignes);
                 ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 433 "syntaxique.y"
    {strcpy(sauvType2,"float");sprintf(sauvidf,"%f",(yyvsp[(1) - (1)].reel));;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 434 "syntaxique.y"
    {strcpy(sauvType2,"bool");strcpy(sauvidf,(yyvsp[(1) - (1)].str));;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 435 "syntaxique.y"
    {strcpy(sauvType2,"char");strcpy(sauvidf,(yyvsp[(1) - (1)].str));;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 447 "syntaxique.y"
    {strcpy(sauvType2,"bool");;}
    break;



/* Line 1455 of yacc.c  */
#line 2167 "syntaxique.tab.c"
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
#line 455 "syntaxique.y"

main(){
    yyparse();
    afficher();
    afficher_qdr();
}
int yyerror(char* msg)
{
    printf("\n----------------ERREUR ***SYNTAXIQUE*** : a la ligne %d a la colonne %d\n",nbLlignes,nbColonne);
}
yywrap()
{}

