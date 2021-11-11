// But : Utiliser les fichiers pour stocker de l'information.
// On veut faire la moyenne des examens des �tudiants
// Auteur : Karine Moreau
// Date : 2021-11-08

#include <iostream>
#include <fstream>         // Biblioth�que offrant les outils pour utiliser les fichiers : f : pour file et stream pour le flux
                           // Quand on lit des donn�es dans un fichier, c'est un flux input (in) l'�quivalent du cin, qui va du disque dur vers la m�moire
                           // Quand on sauvegarde des donn�es dans un fichier, c'est un flux en sortie (cout), qui va de la m�moire vers le disque dur
#include <string>
#include <iomanip>


using namespace std;


int main()
{
   setlocale(LC_ALL, "");
   // D�claration des constantes
   const string NOM_FICHIER = "Exercice1.txt";
   



   const char MOTIF1 = '*';
   const char MOTIF2 = ' ';

   const int ENTRE_DEUX = 3;
   const int COL1 = 3;
 
  
   const int NOTE_PASSAGE = 60;

   // D�clarations des variables
   ifstream canalEntree;            // if pour input file et stream pour la voie de circulation, une route 
   // 1 variables pour lire le contenu du fichier
  
   int nb;


   // Ouvrir un canal entre le fichier situ� sur le disque dur et la m�moire qui permet de traiter les informations de fa�on plus rapide pour permettre
   // aux donn�es de circuler. 
   // open permet d'initialiser la variable canalEntree. Open est comme le signe = dans entier = 12;
   canalEntree.open(NOM_FICHIER, ios::in);
   // Est-ce que le canal vers le fichier a bien �t� cr��. Des fois cela peut mal se passer si le fichier n'existe pas, 
   // ou que l'utilisateur qui lance le programme n'ait pas les droits sur le fichier.
   if (!canalEntree)
   {
      cerr << "Erreur : le fichier " << NOM_FICHIER << " n'a pas pu �tre ouvert. V�rifiez le nom du fichier, son emplacement ou les droits d'acc�s � ce fichier.";
      // Si on n'a pas pu ouvrir le fichier, on n'a plus rien � faire ici
      // On quitte le programme, quelque soit l'endroit o� on se trouve, quelque le niveau de profondeur dans les fonctions. On ne peut pas utiliser
      // return, car cela met fin � la fonction mais pas fin au programme. Exit permet de quitter le programme quelque soit l'endroit.
      // On met un code d'erreur pour signaler le type d'erreur : 404 le fichier n'est pas pu s'ouvrir
      system("pause");
      exit(404);
   }

   // Le fichier est bien ouvert, on continue
   cout << "Tout baigne !!" << endl;

   // On va lire un enregistrement dans le fichier : on lit une ligne au complet : 1 champs (colonnes) :
   
   canalEntree >> nb;


   // Rien nous dit que dans les variables il va y avoir des informations, car le fichier pourrait �tre vide.
   // Est-ce qu'on a pu lire dans le fichier. Le test est de v�rifier si on a pas atteint la fin du fichier. eof : end of file c'est une fonction

   while (!canalEntree.eof())
   {
      if (nb > 70 || nb < 1)
      {
         cout << nb << " Erreur sur le nombre" << endl;
      }
      else
      {
         cout << left << setw(COL1) << nb << setfill(MOTIF1) << setw(nb) << MOTIF1 << setfill(MOTIF2) << endl;

      }
      canalEntree >> nb;
   }
   



   cout << "il n'y a plus de donn�es dans le fichier" << endl;

   // A la fin du programme : il faut fermer les fichiers en passant par le canal
   canalEntree.close();
 

   
   system("pause");
   return 0;
}



/*Plan de test

*/ 


