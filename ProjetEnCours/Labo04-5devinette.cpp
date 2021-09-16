// But : Complétez ce programme pour qu’il donne la possibilité à l’utilisateur de deviner le nombre contenu dans random.
//L’utilisateur a un maximum de 5 chances.Le programme vérifie que l’utilisateur a bien entré un nombre entre 0 et
//100 et lui indique s’il gagne ou dans le cas contraire lui indique le nombre d’essais restant et lui redemande un
//nombre.
// Auteur : Karine Moreau
// Date : 2021-09-15
#include <iostream>
#include <time.h>
using namespace std;
int main()

{
   setlocale(LC_ALL, "");

   const int MIN = 0;
   const int MAX = 100;
   const int NBCHANCE = 5;
   int nbessai = NBCHANCE;
   int nb;
   int random; // permet de mémoriser le nombre choisi aléatoirement par l’ordinateur
   srand(time(0)); // pour activer l’aléatoire dans le programme
   random = rand() % (MAX - MIN + 1) + MIN; // l’ordinateur calcule un nombre aléatoire entre 0 et 100 et le stocke dans random
   cout << "Le nombre à trouver est " << random;
   cout << "Vous avez " << NBCHANCE << " chances pour deviner un nombre compris entre " << MIN << " et " << MAX << endl ;
   cin >> nb;

   while (!(nb >= MIN && nb <= MAX ))
   {
      cout << " Mauvaise Réponse " << endl;
    
      cout << "Vous avez " << nbessai << " chances pour deviner un nombre compris entre " << MIN << " et " << MAX << endl;
      cin >> nb;
   }
   
   nbessai = nbessai -1; 
   //Il a rentré un nombre valide on lui enlève un essai.
   //Tant que le nombre n'est pas égale à random et qu'il lui reste des chances on va lui demander un autre nombre.

   while (nb != random && nbessai != 0 )
   {
      cout << " Ce n'est pas le bon nombre ";
      cout << "Vous avez " << nbessai << " chances pour deviner un nombre compris entre " << MIN << " et " << MAX << endl;
      cin >> nb;

      while (!(nb >= MIN && nb <= MAX))
      {
         cout << " Mauvaise Réponse " << endl;

         cout << "Vous avez " << nbessai << " chances pour deviner un nombre compris entre " << MIN << " et " << MAX << endl;
         cin >> nb;
      }
      nbessai--;
   }

   if (nb == random  )
   {
      cout << "Bravo vous avez gagné en " <<  NBCHANCE - nbessai << "chances";
   }
     
   else
   {
      cout << "Tu as perdu le nombre gagnant était " << random ;
   }



   system("pause");
   return 0;
}



/*Plan de test

*/ 


