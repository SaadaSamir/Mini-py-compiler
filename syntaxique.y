%{  
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
    %}
%union {
int entier;
float reel;
char* str;
int depth;
}   
%token <str>IDF <entier>Int <str>mcInt <reel>Float <str>mcFloat <str>Bool <str>mcBool <str>Char <str>mcChar Aff mc_closeParanthesis mc_openParanthesis
       mc_closeBracket mc_openBracket Add Sub And Or Not Greater Lower Equal notEqual GreaterOrEqual 
       LowerOrEqual Mul Div Indent mc_if mc_elif mc_else mc_in mc_while mc_colon mc_comma mc_range  
       mc_for mc_newline Dedent Nodent

%left Add Sub
%left Mul Div
%right Aff
%left Greater GreaterOrEqual Not LowerOrEqual Lower
%nonassoc mc_if
%nonassoc mc_elif
%nonassoc mc_else
%start S
%%
S:  Corps {printf("programme effectue sans aucune faute syntaxique\n");}
;
Corps :   mc_newline Corps
       |  Suite_Corps {resetDepth();}  Corps
       |  
;
Suite_Corps:  inst_base 
           |  boucle_con 
;
inst_base:   Dec mc_newline 
          |  bool_exp mc_newline
          |  arith_exp mc_newline
;

Dec:   mcCode IDF signe_aff Affectation  { if(double_declaration($2)==0)
                                             {
                                                inserer_type($2,sauvType);
                                                if(strcmp(sauvType2,sauvType)!=0) 
                                                    printf("----------------ERREUR SEMANTIQEU: Incompatiblite de type a la ligne %d\n",nbLlignes-1);
                                                else {quadr("=",sauvidf,"",$2);}
                                              }
                                           else 
                                           printf("----------------ERREUR SEMANTIQEU: Double Declaration de %s a la ligne %d\n",$2,nbLlignes-1);
                                           }
    |  IDF signe_aff Affectation { if(double_declaration($1)==0) 
                                        {
                                            inserer_type($1,sauvType2);
                                            quadr("=",sauvidf,"",$1);
                                        }
                                    else if(p==1)// si c'est qu'une affectation(X=4.5 avec x entier) alors on teste 
                                    {
                                        p=0;
                                        if(strcmp(sauvType2,(char *)get_type($1))!=0)  
                                        {
                                            printf("----------------ERREUR SEMANTIQEU: Incompatiblite de type a la ligne %d\n",nbLlignes-1);
                                        }
                                        else
                                        {
                                            quadr("=",sauvidf,"",$1);                                       
                                        }                                       
                                    }
                                    else if(arith==1)
                                        {
                                           quadr("=",sauvcon,"",$1);  strcpy(sauvcon,""); pk=0;pm=0,ps=0;pd=0;
                                        }
                                    }
    |  mcCode IDF { if(double_declaration($2)==0){inserer_type($2,sauvType);}
                    else printf("----------------ERREUR SEMANTIQEU: Double Declaration de %s a la ligne %d\n",$2,nbLlignes-1);
                    }
    |  DecT
;

DecT: mcCode IDF mc_openBracket Int mc_closeBracket { if(double_declaration($2)==0)
                                                        {
                                                            strcpy(sauvType3,sauvType);
                                                            inserer_type($2,sauvType);
                                                            inserer_taille($2,$4);
                                                            taille=$4;
                                                        }
                                                      else 
                                                        printf("----------------ERREUR SEMANTIQEU: Double Declaration of %s at line %d\n",$2,nbLlignes-1);
                                                    }
    |   IDF  mc_openBracket Int mc_closeBracket signe_aff Affectation { if(double_declaration($1)==0) 
                                                                            inserer_type($1,sauvType2); 
                                                                        else if($3>=taille)
                                                                        {
                                                                            printf("----------------ERREUR SEMANTIQEU: %s Depassement du taille a la ligne %d\n",$1,nbLlignes-1);
                                                                        } 
                                                                         else if(p==1)// si c'est une affectation alors on teste sinon on aura une op arith
                                                                         {
                                                                            p=0;
                                                                            if(strcmp(sauvType2,(char *)get_type($1))!=0)  
                                                                            {
                                                                                printf("----------------ERREUR SEMANTIQEU: Incompatiblite de type a la ligne %d\n",nbLlignes-1);
                                                                             }
                                                                         }
                                                                       }
    |   IDF  mc_openBracket IDF mc_closeBracket signe_aff Affectation { if(double_declaration($1)==0) 
                                                                            inserer_type($1,sauvType2); 
                                                                         else if(p==1)// si c'est une affectation alors on teste sinon on aura une op arith
                                                                         {
                                                                            p=0;
                                                                            if(strcmp(sauvType2,(char *)get_type($1))!=0)  
                                                                            {
                                                                                printf("----------------ERREUR SEMANTIQEU: Incompatiblite de type a la ligne %d\n",nbLlignes-1);
                                                                             }
                                                                         }
                                                                       }
