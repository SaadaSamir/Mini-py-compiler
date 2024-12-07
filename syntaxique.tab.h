
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
#line 78 "syntaxique.y"

int entier;
float reel;
char* str;
int depth;



/* Line 1676 of yacc.c  */
#line 103 "syntaxique.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


