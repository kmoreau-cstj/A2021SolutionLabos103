// But : À partir des données disponibles dans un fichier d'entrée,
// générer la table de matières avec points de suite
// Auteur : Karine Moreau
// Date : 2021

#include "Labo11-TDM.h"     


int main()
{
	setlocale(LC_ALL, "");

	//déclaration des variables locales
	const string NOM_FICHIER_ENTREE="DonneesLivres.txt";
	const string NOM_FICHIER_SORTIE="TDM.txt";

	ifstream ifFichierEntree;
	ofstream ofFichierSortie;

	// Déclare les variables pour lire l'enregistrement dans le fichier


	// On tente d'ouvrir le fichier


	// On tente de créer le fichier



	// Écrire l'en-tête du fichier de sortie
	ofFichierSortie << "Table des matières" << endl;

	// Lire le premier enregistrement


	while(!ifFichierEntree.eof())
	{
	   // Écrire l'enregistrement formaté dans le fichier de sortie

		// Lire l'enregistrement suivant

		// On prépare pour afficher l'enregistrement suivant

	}


	cout << "la fin du fichier d'entrée est atteinte" <<endl;
	
	// Fermeture des fichiers
	ifFichierEntree.close();
	ofFichierSortie.close();

	system("PAUSE");
	return 0;

}









