// But : Demande � l'utilisateur une hauteur  pour dessiner un triangle
// Par exemple hauteur =  7
// *
// **
// ***
// ****
// *****
// ******
// *******
// 
// deuxi�me triangle
// *******
// ******
// *****
// ****
// ***
// **
// *
// 
// troisi�me triangle
// ######*
// #####**
// ####***
// ###****
// ##*****
// #******
// *******
// 
// quatri�me triangle
// *******
//  ******
//   *****
//    ****
//     ***
//      **
//       *
// 
// 
// 
// Auteur : Karine Moreau
// Date : 2021-09-15
#include <iostream>

using namespace std;
int main()

{
   setlocale(LC_ALL, "");
   // D�claration des constantes
   const char MOTIF = '#';


   // D�claration des variables
   int hauteur;


   cout << "Veuillez indiquer la hauteur du rectangle : ";
   cin >> hauteur;


   // TODO : dessiner le triangle avec deux boucles for
   // Cette boucle permet de dessiner les lignes, elle va compter le nombre de endl que l'on fait
   for (int ligne = 1; ligne <= hauteur; ligne++)
   {
      // On fait une autre boucle pour faire les �toiles
      for (int etoile = 1; etoile <= ligne; etoile++)
      {
         cout << MOTIF;
      }
      cout << endl;
   }


   system("pause");
   return 0;
}



/*Plan de test
hauteur        longueur
5                 7              *******
                                 *******
                                 *******
                                 *******
                                 *******
0                 0              rien
-8                -5             rien
1                 1              *
*/ 


