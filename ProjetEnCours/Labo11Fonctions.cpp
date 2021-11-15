#include "Labo11Fonctions.h"

ifstream ouvrirFichierEnLecture(string nomFichier)
{
   ifstream canal;

   // Ouvrir un canal entre le fichier situ� sur le disque dur et la m�moire qui permet de traiter les informations de fa�on plus rapide pour permettre
   // aux donn�es de circuler. 
   // open permet d'initialiser la variable canalEntree. Open est comme le signe = dans entier = 12;
   canal.open(nomFichier, ios::in);
   // Est-ce que le canal vers le fichier a bien �t� cr��. Des fois cela peut mal se passer si le fichier n'existe pas, 
   // ou que l'utilisateur qui lance le programme n'ait pas les droits sur le fichier.
   if (!canal)
   {
      cerr << "Erreur : le fichier " << nomFichier << " n'a pas pu �tre ouvert. V�rifiez le nom du fichier, son emplacement ou les droits d'acc�s � ce fichier.";
      // Si on n'a pas pu ouvrir le fichier, on n'a plus rien � faire ici
      // On quitte le programme, quelque soit l'endroit o� on se trouve, quelque le niveau de profondeur dans les fonctions. On ne peut pas utiliser
      // return, car cela met fin � la fonction mais pas fin au programme. Exit permet de quitter le programme quelque soit l'endroit.
      // On met un code d'erreur pour signaler le type d'erreur : 404 le fichier n'est pas pu s'ouvrir
      system("pause");
      exit(404);
   }

    return canal;
}

ofstream ouvrirFichierEnEcriture(string nomFichier)
{
   ofstream canal;

   canal.open(nomFichier, ios::out);        // Si le fichier existe d�j� il est automatiquement supprim� sans confirmation. 
                                              // le mode app (pour append) permet d'ajouter � la fin d'un fichier existant.
   if (!canal)
   {
      cerr << "Erreur : Le fichier " << nomFichier << " n'a pas pu �tre cr��. V�rifiez l'espace disque ou vos droits d'acc�s." << endl;
      system("pause");
      exit(505);
   }
   return canal;
}

void ecrireEnTete(ofstream& canal)
{
   // On peut formater l'affichage des nombres � virgule avec seulement deux d�cimales. Par d�faut l'affichage est en scientifique e3

   // Il faut d'abord pr�ciser fixed pour que le setprecision indique le nombre de chiffres apr�s la virgule
   canal << fixed << setprecision(2);


   // On �crit l'en-t�te du fichier resultat

   /*
   ----------------------------------------------------------------------------------
   ............    R�sultats du cours de programmation structur�e
   ----------------------------------------------------------------------------------
   Nom �tudiant                        Eval 1    Eval 2    Eval 3     Total R�sultats
   ----------------------------------------------------------------------------------

   */

   canal << setfill(MOTIF1) << setw(LARGEUR) << MOTIF1 << endl;
   canal << setfill(MOTIF2) << setw((LARGEUR - TITRE.size()) / 2) << MOTIF2 << TITRE << setw((LARGEUR - TITRE.size()) / 2) << MOTIF2 << endl;
   canal << setfill(MOTIF1) << setw(LARGEUR) << MOTIF1 << endl;
   canal << setfill(MOTIF2) << left << setw(COL1) << TITRE_COL1;
   canal << setfill(MOTIF2) << right << setw(COL2) << TITRE_COL2;
   canal << setfill(MOTIF2) << right << setw(COL3) << TITRE_COL3;
   canal << setfill(MOTIF2) << right << setw(COL4) << TITRE_COL4;
   canal << setfill(MOTIF2) << right << setw(COL5) << TITRE_COL5;
   canal << setfill(MOTIF2) << left << setw(COL6) << TITRE_COL6 << endl;
   canal << setfill(MOTIF1) << setw(LARGEUR) << MOTIF1 << endl;



}

noteEtudiant lireEnregistrement(ifstream& canal)
{
   noteEtudiant etudiant;
   
   // On va lire un enregistrement dans le fichier : on lit une ligne au complet : 4 champs (colonnes) :
// un champ de type string pour l'identification de l'�tudiant
// trois champs pour ses notes � l'examen1 (/30) l'examen2 (/30) et l'examen final (/40)
// Il faut 4 variables pour avoir les info en m�moire
   getline(canal, etudiant.nomEtudiant, '\t');
   canal >> etudiant.examen1;
   canal >> etudiant.examen2;
   canal >> etudiant.examenFinal;
   canal.ignore(1, '\n');
   
   return etudiant;
}

void lireEnregistrement(ifstream& canal, noteEtudiant& etudiantEnCours)
{
   // On va lire un enregistrement dans le fichier : on lit une ligne au complet : 4 champs (colonnes) :
// un champ de type string pour l'identification de l'�tudiant
// trois champs pour ses notes � l'examen1 (/30) l'examen2 (/30) et l'examen final (/40)
// Il faut 4 variables pour avoir les info en m�moire
   getline(canal, etudiantEnCours.nomEtudiant, '\t');
   canal >> etudiantEnCours.examen1;
   canal >> etudiantEnCours.examen2;
   canal >> etudiantEnCours.examenFinal;
   canal.ignore(1, '\n');

}

pourLesCalculs faireCalculs(noteEtudiant etudiantEnCours)
{
   pourLesCalculs resultats;

   resultats.total = etudiantEnCours.examen1 + etudiantEnCours.examen2 + etudiantEnCours.examenFinal;
   // Faire les calculs des moyennes :
   resultats.moyenne1 += etudiantEnCours.examen1;
   resultats.moyenne2 += etudiantEnCours.examen2;
   resultats.moyenneFinal = resultats.moyenneFinal + etudiantEnCours.examenFinal;
   resultats.nbEtudiant++;

   return resultats;
}
