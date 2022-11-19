
#include <gtk/gtk.h>
typedef struct
{
int jour;
int mois;
int annee;
}DateE;
typedef struct
{
DateE y
int id ;
char type [50];
int heure_debut;
int heure_fin;
int population;
int conseiller ;
char gouvernorat[50];
}election;
void ajouter_election ( election e);
void afficher_election (gtkwidget * liste);
void supprimer_election (election e);

#endif
