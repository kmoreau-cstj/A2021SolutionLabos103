// But : Utiliser des fonctions de la bibliothèque iomanip pour aligner correctement du texte ou nombres à l'écran
// Auteur : Karine Moreau
// Date : 2021-10-25


#include "Labo07Fonctions.h"

int main()

{
   setlocale(LC_ALL, "");
   // Déclaration des variables
   int a = 11;
   int b = 123;
   int c = 1023;
   int d = 10512;

   int nb;
   string titre;

   // Déclaration des constantes

   // Ici on souhaite avoir deux colonnes : une pour la description (texte) et une autre pour les valeurs numériques



   cout << left << setfill(' ') << setw(LARGEUR_COL1) << "valeur a" << " : " << right << setfill('.') << setw(LARGEUR_COL2) << a << endl;
   cout << left << setfill(' ') << setw(LARGEUR_COL1) << "valeur b" << " : " << right << setfill('.') << setw(LARGEUR_COL2) << b << endl;
   cout << left << setfill(' ') << setw(LARGEUR_COL1) << "valeur c" << " : " << right << setfill('.') << setw(LARGEUR_COL2) << c << endl;
   cout << left << setfill(' ') << setw(LARGEUR_COL1) << "valeur d" << " : " << right << setfill('.') << setw(LARGEUR_COL2) << d << endl;

   cout << setfill('-') << setw(LARGEUR_COL1 + 3 + LARGEUR_COL2) << "-" << "\n";

   cout << left << setfill(' ') << setw(LARGEUR_COL1) << "somme" << " : " << right << setfill('.') << setw(LARGEUR_COL2) << a + b + c + d << endl;


   // Demander à l'utilisateur un nombre
   cout << "Veuillez entrer un nombre plus petit que 80 : ";
   cin >> nb;
   cin.ignore();

   // Afficher une ligne de nb tirets
   //cout << setfill('-') << setw(nb) << "-" << "\n";
   //cout << setfill('-') << setw(nb) << endl << "Bonjour";
   tracerLigne('-', nb, false);
   tracerLigne('-', nb, true);


   // Demander à l'utilisateur un titre à centrer
   cout << "Veuillez entrer le titre à centrer : ";
   getline(cin, titre, '\n');

   // On veut centrer le titre dans une ligne de tirets
   centrerTexte('*', nb, titre);

    
   system("pause");
   return 0;
}



/*Plan de test

*/ 