;     

Affectation:   right_factor {p=1;}
            | arith_exp {arith=1;}
            | bool_exp
;

boucle_con :     if_exp 
             | while_stmt {sprintf(rd,"%d",qc);ajour_quad(finwhile,1,rd);}
             | for_stmt {sprintf(rf,"%d",qc);ajour_quad(finfor,1,rf);}
;

if_exp : mc_if bool_exp {push2(qc);quadr("BZ","","<cond-if>.temp","");} mc_colon body elif_exp 
;

elif_exp :  else_exp 
           |  mc_elif bool_exp {sprintf(kp,"%d",qc);sauv_bz1=qc;quadr("BZ","","<cond-elif>.temp","");sauv_bz=pop2(); ajour_quad(sauv_bz,1,kp);push2(sauv_bz1);} mc_colon body elif_exp 
;

else_exp :  mc_else mc_colon {sauv_bz=pop2();sprintf(rd,"%d",qc);ajour_quad(sauv_bz,1,rd);}  body 
;

while_stmt : mc_while {compo=1;} bool_exp {push1(qc);quadr("BZ","","<cond-while>.temp","");} mc_colon body {finwhile=pop1();sprintf(rd,"%d",finwhile);quadr("BR",rd,"","");}
; 

body : inst_base 
            | mc_newline Indent  Suite_Corps next
;

for_stmt :  mc_for IDF mc_in mc_range mc_openParanthesis Int mc_comma Int mc_closeParanthesis { if(double_declaration($2)==0)
                                                                                                 {
                                                                                                   inserer_type($2,"int");
                                                                                                    if ($6>$8) 
                                                                                                        printf("----------------ERREUR SEMANTIQEU: Out of range at line %d\n",nbLlignes);
                                                                                                    else {sprintf(pza,"%d",$8);push3(qc);quadr("BG","",$2,pza);}    
                                                                                                  }
                                                                                                  else printf("----------------ERREUR SEMANTIQEU: Double Declaration of %s at line %d\n",$2,nbLlignes-1);} mc_colon body {finfor=pop3();sprintf(rf,"%d",finfor);quadr("BR",rf,"","");}
          | mc_for IDF mc_in IDF mc_colon body {if(double_declaration($2)==0)
                                                                  {
                                                                     inserer_type($2,sauvType3);
                                                                  }
                                                                  else printf("----------------ERREUR SEMANTIQEU: Double Declaration of %s at line %d\n",$2,nbLlignes-1);
                                                                  }
;

next :  Nodent Suite_Corps  next 
      |  end_next 
;

end_next : Dedent Suite_Corps 
          | Dedent 
          | {resetDepth();}
;


signe_aff :   Add Aff
           |  Sub Aff
           |  Mul Aff
           |  Div Aff
           |  Aff
;


mcCode:  mcInt {strcpy(sauvType,$1);}
       | mcBool {strcpy(sauvType,$1);}
       | mcChar {strcpy(sauvType,$1);}
       | mcFloat {strcpy(sauvType,$1);}     
;


