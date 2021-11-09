// But : Utiliser les fichiers pour stocker de l'information.
// On veut faire la moyenne des examens des étudiants
// Auteur : Karine Moreau
// Date : 2021-11-08

#include <iostream>
#include <fstream>         // Bibliothèque offrant les outils pour utiliser les fichiers : f : pour file et stream pour le flux
                           // Quand on lit des données dans un fichier, c'est un flux input (in) l'équivalent du cin, qui va du disque dur vers la mémoire
                           // Quand on sauvegarde des données dans un fichier, c'est un flux en sortie (cout), qui va de la mémoire vers le disque dur
#include <string>


using namespace std;


int main()
{
   setlocale(LC_ALL, "");
   // Déclaration des constantes
   const string NOM_FICHIER = "Donnees.txt";
  
 
   // Déclarations des variables
   ifstream canalEntree;            // if pour input file et stream pour la voie de circulation, une route 
   // 4 variables pour lire le contenu du fichier
   string nomEtudiant;
   double examen1;
   double examen2;
   double examenFinal;


   // Ouvrir un canal entre le fichier situé sur le disque dur et la mémoire qui permet de traiter les informations de façon plus rapide pour permettre
   // aux données de circuler. 
   // open permet d'initialiser la variable canalEntree. Open est comme le signe = dans entier = 12;
   canalEntree.open(NOM_FICHIER, ios::in);
   // Est-ce que le canal vers le fichier a bien été créé. Des fois cela peut mal se passer si le fichier n'existe pas, 
   // ou que l'utilisateur qui lance le programme n'ait pas les droits sur le fichier.
   if (!canalEntree)
   {
      cerr << "Erreur : le fichier " << NOM_FICHIER << " n'a pas pu être ouvert. Vérifiez le nom du fichier, son emplacement ou les droits d'accès à ce fichier.";
      // Si on n'a pas pu ouvrir le fichier, on n'a plus rien à faire ici
      // On quitte le programme, quelque soit l'endroit où on se trouve, quelque le niveau de profondeur dans les fonctions. On ne peut pas utiliser
      // return, car cela met fin à la fonction mais pas fin au programme. Exit permet de quitter le programme quelque soit l'endroit.
      // On met un code d'erreur pour signaler le type d'erreur : 404 le fichier n'est pas pu s'ouvrir
      system("pause");
      exit(404);        
   }

   // Le fichier est bien ouvert, on continue
   cout << "Tout baigne !!" << endl;

   // On va lire un enregistrement dans le fichier : on lit une ligne au complet : 4 champs (colonnes) :
   // un champ de type string pour l'identification de l'étudiant
   // trois champs pour ses notes à l'examen1 (/30) l'examen2 (/30) et l'examen final (/40)
   // Il faut 4 variables pour avoir les info en mémoire
   getline(canalEntree, nomEtudiant, '\t');
   canalEntree >> examen1;
   canalEntree >> examen2;
   canalEntree >> examenFinal;

   // Rien nous dit que dans les variables il va y avoir des informations, car le fichier pourrait être vide.
   // Est-ce qu'on a pu lire dans le fichier. Le test est de vérifier si on a pas atteint la fin du fichier. eof : end of file c'est une fonction

   while (!canalEntree.eof())
   {
      cout << "Données lues dans fichier : " << nomEtudiant << " " << examen1 << " " << examen2 << " " << examenFinal << endl;
      // On TENTE de lire l'enregistrement (ligne) suivant
      getline(canalEntree, nomEtudiant, '\t');
      canalEntree >> examen1;
      canalEntree >> examen2;
      canalEntree >> examenFinal;
   }
   
   cout << "il n'y a plus de données dans le fichier" << endl;




   
   system("pause");
   return 0;
}



/*Plan de test

*/ 


