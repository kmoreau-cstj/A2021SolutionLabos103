// But : le programme demande 3 entiers et lequel est le plus grand
// Auteur : 
// Date : 2021-09-03

#include <iostream>

void main()
{
   setlocale(LC_ALL, "");

   // D�claration des variables
   int nb;
   int max;


   // TODO : Il faut donner une valeur de d�part � max, cela sera le premier nombre fourni par l'utilisateur

   std::cout << "Veuillez entrer le nombre 1 : ";
   std::cin >> max;

 

   std::cout << "Veuillez entrer le nombre 2 : ";
   std::cin >> nb;

   //  Est-ce que le deuxi�me nombre modifie la valeur de max
   // si le deuxi�me nombre est plus grand que max, alors max re�oit sa valeur

   if (nb>max)
   {
      max = nb;
   }


   std::cout << "Veuillez entrer le nombre 3 : ";
   std::cin >> nb;

   //  Est-ce que le trois�me nombre modifie la valeur de max
   //  si le troisi�me nombre est plus grand que max, alors max re�oit sa valeur

   if (nb>max)
   {
      max = nb;
   }

   // Afficher la valeur de max
  
   std::cout << "le plus grand nombre est" << max << std::endl;
      

   system("pause");

     
}


/*Plan de test
Nombres     R�sultat
1,2,3          3
3,2,1          3
1,3,2          3
-3,0,18        18
0,0,0          0
22,22,21       22

*/ 


