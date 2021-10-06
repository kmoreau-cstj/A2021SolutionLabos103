#pragma once
#include<string>
using namespace std;

double calculerMax(double valeur1, double valeur2, double valeur3);

double calculerFactorielle(int nb);



void afficherDateLongue(int j, int m, int a);

bool etrePair(int nb);
int DeterminerCategorie(int age);


bool verifierAgeCategorie(int age, int categorie);

bool validerCategorieAge(int age, int categorie);

int demanderAge(const int MIN, const int MAX);

int demanderValeur(const int MIN, const int MAX,string mot);
int demanderValeur(const int MIN, bool minInclus, const int MAX, bool maxInclus, string mot);