arith_exp:    term 
           |  arith_exp{if(strcmp(tld,"int")==0) i=1; 
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

                        } Add{strcat(sauvcon,"+");} term{
                                            if(ping!=i)
                                            printf("----------------ERREUR SEMANTIQEU: Expression arithmtique interdite a la ligne %d\n",nbLlignes-1);
                                            else{
                                                pk=1;
                                                strcat(sauvcon,sauvidf);
                                                ajour_quad(deb,2,sauvidf);
                                                ajour_quad(deb,3,sauvcon);                                               
                                                 }
                                        }
           |  arith_exp {if(strcmp(tld,"int")==0) i=1; 
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
                        } Sub{strcat(sauvcon,"-");} term {
                                            if(ping!=i)
                                            printf("----------------ERREUR SEMANTIQEU: Expression arithmtique interdite a la ligne %d\n",nbLlignes-1);
                                            else{
                                                ps=1;
                                                strcat(sauvcon,sauvidf);
                                                ajour_quad(deb,2,sauvidf);
                                                ajour_quad(deb,3,sauvcon);                                               
                                                 }
                                        }
           |  arith_exp {if(strcmp(tld,"int")==0) i=1; 
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
                        } Mul {strcat(sauvcon,"*");} term {
                                           if(ping!=i)
                                            printf("----------------ERREUR SEMANTIQEU: Expression arithmtique interdite a la ligne %d\n",nbLlignes-1);
                                            else{
                                                pm=1;
                                                strcat(sauvcon,sauvidf);
                                                ajour_quad(deb,2,sauvidf);
                                                ajour_quad(deb,3,sauvcon);                                               
                                                 }
                                        }
           |  arith_exp {if(strcmp(tld,"int")==0) i=1; 
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
                        } Div {x=0;strcat(sauvcon,"/");} term{
                                           if(ping!=i)
                                            printf("----------------ERREUR SEMANTIQEU: Expression arithmtique interdite a la ligne %d\n",nbLlignes-1);
                                            else{
                                                pd=1;
                                                strcat(sauvcon,sauvidf);
                                                ajour_quad(deb,2,sauvidf);
                                                ajour_quad(deb,3,sauvcon);                                               
                                                 }
                                        }
           |  arith_exp notEqual arith_exp  
           |  mc_openParanthesis arith_exp mc_closeParanthesis
;

term: IDF {
            if(double_declaration($1)==0)
            {
                printf("----------------ERREUR SEMANTIQEU: %s Not declared at line %d\n",$1,nbLlignes);
            }
            else 
            {
                ok=1;
                sprintf(sauvidf,"%s",$1);
                strcpy(tld,(char *)get_type($1));
                if(strcmp(tld,"int")==0) ping=1; 
                else if(strcmp(tld,"float")==0) ping=2;
                else if(strcmp(tld,"char")==0) ping=3;
                else ping=4;
            }
          }
    | right_factor 
    | Tableau_indexe 
;

Tableau_indexe: IDF mc_openBracket Int mc_closeBracket {
            if(double_declaration($1)==0)
            {
                printf("----------------ERREUR SEMANTIQEU: %s Not declared at line %d\n",$1,nbLlignes);
            }
            else 
            {
                if($3>=taille)
                {
                    printf("----------------ERREUR SEMANTIQEU: %s Depassement du taille a la ligne %d\n",$1,nbLlignes);
                }
                else
                {
                    strcpy(tld,(char *)get_type($1));
                    if(strcmp(tld,"int")==0) ping=1; 
                    else if(strcmp(tld,"float")==0) ping=2;
                    else if(strcmp(tld,"char")==0) ping=3;
                    else ping=4;
                }
                
            }
          }
    | IDF mc_openBracket IDF mc_closeBracket 
          {
            if(double_declaration($1)==0)
            {
                printf("----------------ERREUR SEMANTIQEU: %s Not declared at line %d\n",$1,nbLlignes);
            }
            else 
            {
               strcpy(tld,(char *)get_type($1));
               if(strcmp(tld,"int")==0) ping=1;   
               else if(strcmp(tld,"float")==0) ping=2;
               else if(strcmp(tld,"char")==0) ping=3;
               else ping=4;
            }
          }
;

bool_exp: bool_term Or bool_term 
        | bool_term And bool_term
        | arith_exp Lower arith_exp
        | arith_exp Greater arith_exp
        | arith_exp GreaterOrEqual arith_exp       
        | arith_exp LowerOrEqual arith_exp      
        | arith_exp mc_in IDF  
        | bool_term   
;

right_factor:  Signe Int {if((x==0) && ($2 ==0)) {printf("----------------ERREUR SEMANTIQEU: DIV par zero a la ligne %d\n",nbLlignes);x=1;}
                 if($2>=-32768 && $2<=32768)
                 {strcpy(sauvType2,"int");sprintf(sauvidf,"%d",$2);}
                 else printf("----------------ERREUR SEMANTIQEU: Taille non accepte sur l'entier %d a la ligne %d\n",$2,nbLlignes);
                 }
     | Float {strcpy(sauvType2,"float");sprintf(sauvidf,"%f",$1);}
     | Bool {strcpy(sauvType2,"bool");strcpy(sauvidf,$1);}
     | Char {strcpy(sauvType2,"char");strcpy(sauvidf,$1);}
;


Signe : Add 
      | Sub 
      |
;


bool_term:  factore
          | arith_exp Equal arith_exp
          | Bool {strcpy(sauvType2,"bool");}
;


factore:  Not factore
            | mc_openParanthesis bool_exp mc_closeParanthesis
;

%%
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
