%{
 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>
 #include<stdbool.h>
 #include "Syntaxique.tab.h"   
 #include "TS.h"
 #include "quadruple.h"
 #define stack_size 100
 
 static int cpt=0, stack [stack_size];
 extern nbColonne;
 extern nbLlignes;
 extern YYSTYPE yylval;
 

    static void push (int i) 
 	{
   		if (++cpt<stack_size) stack[cpt]= i;
   		else {printf ("error: stack overflow\n"); exit(1);}
 	}
 	
 	int pop () 
 	{
   		if (cpt>-1) return stack[cpt--];
   		else {printf ("error: stack underflow\n"); exit(1);}
 	}
 	
 	int top()
 	{
 		if(cpt>-1) return stack[cpt];
 		else return 1;
 	}
 	
 	static int indent_depth(const char *K)
	{
		int len = strlen(K), i, tab_count=1;
		for(i=0; i< len ; i++)
		{
			if(K[i]=='\t')
			{
				tab_count++;
			}
			else
			{
				break;
			}	
		}
		return tab_count;
	}	
 	int depth = 1;
%}

IDF ([A-Z]([a-z]|{chiffre})*)
chiffre [0-9]
int [1-9][0-9]*|0
float ([1-9][0-9]*|0)"."{chiffre}*
bool (true|false)
comment #.*
%%
{IDF}      { if (yyleng<=8) {   yylval.str = strdup(yytext);
                                nbColonne+=strlen(yytext);
                                inserer(yytext,"idf");
                                return IDF;
                                } 
            else printf("taille de l'identificateur depasse la limitte");
            }
{int}       { nbColonne+=strlen(yytext);
              yylval.entier= atoi(yytext);
              return Int;
              }
"int"       { yylval.str = strdup(yytext);
			  nbColonne+=strlen(yytext);
              return mcInt;
              }
{float}     { nbColonne+=strlen(yytext);
              yylval.reel= atof(yytext);
              return Float;
              }
"float"     { nbColonne+=strlen(yytext);
		      yylval.str = strdup(yytext);
              return mcFloat;
              }
{bool}      { nbColonne+=strlen(yytext);
              yylval.str = strdup(yytext);
              return Bool;
              }
"bool"      { nbColonne+=strlen(yytext);
              yylval.str = strdup(yytext);
              return mcBool;
              }
\"(.)*\"     { nbColonne+=strlen(yytext);
              yylval.str = strdup(yytext);
              return Char;}
"char"      { nbColonne+=strlen(yytext);
              yylval.str = strdup(yytext);
              return mcChar;
              }
{comment}   
"="         {nbColonne+=strlen(yytext);inserer(yytext,"separator");return Aff;}
"+"         {nbColonne+=strlen(yytext);inserer(yytext,"operator");return Add;}
"-"         {nbColonne+=strlen(yytext);inserer(yytext,"operator");return Sub;}
"*"         {nbColonne+=strlen(yytext);inserer(yytext,"operator");return Mul;}
"/"         {nbColonne+=strlen(yytext);inserer(yytext,"operator");return Div;}
"and"       {nbColonne+=strlen(yytext);inserer(yytext,"Bitwise");return And;}
"or"        {nbColonne+=strlen(yytext);inserer(yytext,"Bitwise");return Or;}
"not"       {nbColonne+=strlen(yytext);inserer(yytext,"Bitwise");return Not;}
">"         {nbColonne+=strlen(yytext);inserer(yytext,"Bitwise");return Greater;}
"<"         {nbColonne+=strlen(yytext);inserer(yytext,"Bitwise");return Lower;}
">="        {nbColonne+=strlen(yytext);inserer(yytext,"Bitwise");return GreaterOrEqual;}
"<="        {nbColonne+=strlen(yytext);inserer(yytext,"Bitwise");return LowerOrEqual;}
"=="        {nbColonne+=strlen(yytext);inserer(yytext,"Bitwise");return Equal;}
"!="        {nbColonne+=strlen(yytext);inserer(yytext,"Bitwise");return notEqual;}
"["         {nbColonne+=strlen(yytext);inserer(yytext,"separator");return mc_openBracket;}
"]"         {nbColonne+=strlen(yytext);inserer(yytext,"separator");return mc_closeBracket;}
"("         {nbColonne+=strlen(yytext);inserer(yytext,"separator");return mc_openParanthesis;}
")"         {nbColonne+=strlen(yytext);inserer(yytext,"separator");return mc_closeParanthesis;}
"if"        {nbColonne+=strlen(yytext);inserer(yytext,"compound");return mc_if;}
"elif"      {nbColonne+=strlen(yytext);inserer(yytext,"compound");return mc_elif;}
"else"      {nbColonne+=strlen(yytext);inserer(yytext,"compound");return mc_else;}
"in"        {nbColonne+=strlen(yytext);inserer(yytext,"separartor");return mc_in;}
"while"     {nbColonne+=strlen(yytext);inserer(yytext,"compound");return mc_while;}
"for"       {nbColonne+=strlen(yytext);inserer(yytext,"compound");return mc_for;}
":"         {nbColonne+=strlen(yytext);inserer(yytext,"separartor");return mc_colon;}
","         {nbColonne+=strlen(yytext);inserer(yytext,"separartor");return mc_comma;}
"range"     {nbColonne+=strlen(yytext);inserer(yytext,"separator");return mc_range;}
[\t]*       {nbColonne+=strlen(yytext); 
            depth = indent_depth(yytext)-1;
			if(depth < top())
			{
				while (depth < top()) pop();
				yylval.depth = depth;
				return Dedent;
			}
			
			if(depth == top())
			{
				yylval.depth = depth;
				return Nodent;				
			}
			if(depth > top())
			{
				push(depth);
				yylval.depth = depth;
				return Indent;
			}}
[ ]         
"\n"        {nbColonne =1; nbLlignes++; return mc_newline;}
.           {printf("erreur lexical a la ligne %d  la col %d entite %s \n",nbLlignes,nbColonne, yytext);}
