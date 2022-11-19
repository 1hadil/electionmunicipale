#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"


void
on_entry2_insert_text                  (GtkEditable     *editable,
                                        gchar           *new_text,
                                        gint             new_text_length,
                                        gpointer         position,
                                        gpointer         user_data)
{

}


void
on_entry3_insert_text                  (GtkEditable     *editable,
                                        gchar           *new_text,
                                        gint             new_text_length,
                                        gpointer         position,
                                        gpointer         user_data)
{

}


void
on_buttonConnecter_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonGBV_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonGE_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button2_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonsupp_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_radiobutton16_toggled               (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_button27_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
election e ;
GtkWidget *input1 ,*input2 , *input3 , *input4 , *input5 , *input6 ,*input7 ,*input8 ;
GtkWidget *Gestion des élections ;

Gestion des élections=lookup_widget (objet , "Gestion des élections"):

input1 = lookup_widget(objet ,"id");
input2 = lookup_widget(objet ,"type");
input3 = lookup_widget(objet ,"date");
input4 = lookup_widget(objet ,"heure_debut");
input5 = lookup_widget(objet ,"heure_fin");
input6 = lookup_widget(objet ,"population");
input7 = lookup_widget(objet ,"conseiller");
input8 = lookup_widget(objet ,"gouvernorat");

strcpy(e.id,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(e.type,gtk_entry_get_text(GTK_ENTRY(input2)));
strcpy(e.date,gtk_entry_get_text(GTK_ENTRY(input3)));
strcpy(e.heure_debur,gtk_entry_get_text(GTK_ENTRY(input4)));
strcpy(e.heure_fin,gtk_entry_get_text(GTK_ENTRY(input5)));
strcpy(e.population,gtk_entry_get_text(GTK_ENTRY(input6)));
strcpy(e.conseiller,gtk_entry_get_text(GTK_ENTRY(input7)));
strcpy(e.gouvernorat,gtk_entry_get_text(GTK_ENTRY(input8)));

ajouter_election (e) ;



}


void
on_button29_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
Gtk_Widget *Gestion des élections;
Gtk_Widget *window2_afficher;
Gtk_Widget *treeview6;
Gestion des élections=window2_afficher();

gtk_widget_show(window2_afficher, treeview6);

afficher_election (treeview6);
}



}


void
on_button28_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_treeview6_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
	GtkTreeIter iter;
	gchar *id;
	gchar *type;
	gchar *date;
	gchar *heure_debut;
	gchar *heure_fin;
	gchar *population ;
	gchar *conseiller;
	gchar *gouvernorat;
	
	GtkTreeModel *model =gtk_tree_view_get_model(treeview);
	if (gtk_tree_model_get_iter (model, &iter, path))
	gtk_tree_model_get (GTK_LIST_STORE (model) , &iter , 0, &id, 1 , &type , 2 , &date , 3 , &heure_debut , 4 ,&heure_fin , 5 , &population , 6, &conseiller , 7, &gouvernorat ,-1);

	strcpy (e.id , id);
	strcpy (e.type , type);
	strcpy (e.date , date);
	strcpy (e.heure_debut , heure_debut);
	strcpy (e.heure_fin , heure_fin);
	strcpy (e.population , population);
	strcpy (e.conseiller , conseiller);
	strcpy (e.gouvernorat , gouvernorat);

	supprimer_election (e);
	afficher_election (treeview);
}


void
on_button33_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button32_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button31_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button30_ok_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{

}

