// But : Demander à l'utilisateur une note comprise entre 0 et 100. 
// Le programme insulte l'utilisateur tant que la note n'est pas comprise entre 0 et 100 et il redemande une nouvelle note.
// A la fin le programme confirme que la note est bien comprise entre 0 et 100
// 
// Auteur : Karine Moreau
// Date : 2021-09-15

#include <iostream>

using namespace std;

void main()
{
   setlocale(LC_ALL, "");

   // Déclaration et initialisation (donner une valeur de départ) des constantes
   const double NOTE_MIN = 0;
   const double NOTE_MAX = 100;

   // Déclaration des variables
   // Il y a les informations que l'utilisateur fournit, il a la responsabilité de fournir la valeur de départ
   double note;
   // il y a les résultats que le programme calcule. Le programme doit initialiser la variable pour les résultats
 
   cout << "Veuillez entrer une note comprise entre " << NOTE_MIN << " et " << NOTE_MAX << " : ";
   cin >> note;

   while (note < NOTE_MIN || note > NOTE_MAX)
   {
      cout << "Erreur : La note n'est pas comprise entre " << NOTE_MIN << " et " << NOTE_MAX << "." << endl;

      cout << "Veuillez entrer une autre note comprise entre " << NOTE_MIN << " et " << NOTE_MAX << " : ";
      cin >> note;
   }


   cout << note << " est comprise entre " << NOTE_MIN << " et " << NOTE_MAX << endl;
   system("pause");

     
}


/*Plan de test

*/ 


