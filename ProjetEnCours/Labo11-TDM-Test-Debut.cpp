// But : � partir des donn�es disponibles dans un fichier d'entr�e,
// g�n�rer la table de mati�res avec points de suite
// Auteur : Karine Moreau
// Date : 2021

#include "Labo11-TDM.h"     


int main()
{
	setlocale(LC_ALL, "");

	//d�claration des variables locales
	const string NOM_FICHIER_ENTREE="DonneesLivres.txt";
	const string NOM_FICHIER_SORTIE="TDM.txt";

	ifstream ifFichierEntree;
	ofstream ofFichierSortie;

	// D�clare les variables pour lire l'enregistrement dans le fichier


	// On tente d'ouvrir le fichier


	// On tente de cr�er le fichier



	// �crire l'en-t�te du fichier de sortie
	ofFichierSortie << "Table des mati�res" << endl;

	// Lire le premier enregistrement


	while(!ifFichierEntree.eof())
	{
	   // �crire l'enregistrement format� dans le fichier de sortie

		// Lire l'enregistrement suivant

		// On pr�pare pour afficher l'enregistrement suivant

	}


	cout << "la fin du fichier d'entr�e est atteinte" <<endl;
	
	// Fermeture des fichiers
	ifFichierEntree.close();
	ofFichierSortie.close();

	system("PAUSE");
	return 0;

}









