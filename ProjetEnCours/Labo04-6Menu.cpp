// But : Afficher le menu suivant
// a. Addition
// b. Soustraction
// c. Multiplication
// d. Division
// e. Quitter
// 
// Demander à l'utilisateur son choix dans le menu.
// Tant que le choix n'est pas valide le programme le redemande à l'utilisateur
// 
// Tant que le choix de l'utilisateur n'est pas de quitter le programme, on affiche le choix en toute lettre.
// 
// 
// Auteur : Karine Moreau
// Date : 2021-09-20
#include <iostream>

using namespace std;
int main()

{
   // Déclaration des variables
   char choix;


   setlocale(LC_ALL, "");

   // On affiche le menu en haut de l'écran
   system("cls");
   cout << "a. Addition" << endl;
   cout << "b. Soustraction" << endl;
   cout << "c. Multiplication" << endl;
   cout << "d. division" << endl;
   cout << "e. Quitter" << endl;
   // On lit le choix de l'utilisateur
   cin >> choix;

   // TODO : il faut valider que le choix est bien compris entre a et e
   // On affiche un message d'erreur tant que la lettre n'est pas comprise entre a et e
   while (!((choix >='a' && choix<='e') || (choix >= 'A' && choix <= 'E')))
   {
      cout << "Erreur : Le choix n'est pas compris entre a et e." << endl;
      system("pause");
      // On doit réafficher le menu

      system("cls");
      cout << "a. Addition" << endl;
      cout << "b. Soustraction" << endl;
      cout << "c. Multiplication" << endl;
      cout << "d. division" << endl;
      cout << "e. Quitter" << endl;
      // On lit le choix de l'utilisateur
      cin >> choix;
   }

   // Quand on est ici, le choix est soit a, b, c, d ou e



   // TODO : Tant que l'utilisateur ne quitte pas, on confirme son choix d'opération en toute lettre
   while (choix !='e' && choix !='E')
   {
      switch (choix)
      {
         case 'a' :
         case 'A' :
            cout << "vous avez choisi l'addition\n";
            break;
         case 'b' :
         case 'B' :
            cout << "vous avez choisi la soustraction\n";
            break;
         case 'c' :
         case 'C' :
            cout << "vous avez choisi la multiplication\n";
            break;
         default:
            cout << "vous avez choisi la division\n";
            break;
      }
      
      
      /*if (choix == 'a' || choix == 'A')
      {
         cout << "vous avez choisi l'addition\n";
      }
      else if (choix == 'b' || choix == 'B')
      {
         cout << "vous avez choisi la soustraction\n";
      }
      else if (choix == 'c' || choix == 'C')
      {
         cout << "vous avez choisi la multiplication\n";
      }
      else
      {
         cout << "vous avez choisi la division\n";
      }
      */
      // Avant l'effacer l'écran il faut donner la chance de voir le message précédent
      system("pause");

      // A la fin de la boucle, il faut permettre de changer le choix dans le menu
       // On affiche le menu en haut de l'écran
      system("cls");
      cout << "a. Addition" << endl;
      cout << "b. Soustraction" << endl;
      cout << "c. Multiplication" << endl;
      cout << "d. division" << endl;
      cout << "e. Quitter" << endl;
      // On lit le choix de l'utilisateur
      cin >> choix;

      // TODO : il faut valider que le choix est bien compris entre a et e
      // On affiche un message d'erreur tant que la lettre n'est pas comprise entre a et e
      while (!((choix >= 'a' && choix <= 'e') || (choix >= 'A' && choix <= 'E')))
      {
         cout << "Erreur : Le choix n'est pas compris entre a et e." << endl;
         system("pause");
         // On doit réafficher le menu

         system("cls");
         cout << "a. Addition" << endl;
         cout << "b. Soustraction" << endl;
         cout << "c. Multiplication" << endl;
         cout << "d. division" << endl;
         cout << "e. Quitter" << endl;
         // On lit le choix de l'utilisateur
         cin >> choix;
      }

      // Quand on est ici, le choix est soit a, b, c, d ou e

   }








   

   system("pause");
   return 0;
}



/*Plan de test

*/ 


