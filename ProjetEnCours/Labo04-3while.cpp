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
   int compteur;

   cout << "Nombre de départ : ";
   cin >> depart;

   cout << "Nombre de fin : ";
   cin >> fin;

   cout << "Avec la boucle for :" << endl;
   for (int compteur = depart; compteur <= fin; compteur++)
   {
      cout << compteur << endl;
   }
   cout << "Avec la boucle while :" << endl;

   // Etape 1 de la boucle for ici
   compteur = depart;
   while (compteur <= fin)
   {

      // Instruction à répéter
      cout << compteur << endl;
      // Etape 3 de la boucle for
      compteur++;
   }



   cout << "avec la boucle for : " << endl;
   for (int compteur = depart; compteur >= fin; compteur--)
   {
      cout << compteur << endl;
   }

   cout << "avec la boucle while : " << endl;

   compteur = depart;
   while (compteur >= fin)
   {
      cout << compteur << endl;
      compteur--;
   }


   system("pause");

     
}


/*Plan de test

*/ 


