// But : Demander � l'utilisateur un nombre de d�part et un nombre de fin. Le programme affiche les nombres entre ces deux valeurs
// verticalement.
// nombre de d�part : 5
// nombre de fin : 10
// 5
// 6
// 7
// 8
// 9
// 10
// 
// nombre de d�part : 10
// nombre de fin : 5
// 10
// 9
// 8
// 7
// 6
// 5
// 
// Auteur : Karine Moreau
// Date : 2021-09-15

#include <iostream>

using namespace std;

void main()
{
   setlocale(LC_ALL, "");

   // D�claration et initialisation (donner une valeur de d�part) des constantes
   

   // D�claration des variables
   // Il y a les informations que l'utilisateur fournit, il a la responsabilit� de fournir la valeur de d�part
   int depart;
   int fin;
   // il y a les r�sultats que le programme calcule. Le programme doit initialiser la variable pour les r�sultats
 

   cout << "Nombre de d�part : ";
   cin >> depart;

   cout << "Nombre de fin : ";
   cin >> fin;


   for (int compteur = depart; compteur <= fin; compteur++)
   {
      cout << compteur << endl;
   }

   for (int compteur = depart; compteur >= fin; compteur--)
   {
      cout << compteur << endl;
   }

  
   system("pause");

     
}


/*Plan de test

*/ 


