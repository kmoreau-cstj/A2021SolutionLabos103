#include <iostream>
#include "Devoir04.h"
using namespace std;
float calculerlamoyenne(int nb_etudiant)

{

   //demander a l'utilisateur la note 
   float note;
   float resultat = 0;



   for (int numetudiant = 1; numetudiant <= nb_etudiant; numetudiant++)
   {
      cout << "veuillez entrer la  note de l'etudiant " << numetudiant;
      cin >> note;

      resultat = note + resultat;

   }


   return resultat / nb_etudiant;
}

bool validerDate(int jour, int mois, int annee)
{
   if (!(jour == 30 && mois == 4 || mois ==6 || mois == 9 || mois ==11))
   {
      return false;
   }
   if (!(jour == 3 && mois == 1 || mois == 3 || mois == 5 || mois == 7 || mois == 8 || mois == 10 || mois == 12))
   {
      return false;
   }
   if (!(jour == 29 && mois == 2 && etreBissextile(annee))
   {
      return false;
   }
   bool etreBissextile(int annee) 
   {
      // si l'année est divisible par 4 et non divisible par 100 ;
      // si l'année est divisible par 400 (« divisible » signifie que la division donne un nombre entier, sans reste).
      if (!(annee % 4 == 0 && (!(annee % 100 == 0))
      {
         if (!(annee % 400 == 0))
         {

         }
      }

      return false;
   }
}
