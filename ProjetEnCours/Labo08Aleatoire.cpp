// But : Comprendre comment l'ordinateur g�n�re un nombre al�atoire
// Auteur : Karine Moreau
// Date : 2021-10-27


#include "Labo08Fonctions.h"

int main()
{
   setlocale(LC_ALL, "");
   srand(time(NULL));                   // Permet de choisir la graine de l'al�atoire = le num�ro de ligne des nombres de 0 la 32767 qui m�lang�s

   int alea;
   int min;
   int max;



   cout << "Valeur maximale pour le rand : " << RAND_MAX << endl;

   alea = rand();

   cout << "Premi�re valeur al�atoire : " << alea << endl;

   cout << "Veuillez entrer le min : ";
   cin >> min;
   cout << "Veuillez entrer le max : ";
   cin >> max;




   for (int i = 0; i < 20; i++)
   {
      cout << "Valeur al�atoire #" << i + 1  << " : " << genererAlea(min, max) << endl;
   }



    
   system("pause");
   return 0;
}



/*Plan de test

*/ 


