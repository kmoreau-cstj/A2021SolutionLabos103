#include "Labo05Biblio.h"
#include <iostream>
using namespace std;



double calculerMax(double valeur1, double valeur2, double valeur3)
{
   // déclaration des variables
   // Dans les fonctions les variables sont souvent le résultat de la fonction
   double max = valeur1;

   if (valeur2 > max)
   {
      max = valeur2;
   }
   if (valeur3 > max)
   {
      max = valeur3;
   }
   
   return max;
}

double calculerFactorielle(int nb)
{
   // Déclaration des variables dans la fonction : Souvent c'est le résultat de la fonction
   double factorielle = 1;          // 1, si on le multiplie par un autre nombre, son résultat donnera l'autre nombre
                                 // 0! donne toujours 1

   for (int compteur = 1; compteur <= nb; compteur++)
   {
      factorielle = factorielle * compteur;
   }

   return factorielle;
}

void afficherDateLongue(int j, int m, int a)
{
   cout << j;

   switch (m)
   {
      case 1:
         cout << " janvier ";
         break;
      case 2:
         cout << " février ";
         break;
      case 3:
         cout << " mars ";
         break;
      case 4:
         cout << " avril ";
         break;
      case 5:
         cout << " mai ";
         break;
      case 6:
         cout << " juin ";
         break;
      case 7:
         cout << " juillet ";
         break;
      case 8:
         cout << " août ";
         break;
      case 9:
         cout << " septembre ";
         break;
      case 10:
         cout << " octobre ";
         break;
      case 11:
         cout << " novembre ";
         break;
      case 12:
         cout << " décembre ";
         break;
   }
   cout << a;

}

bool etrePair(int nb)
{
   /*
   if (nb % 2 == 0)
   {
      return true;
   }
   else
   {
   return false;

   }
   */

   // return nb % 2 == 0;

   return !(nb%2);


}


