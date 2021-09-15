// But : Demander à l'utilisateur un nombre de départ et un nombre de fin. Le programme affiche les nombres entre ces deux valeurs
// verticalement.
// nombre de départ : 5
// nombre de fin : 10
// 5
// 6
// 7
// 8
// 9
// 10
// 
// nombre de départ : 10
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

   // Déclaration et initialisation (donner une valeur de départ) des constantes
   

   // Déclaration des variables
   // Il y a les informations que l'utilisateur fournit, il a la responsabilité de fournir la valeur de départ
   int depart;
   int fin;
   // il y a les résultats que le programme calcule. Le programme doit initialiser la variable pour les résultats
 

   cout << "Nombre de départ : ";
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


