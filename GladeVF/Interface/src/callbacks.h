#include <gtk/gtk.h>


void
on_entry2_insert_text                  (GtkEditable     *editable,
                                        gchar           *new_text,
                                        gint             new_text_length,
                                        gpointer         position,
                                        gpointer         user_data);

void
on_entry3_insert_text                  (GtkEditable     *editable,
                                        gchar           *new_text,
                                        gint             new_text_length,
                                        gpointer         position,
                                        gpointer         user_data);

void
on_buttonConnecter_clicked             (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonGBV_clicked                   (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonGE_clicked                    (GtkButton       *button,
                                        gpointer         user_data);

void
on_button2_clicked                     (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonsupp_clicked                  (GtkButton       *button,
                                        gpointer         user_data);

void
on_radiobutton16_toggled               (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_button27_clicked                    (GtkButton       *button,
                                        gpointer         user_data);

void
on_button29_clicked                    (GtkButton       *button,
                                        gpointer         user_data);

void
on_button28_clicked                    (GtkButton       *button,
                                        gpointer         user_data);

void
on_treeview6_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_button33_clicked                    (GtkButton       *button,
                                        gpointer         user_data);

void
on_button32_clicked                    (GtkButton       *button,
                                        gpointer         user_data);

void
on_button31_clicked                    (GtkButton       *button,
                                        gpointer         user_data);

void
on_button30_ok_clicked                 (GtkButton       *button,
                                        gpointer         user_data);
