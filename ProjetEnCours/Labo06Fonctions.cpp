#include "Labo06Fonctions.h"



bool etreUnNombreEntier(string clavier)
{
   // Nombre positif : Si le premier caractère existe alors il doit être compris entre le caractère 0 et 9
   if (!(clavier.empty()) && (clavier.front() >= '0' && clavier.front() <='9'))
   {
      return true;
   }
   else
   {
    // Nombre négatif : Le premier caractère de clavier doit être un signe - suivi de 0 à 9 (dans le deuxième caractère)
      if (clavier.size() >=2 && clavier.at(0) == '-' && clavier[1] >= '0' && clavier[1] <= '9')
      {
         return true;
      }
   }
      
   return false;
}
