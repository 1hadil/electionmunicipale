#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "election.h"
#include <gtk/gtk.h>

enum 
{
	EID,
	ETYPE,
	EDATE,
	EHEURE_DEBUT,
	EHEURE_FIN,
	EPOPULATION,
	ECONSEILLER,
	EGOUVERNORAT,
}
	

/////////////////////////////////////
void ajouter_election ( election e);
{
File *f
f=fopen("election.txt" , "a+");
if (f!=NULL)
{
fprintf (f,"%d %s %d %d %d %d %d %d %d %s ",e.id ,e.type ,e.y.jour,e.y.mois ,e.y.année , e.heure_debut , e.heure_fin , e.population , e.conseiller , e.gouvernorat);
fclose (f)
}
}
///////////////////////////////////////
void afficher_election (gtkwidget * liste);
{
	GtkCellRenderer 
	GtkTreeViewColumn
	GtkTreeIter
	GtklistStore

	 
	char id [30] ;
	char type [30];
	char Date [30];
	char heure_debut [30];
	char heure_fin [30];
	char population [30];
	char conseiller [30] ;
	char gouvernorat[30];
	store= NULL ;
	
	FILLe *f;
		store=gtk_tree_view_get_model(liste);
	if (store ==NULL)
	{
	renderer =gtk_cell_renderer_text_new ();
	column =gtk_tree_view_column_new_with_attribues ("id",renderer,"text",EID,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);
	
	renderer =gtk_cell_renderer_text_new ();
	column =gtk_tree_view_column_new_with_attribues ("type",renderer,"text",TYPE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

	renderer =gtk_cell_renderer_text_new ();
	column =gtk_tree_view_column_new_with_attribues ("date",renderer,"text",EDATE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

	renderer =gtk_cell_renderer_text_new ();
	column =gtk_tree_view_column_new_with_attribues ("heure_debut",renderer,"text",EHEURE_DEBUT,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

	renderer =gtk_cell_renderer_text_new ();
	column =gtk_tree_view_column_new_with_attribues ("heure_fin",renderer,"text",EHEURE_FIN,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

	renderer =gtk_cell_renderer_text_new ();
	column =gtk_tree_view_column_new_with_attribues ("population",renderer,"text",EPOPULATION,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

	renderer =gtk_cell_renderer_text_new ();
	column =gtk_tree_view_column_new_with_attribues ("conseiller",renderer,"text",ECONSEILLER,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

	renderer =gtk_cell_renderer_text_new ();
	column =gtk_tree_view_column_new_with_attribues ("gouvernorat",renderer,"text",EGOUVERNORAT,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);
	}
	store=gtk_list_store_new (COLUMNS , G_TYPE_STRING ,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);
	f=fopen("users.txt","r");
	if(f==NULL)
	{
		return;
	}
	else 
	{
		f = fopen ("election.txt","a+");
		while (fscanf(f,"%s %s %s %s %s %s %s %s %s %s ",e.id ,e.type ,e.y.jour,e.y.mois ,e.y.année , e.heure_debut , e.heure_fin , e.population , e.conseiller , e.gouvernorat)!=EOF);
		{
			gtk_list_store_append (store ,&iter);
			gtk_list_store_set(store ,&iter,EID ,ETYPE,EDATE,EHEURE_DEBUT,EHEURE_FIN,EPOPULATION,ECONSEILLER,EGOUVERNORAT,-1);
		}
		fclose(f);
		gtk_tree_view_set_model (GTK_TREE_VIEW (liste), GTK_TREE_MODEL (store));
		g_objet_unref (store);
	
///////////////////////////////////////
void supprimer_election (election e);

election e1 ;
FILE *f ,*g ;
	
	f=fopen ("election.txt","r");
	g=fopen ("election1.txt","w");
	if (f==NULL || g=NULL)
		return;
	else 
	{
		while (fscanf(f,"%s %s %s %s %s %s %s %s %s %s ",e.id ,e.type ,e.y.jour,e.y.mois ,e.y.année , e.heure_debut , e.heure_fin , e.population , e.conseiller , e.gouvernorat)!=EOF);
		{
			if (strcmp (e.id , e1.id )!=0 || strcmp (e.type , e1.type)!=0 || strcmp (e.date , e1.date)!=0 ||strcmp (e.heure_debut , e1.heure_debut )!=0 || strcmp (e.heure_fin , e1.heure_fin )!=0 || strcmp (e.population , e1.population )!=0 ||strcmp (e.conseiller, e1.conseiller)!=0 || strcmp (e.gouvernorat , e1.gouvernorat)!=0 )
			fprintf (g,"%s %s %s %s %s %s %s %s %s %s ",e1.id ,e1.type ,e1.y.jour,e1.y.mois ,e1.y.année , e1.heure_debut , e1.heure_fin , e1.population , e1.conseiller , e1.gouvernorat);
		}
		fclose(f);
		fclose(g);
remove ("election.txt");
remove ("election1.txt");

	}

