#include "Labo07Fonctions.h"


void tracerLigne(char remplissage, int longueur, bool avecENDL)
{
   cout << setfill(remplissage) << setw(longueur) << remplissage << (avecENDL ? "\n" : "");
   //cout << (avecENDL?"\n" : "");
}

void centrerTexte(char remplissage, int longueurTotal, string texte)
{
   // Il faut quelques tirets, puis le texte, et quelques tirets => il y a 3 colonnes : avant le texte, le texte, après le texte
   // On connait la longueur totale : c'est le paramètre longueur
   // On connait la longueur du texte : c'est texte.length() ou texte.size()
   // Donc on peut en déduire le reste de place qui sera occupé par le remplissage : longueur - texte.size()
   // Ce nombre de tirets, on doit en mettre la moitié à gauche et l'autre moitié à droite du texte

   // La colonne 1 : de gauche de tiret
   cout << setfill(remplissage) << setw((longueurTotal - texte.size()) / 2) << remplissage;
   // La colonne 2 : Le texte
   cout << texte;
   // La colonne 3 : de droite de tiret
   cout << setfill(remplissage) << setw((longueurTotal - texte.size()) / 2) << remplissage;
   cout << endl;



}
