#include <stdio.h>
#include <string.h>
#include"bureaudevote.h"

int main()

{ int x;
 bureau  b3;
    bureau b1={"khhkkj",12555,25,253,215,63,85,966};
    bureau b={"test",1,25,2,2,2,85,966};
    bureau b2={"hfsshgf",2548,246,339,64,58,877,955};
   
 
 
     /* x=ajouter("bureaudevote.txt", b1);
       x=ajouter("bureaudevote.txt", b2);
    if(x==1)
        printf("\najout de bureau avec succés");
    else printf("\nechec ajout");
   
 x=modifier("bureaudevote.txt",2548,b2);
    if(x!=1)
        printf("\nModification de bureau avec succés");
    else printf("\nechec Modification");
    x=supprimer("bureaudevote.txt",12555 );
    if(x==1)
        printf("\nSuppression de bureau avec succés");
    else printf("\nechec Suppression");*/
    b3=chercher("bureaudevote.txt",1 );
    if(b3.idsalle==-1)
        printf("introuvable");
else printf("\n existe \n");
    return 0;
}                                    
