#pragma once

// Liste des includes
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Liste des constantes


// Liste des prototypes 
void afficherVecteur( const vector<int>& vecAAfficher);
int calculerFrequence(vector<int> vecEntier, int valeurCherchee);
vector<int> supprimerValeur(vector<int> vecEntier, int valeurASupprimer);
void supprimerValeur2(vector<int>& vecEntier, int valeurASupprimer);

void echangerValeur(int& verreBleu, int& verreRouge);