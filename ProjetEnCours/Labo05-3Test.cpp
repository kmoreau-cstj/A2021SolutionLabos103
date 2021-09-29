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
   //déclaration des variables
   unsigned int nb;
   int nb1;
   int nb2;
   int nb3;


   cout << " ====================== Calculer le maximum de trois nombres passés en paramètre à une fonction ================" << endl;
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





   system("pause");
   return 0;
}



/*Plan de test

*/ 


