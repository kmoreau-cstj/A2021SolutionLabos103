// But : Cr�er nos propres fonctions
// 
// Auteur : Karine Moreau
// Date : 2021-09-27
#include <iostream>
#include "Labo05PrototypeFonction.h"

using namespace std;
int main()

{
   setlocale(LC_ALL, "");
   //d�claration des variables
   double nb;
   double resultat;

   cout << "Veuillez entrer un nombre :";
   cin >> nb;

   cout << "Voici le carr� du nombre " << calculerCarre(nb) << endl;     // la fonction pow est appel�e et son r�sultat est envoy� � l'�cran


   system("pause");
   return 0;
}



/*Plan de test

*/ 


