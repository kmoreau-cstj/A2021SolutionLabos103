// But : Utiliser des fonctions de mathématiques
// 
// Auteur : Karine Moreau
// Date : 2021-09-27
#include <iostream>
#include <math.h>                // Il y a des fonctions mathématiques comme calculer la puissance, les cosinus, logarithme, arrondi

using namespace std;
int main()

{
   setlocale(LC_ALL, "");
   //déclaration des variables
   double nb;
   double resultat;

   cout << "Veuillez entrer un nombre :";
   cin >> nb;

   cout << "Voici le carré du nombre " << pow(2, nb) << endl;     // la fonction pow est appelée et son résultat est envoyé à l'écran
   resultat = pow(nb, 2);              // Ici on appelle la fonction pow, et le résultat est stocké dans une variable

   cout << "Calcul avec plusieurs appels de fonctions : " << pow(pow(nb, 2), 3) << endl;

   pow(5, 2);        // Appel de la fonction mais son résultat n'est pas exploité

   if (pow(nb, 2) > 1)
   {
      cout << "Le calcul est positif et pas nul" << endl;

   }

   // TODO : Il faut arrondir le nombre à virgule à l'inférieur et au supérieur
   cout << "Le nombre arrondi à l'inférieur : " << floor(nb) << endl;
   cout << "le nombre arrondi au supérieur : " << ceil(nb) << endl;


   system("pause");
   return 0;
}



/*Plan de test

*/ 


