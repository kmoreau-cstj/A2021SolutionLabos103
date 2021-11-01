// But : Utiliser une nouvelle structure de données  : les vecteurs. 
// Les vecteurs permettent de réserver en mémoire un nombre quelconque de variables de même type.
// Auteur : Karine Moreau
// Date : 2021-11-01

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
   setlocale(LC_ALL, "");
   // Déclaration des constantes
   const int NBETUDIANTS = 5;

   // on voudrait demander 10 notes d'étudiants, les stocker dans un vecteur et calculer la moyenne du groupe
   // Déclarations des variables
   int nbValeurs;
   int temp;
   double somme = 0;
   double noteNouvelEtudiant;
   vector<double> vecNote(NBETUDIANTS);         // ici on appelle la fonction : le constructeur de la classe vector qui permet de déclarer la variable vecNote
                                                // Et les 10 cases sont initialisées à 0

   vector<int> vecEntier;                       // ici on vient de créer un vecteur qui ne contient aucun élément. Il pourra grossir selon le besoin
   vector<char> vecVoyelle{ 'a', 'e', 'i', 'o', 'u' ,'y' };   // Ici on vient de déclarer un vecteur de 6 éléments et on l'a initialisé
   vector<float> vecReel{ 0.5, 11.5, 22.5, 8.79, 125.32 };

   // On demande les 10 notes à l'utilisateur et on les stocke dans le vecteur

   // Avec les vecteurs, on doit souvent avoir recours à une boucle for pour parcourir l'ensemble des cases du vecteur.
   // Le compteur fournira le numéro de la case du vecteur. La première case porte toujours le numéro 0. 
   // L'indice de la dernière case du vecteur est toujours le nombre d'élements du tableau  MOINS 1 (-1). Ici c'est 9
   for (int indice = 0; indice < NBETUDIANTS; indice++)
   {
      cout << "Veuillez entrer la note de l'étudiant #" << indice + 1 << " : ";
      cin >> vecNote[indice];
      //cin >> vecNote.at(indice);
      
   }

   // demander à l'utilisateur combien il veut de valeurs
   cout << "Veuillez entrer le nombre de valeurs désirées : ";
   cin >> nbValeurs;

   // On crée la case et on y stocke l'information fournie par l'utilisateur
   for (int numCase = 0; numCase < nbValeurs; numCase++)
   {
      cout << "Veuillez entrer la valeur #" << numCase + 1 << " : ";
      cin >> temp;
      // Il faut créer la case dans le vecteur et y stocker la valeur; La case est ajoutée à la fin du vecteur.
      vecEntier.push_back(temp);
   }

   // Permet de changer la valeur d'une case en particulier : ici on change la note du 4ième étudiant. ATTENTION : Cette case doit exister
   vecNote.at(3) = 85;

   // On ajoute un étudiant de plus
   cout << "Veuillez entrer la note du nouvel étudiant : ";
   cin >> noteNouvelEtudiant;
   vecNote.push_back(noteNouvelEtudiant);

   // On affiche les valeurs contenues dans le vecteur
   for (int i = 0; i < vecNote.size(); i++)
   {
      cout << "L'étudiant # " << i + 1 << " a obtenu " << vecNote.at(i) << endl;
   }

   

   // On veut calculer la moyenne des notes : On doit faire la somme et diviser par le nombre d'étudiants
   for (int numElement = 0; numElement < vecNote.size(); numElement++)
   {
      somme += vecNote[numElement];
   }
   if(!vecNote.empty())
      cout << "La moyenne du groupe est de " << somme / vecNote.size() << endl;

   // On voudrait trier les notes dans l'ordre croissant
   sort(vecNote.begin(), vecNote.end());

   // On affiche le vecteur trié
   for (int i = 0; i < vecNote.size(); i++)
   {
      cout << "la note # " << i + 1 << " est " << vecNote.at(i) << endl;
   }
 
   system("pause");
   return 0;
}



/*Plan de test

*/ 


