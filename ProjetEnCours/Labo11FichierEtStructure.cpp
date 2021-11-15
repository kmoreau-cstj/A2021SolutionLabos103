// But : Utiliser les fonctions avec les fichiers.

// Auteur : Karine Moreau
// Date : 2021-11-15

#include "Labo11Fonctions.h"


int main()
{
   setlocale(LC_ALL, "");
 

   // Déclarations des variables
   ifstream canalEntree = ouvrirFichierEnLecture(NOM_FICHIER);            // if pour input file et stream pour la voie de circulation, une route 
   ofstream canalSortie = ouvrirFichierEnEcriture(RESULTAT);            // of pour output file route pour partir de la mémoire et aller vers le disque dur
   // 4 variables pour lire le contenu du fichier
   noteEtudiant unEtudiantEtSesNotes;                             // Nom de l'enveloppe qui contient 4 informations définies dans la structure

   pourLesCalculs totalEtMoyenne;

   // Initialiser le canal d'entrée si pas fait à sa déclaration
   // canalEntree = ouvrirFichierEnLecture(NOM_FICHIER);

   // Initialiser le canal de sortie si pas fait à sa déclaration
   // canalSortie = ouvrirFichierEnEcriture(RESULTAT);

   ecrireEnTete(canalSortie);
   

   // Le fichier est bien ouvert, on continue
   cout << "Tout baigne !!" << endl;

   // On TENTE de lire le premier enregistrement
   unEtudiantEtSesNotes = lireEnregistrement(canalEntree);

   // Rien nous dit que dans les variables il va y avoir des informations, car le fichier pourrait être vide.
   // Est-ce qu'on a pu lire dans le fichier. Le test est de vérifier si on a pas atteint la fin du fichier. eof : end of file c'est une fonction

   while (!canalEntree.eof())
   {
      // La tentative de lecture dans le fichier source a réussi, on peut traiter les informations lues
      //Audet Nicole               			 30.00     30.00     28.00     88.00 Succès 
      totalEtMoyenne = faireCalculs(unEtudiantEtSesNotes);

      canalSortie << setfill(MOTIF2) << left  << setw(COL1) << nomEtudiant;
      canalSortie << setfill(MOTIF2) << right << setw(COL2) << examen1;
      canalSortie << setfill(MOTIF2) << right << setw(COL3) << examen2;
      canalSortie << setfill(MOTIF2) << right << setw(COL4) << examenFinal;
      canalSortie << setfill(MOTIF2) << right << setw(COL5) << total;
      canalSortie << setfill(MOTIF2) << left  << setw(COL6) << ( total >= NOTE_PASSAGE ? REUSSITE : PAS_REUSSITE) << endl;

   


        
      // On TENTE de lire l'enregistrement (ligne) suivant en utilisant la deuxième fonction de lireEnregistrement
      lireEnregistrement(canalEntree, unEtudiantEtSesNotes);
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

   cout << "il n'y a plus de données dans le fichier" << endl;

   // A la fin du programme : il faut fermer les fichiers en passant par le canal
   canalEntree.close();
   canalSortie.close();


   
   system("pause");
   return 0;
}



/*Plan de test

*/ 


