// But : Utiliser une nouvelle structure de données  : les vecteurs. 
// Les vecteurs permettent de réserver en mémoire un nombre quelconque de variables de même type.
// Auteur : Karine Moreau
// Date : 2021-11-03

/*
Soit vec de type entier dont voici la déclaration et la liste de son contenu :
vector<int> vec{12,0,42,0,0,68,0,-15,89,0,0,0,13,27,52,2,0,7,0,0};
1.	Afficher la taille du vecteur.
2.	Afficher le contenu de la première case.
3.	Afficher le contenu de la dernière case.
4.	Afficher le nombre de cases qui contiennent une valeur nulle.
5.	Afficher le numéro de la case et son contenu sous la forme vec[#]= Valeur.
6.	Afficher les cases du vecteur dont le contenu est pair.
7.	Afficher le vecteur en commençant par la fin.
8.	Afficher dans un premier temps uniquement les cases d'indice pair et dans un deuxième temps les cases d'indice impair.


*/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
   setlocale(LC_ALL, "");
   // Déclaration des constantes
  
 
   // Déclarations des variables
   vector<int> vec{ 12,0,42,0,0,68,0,-15,89,0,0,0,13,27,52,2,0,7,0,0 };
   int nbZero = 0;

   // Afficher la taille du vecteur : le nombre d'éléments qu'il contient
   cout << "La taille du vecteur est de  : " << vec.size() << endl;

   // Afficher le contenu de la première case de trois façons différentes
   cout << "Le premier élément est : " << vec.front() << endl;
   cout << "Le premier élément est : " << vec.at(0) << endl;
   cout << "Le premier élément est : " << vec[0] << endl;


   // Afficher le contenu de la dernière case de trois façons différentes
   cout << "Le dernier élément est : " << vec.back() << endl;
   cout << "Le dernier élément est : " << vec.at(vec.size()-1) << endl;
   cout << "Le dernier élément est : " << vec[vec.size() - 1] << endl;


   //	Afficher le numéro de la case et son contenu sous la forme vec[#]= Valeur
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

   // Afficher le vecteur en commençant par la fin
   
   for (int i = vec.size()-1; i >= 0; i--)
   {
      cout << "vec[" << i << "]=" << vec.at(i) << endl;
   }
   */

   for (int i = vec.size()-1; i >=0; i--)
   {
      cout << "vec[" << i << "]=" << vec[i]<< endl;
   }

   //Afficher dans un premier temps uniquement les cases d'indice pair et dans un deuxième temps les cases d'indice impair
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


   // Supprimer (.erase()) toutes les cases dont le contenu est null (égal à 0)
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


   cout << "après la suppression des 0 : " << endl;
 
   for (int i = 0; i < vec.size(); i++)
   {
      cout << "vec[" << i << "]=" << vec.at(i) << endl;
   }








   system("pause");
   return 0;
}



/*Plan de test

*/ 


