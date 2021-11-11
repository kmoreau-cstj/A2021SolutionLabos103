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
   const string NOM_FICHIER = "Donnees.txt";
   const string RESULTAT = "Resultats.txt";
   const string TITRE = "R�sultats du cours de programmation structur�e";
   const string TITRE_COL1 = "Nom �tudiant";
   const string TITRE_COL2 = "Evaluation 1";
   const string TITRE_COL3 = "Eval 2";
   const string TITRE_COL4 = "Eval 3";
   const string TITRE_COL5 = "Total";
   const string TITRE_COL6 = " R�sultats";
   const string REUSSITE = " Succ�s";
   const string PAS_REUSSITE = " �chec";
   const string STAT = "Statistiques";

   const string MOYENNE = "Moyenne";

   const char MOTIF1 = '-';
   const char MOTIF2 = ' ';

   const int ENTRE_DEUX = 3;
   const int COL1 = 32;
   const int COL2 = TITRE_COL2.size() + ENTRE_DEUX ;
   const int COL3 = TITRE_COL3.size() + ENTRE_DEUX;
   const int COL4 = TITRE_COL4.size() + ENTRE_DEUX;
   const int COL5 = TITRE_COL5.size() + ENTRE_DEUX;
   const int COL6 = TITRE_COL6.size() + ENTRE_DEUX;
   const int LARGEUR = COL1 + COL2 + COL3 + COL4 + COL5 + COL6;
   const int NOTE_PASSAGE = 60;

   // D�clarations des variables
   ifstream canalEntree;            // if pour input file et stream pour la voie de circulation, une route 
   ofstream canalSortie;            // of pour output file route pour partir de la m�moire et aller vers le disque dur
   // 4 variables pour lire le contenu du fichier
   string nomEtudiant;
   double examen1;
   double examen2;
   double examenFinal;
   double total;

   double moyenne1 = 0;
   double moyenne2 = 0;
   double moyenneFinal = 0;
   double moyenneTotal = 0;
   int nbEtudiant = 0;



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

   canalSortie.open(RESULTAT, ios::out);        // Si le fichier existe d�j� il est automatiquement supprim� sans confirmation. 
                                                // le mode app (pour append) permet d'ajouter � la fin d'un fichier existant.
   if (!canalSortie)
   {
      cerr << "Erreur : Le fichier " << RESULTAT << " n'a pas pu �tre cr��. V�rifiez l'espace disque ou vos droits d'acc�s." << endl;
      system("pause");
      exit(505);
   }

   // On peut formater l'affichage des nombres � virgule avec seulement deux d�cimales. Par d�faut l'affichage est en scientifique e3

   // Il faut d'abord pr�ciser fixed pour que le setprecision indique le nombre de chiffres apr�s la virgule
   canalSortie << fixed << setprecision(2);


   // On �crit l'en-t�te du fichier resultat
   /*
   ----------------------------------------------------------------------------------
   ............    R�sultats du cours de programmation structur�e
   ----------------------------------------------------------------------------------
   Nom �tudiant                        Eval 1    Eval 2    Eval 3     Total R�sultats 
   ----------------------------------------------------------------------------------
     
   */

   canalSortie << setfill(MOTIF1) << setw(LARGEUR) << MOTIF1 << endl;
   canalSortie << setfill(MOTIF2) << setw((LARGEUR - TITRE.size()) / 2) << MOTIF2 << TITRE << setw((LARGEUR - TITRE.size()) / 2) << MOTIF2 << endl;
   canalSortie << setfill(MOTIF1) << setw(LARGEUR) << MOTIF1 << endl;
   canalSortie << setfill(MOTIF2) << left  << setw(COL1) << TITRE_COL1;
   canalSortie << setfill(MOTIF2) << right << setw(COL2) << TITRE_COL2;
   canalSortie << setfill(MOTIF2) << right << setw(COL3) << TITRE_COL3;
   canalSortie << setfill(MOTIF2) << right << setw(COL4) << TITRE_COL4;
   canalSortie << setfill(MOTIF2) << right << setw(COL5) << TITRE_COL5;
   canalSortie << setfill(MOTIF2) << left  << setw(COL6) << TITRE_COL6 << endl;
   canalSortie << setfill(MOTIF1) << setw(LARGEUR) << MOTIF1 << endl;


   // Le fichier est bien ouvert, on continue
   cout << "Tout baigne !!" << endl;

   // On va lire un enregistrement dans le fichier : on lit une ligne au complet : 4 champs (colonnes) :
   // un champ de type string pour l'identification de l'�tudiant
   // trois champs pour ses notes � l'examen1 (/30) l'examen2 (/30) et l'examen final (/40)
   // Il faut 4 variables pour avoir les info en m�moire
   getline(canalEntree, nomEtudiant, '\t');
   canalEntree >> examen1;
   canalEntree >> examen2;
   canalEntree >> examenFinal;
   canalEntree.ignore(1, '\n');


   // Rien nous dit que dans les variables il va y avoir des informations, car le fichier pourrait �tre vide.
   // Est-ce qu'on a pu lire dans le fichier. Le test est de v�rifier si on a pas atteint la fin du fichier. eof : end of file c'est une fonction

   while (!canalEntree.eof())
   {
      // La tentative de lecture dans le fichier source a r�ussi, on peut traiter les informations lues
      //Audet Nicole               			 30.00     30.00     28.00     88.00 Succ�s 
      total = examen1 + examen2 + examenFinal;
      canalSortie << setfill(MOTIF2) << left  << setw(COL1) << nomEtudiant;
      canalSortie << setfill(MOTIF2) << right << setw(COL2) << examen1;
      canalSortie << setfill(MOTIF2) << right << setw(COL3) << examen2;
      canalSortie << setfill(MOTIF2) << right << setw(COL4) << examenFinal;
      canalSortie << setfill(MOTIF2) << right << setw(COL5) << total;
      canalSortie << setfill(MOTIF2) << left  << setw(COL6) << ( total >= NOTE_PASSAGE ? REUSSITE : PAS_REUSSITE) << endl;

      // Faire les calculs des moyennes :
      moyenne1 += examen1;
      moyenne2 += examen2;
      moyenneFinal = moyenneFinal + examenFinal;
      nbEtudiant++;


        
      // On TENTE de lire l'enregistrement (ligne) suivant
      getline(canalEntree, nomEtudiant, '\t');
      canalEntree >> examen1;
      canalEntree >> examen2;
      canalEntree >> examenFinal;
      canalEntree.ignore();            // On n'est pas oblig� de mettre 1, '\n' car ce sont les valeurs par d�faut
   }
   

   // Pied de page du fichier de sortie :
   /*
   ----------------------------------------------------------------------------------
   Statistiques
   Moyenne                              19.73     20.00     23.00     62.73
----------------------------------------------------------------------------------
   
   */

   // On finit de calculer moyenne car on a la somme pour l'instant
   if (nbEtudiant >0)
   {
      moyenne1 /= nbEtudiant;
      moyenne2 /= nbEtudiant;
      moyenneFinal /= nbEtudiant;
      moyenneTotal = moyenne1 + moyenne2 + moyenneFinal;
   }

   canalSortie << setfill(MOTIF1) << setw(LARGEUR) << MOTIF1 << endl;
   canalSortie << setfill(MOTIF2) << left << setw(COL1) << STAT << endl;
   canalSortie << setfill(MOTIF2) << left << setw(COL1)  << MOYENNE;
   canalSortie << setfill(MOTIF2) << right << setw(COL2) << moyenne1;
   canalSortie << setfill(MOTIF2) << right << setw(COL3) << moyenne2;
   canalSortie << setfill(MOTIF2) << right << setw(COL4) << moyenneFinal;
   canalSortie << setfill(MOTIF2) << right << setw(COL5) << moyenneTotal << endl;
   canalSortie << setfill(MOTIF1) << setw(LARGEUR) << MOTIF1 << endl;

   cout << "il n'y a plus de donn�es dans le fichier" << endl;

   // A la fin du programme : il faut fermer les fichiers en passant par le canal
   canalEntree.close();
   canalSortie.close();


   
   system("pause");
   return 0;
}



/*Plan de test

*/ 


