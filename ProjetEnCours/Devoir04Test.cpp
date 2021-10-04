// But : Tester les fonctions du devoir 04
// Écrire une fonction qui permet de calculer la moyenne des notes entrées par l’utilisateur. Le nombre de notes est
//passé en paramètre à la fonction.Cette fonction n’affiche pas le résultat, elle doit le retourner.Le main est
//responsable de fournir le nombre de notes qui sera demandé à l’utilisateur et d’afficher la moyenne obtenue
// 
// But Écrire une fonction qui reçoit trois paramètres, le numéro du jour, le numéro du mois et l’année. A partir de ces
// informations, la fonction retourne vrai si la date est une date valide et faux dans le cas contraire.Le main demande
// ces trois valeurs à l’utilisateur tant que ces valeurs ne forment pas une date valide.
// Auteur : Karine Moreau
// Date : 2021-10-04
#include <iostream>
#include "Devoir04.h"

using namespace std;

int main()

{
   setlocale(LC_ALL, "");
   //déclaration des variables
   int nb_note ;
   int jour; 
   int mois;
   int annee;


   cout << "Entrer le jour" << endl;
   cout << "Entrer le mois" << endl;
   cout << "Entrer le année" << endl;
   cin >> jour;
   cin >> mois;
   cin >> annee;

   while (!(validerDate (jour, mois, annee)))
   {
      cout << "Entrer une date valide" << endl;
      cout << "Entrer le jour" << endl;
      cout << "Entrer le mois" << endl;
      cout << "Entrer le année" << endl;
      cin >> jour;
      cin >> mois;
      cin >> annee;
   }


  /* cout << "veuillez entrer le nombre de notes ";
   cin >> nb_note;
   //le nombre de note doit etre plus grand strictement que 0 sinon on affiche un message d'erreur

   while (!(nb_note > 0))
   {
      cout << "erreur le nombre de note doit etre plus grande que 0 ";

      cout << "veuillez entrer le nombre de notes ";
      cin >> nb_note;

   }

   cout << "la moyenne du group est de " << calculerlamoyenne(nb_note) << endl;

   */
   system("pause");
   return 0;
}



/*Plan de test

*/ 


