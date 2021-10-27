#pragma once

// Liste des includes
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


// Liste des constantes seulement. On ne veut voir dans le .h la liste des variables. Elles doivent rester dans les fonctions
const int LARGEUR_COL1 = 10;
const int LARGEUR_COL2 = 25;






// Liste des prototypes de fonctions
void tracerLigne(char remplissage, int longueur, bool avecENDL);
void centrerTexte(char remplissage, int longueurTotal, string texte);





