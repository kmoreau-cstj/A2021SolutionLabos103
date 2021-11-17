// But : Utiliser les fonctions avec les fichiers.
// Auteur : Karine Moreau
// Date : 2021-11-15

#include "Labo11Fonctions.h"

int main()
{
   setlocale(LC_ALL, "");
 
   // Déclarations des variables
   // 4 variables pour lire le contenu du fichier
   noteEtudiant unEtudiantEtSesNotes;                             // Nom de l'enveloppe qui contient 4 informations définies dans la structure
   pourLesCalculs totalEtMoyenne;

   ifstream canalEntree = ouvrirFichierEnLecture(NOM_FICHIER);            // if pour input file et stream pour la voie de circulation, une route 
   ofstream canalSortie = ouvrirFichierEnEcriture(RESULTAT);            // of pour output file route pour partir de la mémoire et aller vers le disque dur
  // Le fichier est bien ouvert, on continue
   cout << "Tout baigne !!" << endl;
 
   ecrireEnTete(canalSortie);
 
   // On TENTE de lire le premier enregistrement
   unEtudiantEtSesNotes = lireEnregistrement(canalEntree);

   // Rien nous dit que dans les variables il va y avoir des informations, car le fichier pourrait être vide.
   // Est-ce qu'on a pu lire dans le fichier. Le test est de vérifier si on a pas atteint la fin du fichier. eof : end of file c'est une fonction

   while (!canalEntree.eof())
   {
      // La tentative de lecture dans le fichier source a réussi, on peut traiter les informations lues
      //Audet Nicole               			 30.00     30.00     28.00     88.00 Succès 
      calculerSomme(unEtudiantEtSesNotes, totalEtMoyenne);

      ecrireEnregistrement(canalSortie, unEtudiantEtSesNotes);
           
      // On TENTE de lire l'enregistrement (ligne) suivant en utilisant la deuxième fonction de lireEnregistrement
      lireEnregistrement(canalEntree, unEtudiantEtSesNotes);
   }

   cout << "il n'y a plus de données dans le fichier" << endl;
  
   // On a le cumul des notes et le nombre total d'étudiant, on calcule la moyenne
   calculerMoyenne(totalEtMoyenne);

   ecrirePiedDePage(canalSortie, totalEtMoyenne);

   // A la fin du programme : il faut fermer les fichiers en passant par le canal
   canalEntree.close();
   canalSortie.close();
   
   system("pause");
   return 0;
}
