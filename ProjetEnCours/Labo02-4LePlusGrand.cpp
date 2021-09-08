// But : le programme demande 3 entiers et lequel est le plus grand
// Auteur : 
// Date : 2021-09-03

#include <iostream>

void main()
{
   setlocale(LC_ALL, "");

   // Déclaration des variables
   int nb;
   int max;


   // TODO : Il faut donner une valeur de départ à max, cela sera le premier nombre fourni par l'utilisateur

   std::cout << "Veuillez entrer le nombre 1 : ";
   std::cin >> max;

 

   std::cout << "Veuillez entrer le nombre 2 : ";
   std::cin >> nb;

   //  Est-ce que le deuxième nombre modifie la valeur de max
   // si le deuxième nombre est plus grand que max, alors max reçoit sa valeur

   if (nb>max)
   {
      max = nb;
   }


   std::cout << "Veuillez entrer le nombre 3 : ";
   std::cin >> nb;

   //  Est-ce que le troisème nombre modifie la valeur de max
   //  si le troisième nombre est plus grand que max, alors max reçoit sa valeur

   if (nb>max)
   {
      max = nb;
   }

   // Afficher la valeur de max
  
   std::cout << "le plus grand nombre est" << max << std::endl;
      

   system("pause");

     
}


/*Plan de test
Nombres     Résultat
1,2,3          3
3,2,1          3
1,3,2          3
-3,0,18        18
0,0,0          0
22,22,21       22

*/ 


