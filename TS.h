#include<stdlib.h>
#include<stdio.h>
#include<string.h>

typedef struct 
{
   char NomEntite[20];
   char CodeEntite[20]; 
   char TypeEntite[20];
   int  TailleEntite;
}TypeTS;

TypeTS ts[100];

int cpTabSym=0;

int recherche(char entite[])
{
    int i=0;
    while(i<cpTabSym)
    {
        if (strcmp(entite,ts[i].NomEntite)==0) return i;
        i++;
    }
     return -1;
}

void inserer(char entite[], char code[])
{
    if (recherche(entite)==-1)
    {
        strcpy(ts[cpTabSym].NomEntite,entite);
        strcpy(ts[cpTabSym].CodeEntite,code);
        cpTabSym++;
    }
}

void afficher()
{
    printf("\n--------------------------- Table des symboles ---------------------------\n");
    printf("___________________________________________________________________________\n");
    printf("\t | NomEntite | CodeEntite  | TypeEntite  | TailleTableau |\n");
    int i=0;
    while (i<cpTabSym)
    {
        printf("\t |%10s | %11s |%12s |%12d   |\n",ts[i].NomEntite,ts[i].CodeEntite,ts[i].TypeEntite,ts[i].TailleEntite);
        i++;
    }
    
}

void inserer_type(char entite[], char type[])
{
    if (recherche(entite) !=-1) strcpy(ts[recherche(entite)].TypeEntite,type);
}

int double_declaration(char entite[])
{

    if (recherche(entite) !=-1)
    {
        if(strcmp(ts[recherche(entite)].TypeEntite,"")==0) return 0;
        else return -1;
    }

}
char *get_type(char entite[])
 {
  char *tmp;
  tmp = (char *) malloc(20 * sizeof (char));  
  strcpy(tmp,ts[recherche(entite)].TypeEntite);
  return tmp;
}

void inserer_taille(char entite[],int t)
{
   ts[recherche(entite)].TailleEntite=t;
}
