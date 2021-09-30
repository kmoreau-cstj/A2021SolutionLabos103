#include "Labo05Biblio.h"
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


