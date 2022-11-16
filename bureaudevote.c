#include <stdio.h>
#include "bureaudevote.h"



int ajouter(char filename [], bureau b)
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f,"%s %d %d %d %d %d %d %d \n",b.adresse,b.idsalle, b.cap_s, b.cap_e, b.cap_o, b.h_o, b.h_f, b.idagent);

        fclose(f);
        return 1;
    }
    else 
     return 0;
}
int modifier( char  filename[], int id, bureau b1)
{
    int tr=0;
    bureau b;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("bureaudevote2.txt", "w");
    if(f!=NULL && f2 !=NULL)
    {
        while(fscanf(f,"%s %d %d %d %d %d %d %d \n",b.adresse,&b.idsalle, &b.cap_s, &b.cap_e, &b.cap_o, &b.h_o, &b.h_f, &b.idagent)!=EOF)
        {
            if(b.idsalle != id)
            {
                fprintf(f2,"%s %d %d %d %d %d %d %d \n",b.adresse,b.idsalle, b.cap_s, b.cap_e, b.cap_o, b.h_o, b.h_f, b.idagent);
                tr=1;
printf("\n  pas modification \n ");
            }
            else
               { fprintf(f2,"%s %d %d %d %d %d %d %d \n",b1.adresse,b1.idsalle, b1.cap_s, b1.cap_e, b1.cap_o, b1.h_o, b1.h_f, b1.idagent);
printf("\n  modification avec succes");}

        }
fclose(f2);
    fclose(f);
    }
   

    remove(filename);
    rename("bureaudevote2.txt",filename);
    return tr;

}
int supprimer(char filename[], int id)
{
    int tr=0;
    bureau b;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("bureaudevote2.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%s %d %d %d %d %d %d %d \n",b.adresse,&b.idsalle, &b.cap_s, &b.cap_e, &b.cap_o, &b.h_o, &b.h_f, &b.idagent)!=EOF)
        {
            if(b.idsalle== id)
                tr=1;
            else
                fprintf(f2,"%s %d %d %d %d %d %d %d \n",b.adresse,b.idsalle, b.cap_s, b.cap_e, b.cap_o, b.h_o, b.h_f, b.idagent);
        }
    fclose(f2);
    fclose(f);  }
 
   remove(filename);
    rename("bureaudevote2.txt",filename);
    return tr;
}
bureau chercher(char filename[], int id)
{
    bureau b;
    int tr;
    FILE * f=fopen(filename, "r");
    if(f!=NULL)
    {
        while(tr==0 && fscanf(f,"%s %d %d %d %d %d %d %d \n",b.adresse,&b.idsalle, &b.cap_s, &b.cap_e, &b.cap_o, &b.h_o, &b.h_f, &b.idagent)!=EOF)
        {
            if(b.idsalle == id)
                tr=1;
        }
    }
    fclose(f);
    if(tr==0)
        b.idsalle =-1;
    return b;

}
