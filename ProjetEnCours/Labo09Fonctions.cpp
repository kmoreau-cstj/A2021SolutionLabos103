#include "Labo09Fonctions.h"

void afficherVecteur(vector<int> vecAAfficher)
{
	for (int i = 0; i < vecAAfficher.size(); i++)
	{
		cout << "vec[" << i << "]=" << vecAAfficher.at(i) << endl;
	}

}



int calculerFrequence(vector<int> vecEntier, int valeurCherchee)
{
	int nbValeur = 0;

	for (int indice = 0; indice < vecEntier.size(); indice++)
	{
		if (vecEntier[indice] == valeurCherchee)
		{
			nbValeur++;
		}
	}
	return nbValeur;
}

vector<int> supprimerValeur(vector<int> vecEntier, int valeurASupprimer)
{
	for ( int i = 0; i < vecEntier.size(); i++)
	{
		if (vecEntier.at(i) == valeurASupprimer)
		{
			vecEntier.erase(vecEntier.begin() + i);
			// On fait du surplace, on veut rester sur la même case
			i--;
		}
	}
	return vecEntier;

}

void supprimerValeur2(vector<int>& vecEntier, int valeurASupprimer)
{
	for (int i = 0; i < vecEntier.size(); i++)
	{
		if (vecEntier.at(i) == valeurASupprimer)
		{
			vecEntier.erase(vecEntier.begin() + i);
			// On fait du surplace, on veut rester sur la même case
			i--;
		}
	}

}
