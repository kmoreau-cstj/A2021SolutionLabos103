// But : Utiliser des fonctions de math�matiques
// 
// Auteur : Karine Moreau
// Date : 2021-09-27
#include <iostream>
#include <math.h>                // Il y a des fonctions math�matiques comme calculer la puissance, les cosinus, logarithme, arrondi

using namespace std;
int main()

{
   setlocale(LC_ALL, "");
   //d�claration des variables
   double nb;
   double resultat;

   cout << "Veuillez entrer un nombre :";
   cin >> nb;

   cout << "Voici le carr� du nombre " << pow(2, nb) << endl;     // la fonction pow est appel�e et son r�sultat est envoy� � l'�cran
   resultat = pow(nb, 2);              // Ici on appelle la fonction pow, et le r�sultat est stock� dans une variable

   cout << "Calcul avec plusieurs appels de fonctions : " << pow(pow(nb, 2), 3) << endl;

   pow(5, 2);        // Appel de la fonction mais son r�sultat n'est pas exploit�

   if (pow(nb, 2) > 1)
   {
      cout << "Le calcul est positif et pas nul" << endl;

   }

   // TODO : Il faut arrondir le nombre � virgule � l'inf�rieur et au sup�rieur
   cout << "Le nombre arrondi � l'inf�rieur : " << floor(nb) << endl;
   cout << "le nombre arrondi au sup�rieur : " << ceil(nb) << endl;


   system("pause");
   return 0;
}



/*Plan de test

*/ 


