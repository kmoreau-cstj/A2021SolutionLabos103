// But : Le programme demande � l'utilisateur 36 notes et calcule la moyenne du groupe
// Auteur : Karine Moreau
// Date : 2021-09-13

#include <iostream>

using namespace std;

void main()
{
   setlocale(LC_ALL, "");

   // D�claration et initialisation (donner une valeur de d�part) des constantes
   const int NB_NOTES = 5;

   // D�claration des variables
   // Il y a les informations que l'utilisateur fournit, il a la responsabilit� de fournir la valeur de d�part
   float note;
   // il y a les r�sultats que le programme calcule. Le programme doit initialiser la variable pour les r�sultats
   float moyenne=0;       // Au d�but du programme, quand il y a encore 0 notes de connues, la moyenne vaut combien ????
  

   // On doit demander les notes et les additionner plusieurs fois => on fait une boucle
   for ( int compteur = 1;  compteur <= NB_NOTES;  compteur++)
   {
     // Il faut demander la note � l'utilisateur
      cout << "Veuillez entrer une note :";
      cin >> note;

      // On doit ajouter cette note � la somme des notes. On utilise la m�me variable que le r�sultat attendu : moyenne
      moyenne = note + moyenne;
   }

   // Apr�s la boucle, les notes ont �t� additionn�es dans la variable moyenne
   // Il faut diviser par le nombre total de notes
   moyenne = moyenne / NB_NOTES;

   // On affiche le r�sultat � l'�cran
   cout << "la moyenne du groupe est de : " << moyenne << endl;


   system("pause");

     
}


/*Plan de test

*/ 


