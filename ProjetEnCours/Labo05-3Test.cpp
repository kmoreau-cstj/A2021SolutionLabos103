// But : Tester nos nouvelles fonctions
// 
// Auteur : Karine Moreau
// Date : 2021-09-29
#include <iostream>
#include "Labo05Biblio.h"

using namespace std;

int main()

{
   setlocale(LC_ALL, "");
   //d�claration des variables
   unsigned int nb;
   int nb1;
   int nb2;
   int nb3;
   int jour;
   int mois;
   int annee;
   int entier;

   cout << " =============== fonction qui retourne vrai si le nombre pass� en param�tre est pair, sinon elle retourne faux ================" << endl;
   cout << "Veuillez entrer le nombre entier : ";
   cin >> entier;

   // Le programme principal affiche si le nombre est pair ou impair en faisant appel � la fonction
   if (etrePair(entier))
   {
      cout << entier << " est pair"<<endl;

   }
   else
        cout << entier << " est impair" <<endl;
   



   /*
   // jour = 30 mois=9 annee=2021 ==> 30 septembre 2021
   cout << " ====================== fonction qui affiche la date o� le mois est �crit en toute lettre ================" << endl;
   cout << " ====================== la fonction re�oit le num�ro du jour, le num�ro du mois et l'ann�e ================" << endl;
   cout << "Veuillez entrer le num�ro du jour : ";
   cin >> jour;
   cout << "Veuillez entrer le num�ro du mois : ";
   cin >> mois;
   cout << "Veuillez entrer l'ann�e : ";
   cin >> annee;

   // l'appel de la fonction pour afficher la date avec le mois en toute lettre
   cout << "Nous sommes le ";
   afficherDateLongue(jour, mois, annee);
   cout << endl;
   */


   /*
   cout << " ====================== Calculer le maximum de trois nombres pass�s en param�tre � une fonction ================" << endl;
   cout << "Veuillez entrer un nombre : ";
   cin >> nb1;
   cout << "Veuillez entrer un nombre : ";
   cin >> nb2;
   cout << "Veuillez entrer un nombre : ";
   cin >> nb3;

   cout << "le maximum de ces trois nombres est :" << calculerMax(nb1,nb2,nb3 )  << endl;



   cout << " ====================== Calculer la factorielle d'un nombre entier positif ================" << endl;
   cout << "Veuillez entrer un nombre : ";
   cin >> nb;
   cout << "La factorielle de "<< nb << " est " << calculerFactorielle(nb)<< endl;

   */



   system("pause");
   return 0;
}



/*Plan de test

*/ 


