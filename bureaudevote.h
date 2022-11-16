#ifndef BUREAU_H_INCLUDED
#define BUREAU_H_INCLUDED
#include <stdio.h>
typedef struct
{
    char adresse [20];
    int idsalle, cap_s, cap_e, cap_o, h_o, h_f, idagent;
} bureau;
//le type de  retour int c'est pour indiquer si la tache a été réalisée avec succés ou non// pour afficher des lsg plus tard exemple erreur d'ouverture de fichier, element introuvable

int ajouter(char filename[] , bureau );
int modifier (char filename[],int ,bureau);
int supprimer (char filename[] ,int );
bureau chercher (char filename[],int );


#endif


