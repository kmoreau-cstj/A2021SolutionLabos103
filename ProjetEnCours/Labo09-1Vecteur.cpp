// But : Utiliser une nouvelle structure de donn�es  : les vecteurs. 
// Les vecteurs permettent de r�server en m�moire un nombre quelconque de variables de m�me type.
// Auteur : Karine Moreau
// Date : 2021-11-03

/*
Soit vec de type entier dont voici la d�claration et la liste de son contenu :
vector<int> vec{12,0,42,0,0,68,0,-15,89,0,0,0,13,27,52,2,0,7,0,0};
1.	Afficher la taille du vecteur.
2.	Afficher le contenu de la premi�re case.
3.	Afficher le contenu de la derni�re case.
4.	Afficher le nombre de cases qui contiennent une valeur nulle.
5.	Afficher le num�ro de la case et son contenu sous la forme vec[#]= Valeur.
6.	Afficher les cases du vecteur dont le contenu est pair.
7.	Afficher le vecteur en commen�ant par la fin.
8.	Afficher dans un premier temps uniquement les cases d'indice pair et dans un deuxi�me temps les cases d'indice impair.


*/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
   setlocale(LC_ALL, "");
   // D�claration des constantes
  
 
   // D�clarations des variables
   vector<int> vec{ 12,0,42,0,0,68,0,-15,89,0,0,0,13,27,52,2,0,7,0,0 };
   int nbZero = 0;

   // Afficher la taille du vecteur : le nombre d'�l�ments qu'il contient
   cout << "La taille du vecteur est de  : " << vec.size() << endl;

   // Afficher le contenu de la premi�re case de trois fa�ons diff�rentes
   cout << "Le premier �l�ment est : " << vec.front() << endl;
   cout << "Le premier �l�ment est : " << vec.at(0) << endl;
   cout << "Le premier �l�ment est : " << vec[0] << endl;


   // Afficher le contenu de la derni�re case de trois fa�ons diff�rentes
   cout << "Le dernier �l�ment est : " << vec.back() << endl;
   cout << "Le dernier �l�ment est : " << vec.at(vec.size()-1) << endl;
   cout << "Le dernier �l�ment est : " << vec[vec.size() - 1] << endl;


   //	Afficher le num�ro de la case et son contenu sous la forme vec[#]= Valeur
   for (int i = 0; i < vec.size(); i++)
   {
      cout << "vec[" << i << "]=" << vec.at(i) << endl;
   }

   // Afficher le nombre de cases qui contiennent une valeur nulle
   for (int i = 0; i < vec.size(); i++)
   {
      if (vec[i] == 0 )
      {
         nbZero++;
      }
   }
   cout << "Le nombre de cases contenant la valeur 0 est de : " << nbZero << endl;
   /*
   
   // Afficher les cases du vecteur dont le contenu est pair
   for (int i = 0; i < vec.size(); i++)
   {
      if (vec.at(i) %2 == 0)
      {
         cout << "vec[" << i << "]=" << vec.at(i) << endl;
      }
   }

   // Afficher le vecteur en commen�ant par la fin
   
   for (int i = vec.size()-1; i >= 0; i--)
   {
      cout << "vec[" << i << "]=" << vec.at(i) << endl;
   }
   */

   for (int i = vec.size()-1; i >=0; i--)
   {
      cout << "vec[" << i << "]=" << vec[i]<< endl;
   }

   //Afficher dans un premier temps uniquement les cases d'indice pair et dans un deuxi�me temps les cases d'indice impair
   for (int i = 0; i < vec.size(); i++)
   {
      if (i%2==0)
      {
         cout << "vec[" << i << "]=" << vec[i] << endl;
      }
   }

   for (int i = 0; i < vec.size(); i++)
   {
      if (i % 2)
      {
         cout << "vec[" << i << "]=" << vec[i] << endl;
      }
   }


   // Supprimer (.erase()) toutes les cases dont le contenu est null (�gal � 0)
   /*for (int i = 0; i < vec.size(); i++)
   {
      if (vec.at(i) == 0)
      {
         vec.erase(vec.begin() + i);
         i--;
      }
   }*/

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








   system("pause");
   return 0;
}



/*Plan de test

*/ 


