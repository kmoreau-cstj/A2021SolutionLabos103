// But : Utiliser une nouvelle structure de donn�es  : les vecteurs. 
// Les vecteurs permettent de r�server en m�moire un nombre quelconque de variables de m�me type.
// Auteur : Karine Moreau
// Date : 2021-11-01

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
   setlocale(LC_ALL, "");
   // D�claration des constantes
   const int NBETUDIANTS = 5;

   // on voudrait demander 10 notes d'�tudiants, les stocker dans un vecteur et calculer la moyenne du groupe
   // D�clarations des variables
   int nbValeurs;
   int temp;
   double somme = 0;
   double noteNouvelEtudiant;
   vector<double> vecNote(NBETUDIANTS);         // ici on appelle la fonction : le constructeur de la classe vector qui permet de d�clarer la variable vecNote
                                                // Et les 10 cases sont initialis�es � 0

   vector<int> vecEntier;                       // ici on vient de cr�er un vecteur qui ne contient aucun �l�ment. Il pourra grossir selon le besoin
   vector<char> vecVoyelle{ 'a', 'e', 'i', 'o', 'u' ,'y' };   // Ici on vient de d�clarer un vecteur de 6 �l�ments et on l'a initialis�
   vector<float> vecReel{ 0.5, 11.5, 22.5, 8.79, 125.32 };

   // On demande les 10 notes � l'utilisateur et on les stocke dans le vecteur

   // Avec les vecteurs, on doit souvent avoir recours � une boucle for pour parcourir l'ensemble des cases du vecteur.
   // Le compteur fournira le num�ro de la case du vecteur. La premi�re case porte toujours le num�ro 0. 
   // L'indice de la derni�re case du vecteur est toujours le nombre d'�lements du tableau  MOINS 1 (-1). Ici c'est 9
   for (int indice = 0; indice < NBETUDIANTS; indice++)
   {
      cout << "Veuillez entrer la note de l'�tudiant #" << indice + 1 << " : ";
      cin >> vecNote[indice];
      //cin >> vecNote.at(indice);
      
   }

   // demander � l'utilisateur combien il veut de valeurs
   cout << "Veuillez entrer le nombre de valeurs d�sir�es : ";
   cin >> nbValeurs;

   // On cr�e la case et on y stocke l'information fournie par l'utilisateur
   for (int numCase = 0; numCase < nbValeurs; numCase++)
   {
      cout << "Veuillez entrer la valeur #" << numCase + 1 << " : ";
      cin >> temp;
      // Il faut cr�er la case dans le vecteur et y stocker la valeur; La case est ajout�e � la fin du vecteur.
      vecEntier.push_back(temp);
   }

   // Permet de changer la valeur d'une case en particulier : ici on change la note du 4i�me �tudiant. ATTENTION : Cette case doit exister
   vecNote.at(3) = 85;

   // On ajoute un �tudiant de plus
   cout << "Veuillez entrer la note du nouvel �tudiant : ";
   cin >> noteNouvelEtudiant;
   vecNote.push_back(noteNouvelEtudiant);

   // On affiche les valeurs contenues dans le vecteur
   for (int i = 0; i < vecNote.size(); i++)
   {
      cout << "L'�tudiant # " << i + 1 << " a obtenu " << vecNote.at(i) << endl;
   }

   

   // On veut calculer la moyenne des notes : On doit faire la somme et diviser par le nombre d'�tudiants
   for (int numElement = 0; numElement < vecNote.size(); numElement++)
   {
      somme += vecNote[numElement];
   }
   if(!vecNote.empty())
      cout << "La moyenne du groupe est de " << somme / vecNote.size() << endl;

   // On voudrait trier les notes dans l'ordre croissant
   sort(vecNote.begin(), vecNote.end());

   // On affiche le vecteur tri�
   for (int i = 0; i < vecNote.size(); i++)
   {
      cout << "la note # " << i + 1 << " est " << vecNote.at(i) << endl;
   }
 
   system("pause");
   return 0;
}



/*Plan de test

*/ 


