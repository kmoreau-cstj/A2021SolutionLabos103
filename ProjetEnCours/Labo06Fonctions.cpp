#include "Labo06Fonctions.h"



bool etreUnNombreEntier(string clavier)
{
   // Nombre positif : Si le premier caract�re existe alors il doit �tre compris entre le caract�re 0 et 9
   if (!(clavier.empty()) && (clavier.front() >= '0' && clavier.front() <='9'))
   {
      return true;
   }
   else
   {
    // Nombre n�gatif : Le premier caract�re de clavier doit �tre un signe - suivi de 0 � 9 (dans le deuxi�me caract�re)
      if (clavier.size() >=2 && clavier.at(0) == '-' && clavier[1] >= '0' && clavier[1] <= '9')
      {
         return true;
      }
   }
      
   return false;
}
