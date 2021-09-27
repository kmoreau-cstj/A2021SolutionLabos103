// But : Créer nos propres fonctions
// 
// Auteur : Karine Moreau
// Date : 2021-09-27
#include <iostream>
#include "Labo05PrototypeFonction.h"

using namespace std;
int main()

{
   setlocale(LC_ALL, "");
   //déclaration des variables
   double nb;
   double resultat;

   cout << "Veuillez entrer un nombre :";
   cin >> nb;

   cout << "Voici le carré du nombre " << calculerCarre(nb) << endl;     // la fonction pow est appelée et son résultat est envoyé à l'écran


   system("pause");
   return 0;
}



/*Plan de test

*/ 


