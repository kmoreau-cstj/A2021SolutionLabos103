// But : Utiliser les vecteurs dans une fonction
// Les vecteurs permettent de r�server en m�moire un nombre quelconque de variables de m�me type.
// Auteur : Karine Moreau
// Date : 2021-11-04

#include "Labo09Fonctions.h"


int main()
{
   setlocale(LC_ALL, "");
   // D�claration des constantes
  
 
   // D�clarations des variables
   vector<int> vec{ 12,0,42,0,0,68,0,-15,89,0,0,0,13,27,52,2,0,7,0,0 };
   vector<int> vec2;
   int nbZero = 0;


   afficherVecteur(vec);

   cout << "Le nombre de 0 pr�sents dans le vecteur est de : " << calculerFrequence(vec, 0) << endl;
   cout << "Le nombre de 25 pr�sents dans le vecteur est de : " << calculerFrequence(vec, 25) << endl;
   cout << "Le nombre de 107 pr�sents dans le vecteur vec2 est de : " << calculerFrequence(vec2, 107) << endl;

   cout << "Afficher le contenu de vec avant la suppression" << endl;
   afficherVecteur(vec);
   //vec = supprimerValeur(vec, 0);
   supprimerValeur2(vec, 0);
   cout << "Afficher le contenu de vec apr�s la suppression" << endl;
   afficherVecteur(vec);


   int verreBleu = 10;
   int verreRouge = 20;

   cout << "Avant l'�change :" << endl;
   cout << "Valeur de verre bleu : " << verreBleu << endl;
   cout << "Valeur de verre rouge : " << verreRouge << endl;

   echangerValeur(verreBleu, verreRouge);


   cout << "Apr�s l'�change :" << endl;
   cout << "Valeur de verre bleu : " << verreBleu << endl;
   cout << "Valeur de verre rouge : " << verreRouge << endl;
   

   // Supprimer (.erase()) toutes les cases dont le contenu est null (�gal � 0)
   /*for (int i = 0; i < vec.size(); i++)
   {
      if (vec.at(i) == 0)
      {
         vec.erase(vec.begin() + i);
         i--;
      }
   }

   for (int i = vec.size()-1; i>+0; i--)
   {
      if (vec.at(i) == 0)
      {
         vec.erase(vec.begin() + i);
      }
   }


   cout << "apr�s la suppression des 0 : " << endl;
 
   for (int i = 0; i < vec.size(); i++)
   {
      cout << "vec[" << i << "]=" << vec.at(i) << endl;
   }

   */






   system("pause");
   return 0;
}



/*Plan de test

*/ 


