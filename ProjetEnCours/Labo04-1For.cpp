// But : Le programme demande à l'utilisateur 36 notes et calcule la moyenne du groupe
// Auteur : Karine Moreau
// Date : 2021-09-13

#include <iostream>

using namespace std;

void main()
{
   setlocale(LC_ALL, "");

   // Déclaration et initialisation (donner une valeur de départ) des constantes
   const int NB_NOTES = 5;

   // Déclaration des variables
   // Il y a les informations que l'utilisateur fournit, il a la responsabilité de fournir la valeur de départ
   float note;
   // il y a les résultats que le programme calcule. Le programme doit initialiser la variable pour les résultats
   float moyenne=0;       // Au début du programme, quand il y a encore 0 notes de connues, la moyenne vaut combien ????
  

   // On doit demander les notes et les additionner plusieurs fois => on fait une boucle
   for ( int compteur = 1;  compteur <= NB_NOTES;  compteur++)
   {
     // Il faut demander la note à l'utilisateur
      cout << "Veuillez entrer une note :";
      cin >> note;

      // On doit ajouter cette note à la somme des notes. On utilise la même variable que le résultat attendu : moyenne
      moyenne = note + moyenne;
   }

   // Après la boucle, les notes ont été additionnées dans la variable moyenne
   // Il faut diviser par le nombre total de notes
   moyenne = moyenne / NB_NOTES;

   // On affiche le résultat à l'écran
   cout << "la moyenne du groupe est de : " << moyenne << endl;


   system("pause");

     
}


/*Plan de test

*/ 


