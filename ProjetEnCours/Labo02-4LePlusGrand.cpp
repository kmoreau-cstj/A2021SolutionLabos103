// But : le programme demande 3 entiers et lequel est le plus grand
// Auteur : 
// Date : 2021-09-03

#include <iostream>

void main()
{
   setlocale(LC_ALL, "");

   // Déclaration des variables
   int nb1;
   int nb2;
   int nb3;
   int max;

   std::cout << "Veuillez entrer le nombre 1 : ";
   std::cin >> nb1;

   std::cout << "Veuillez entrer le nombre 2 : ";
   std::cin >> nb2;

   std::cout << "Veuillez entrer le nombre 3 : ";
   std::cin >> nb3;

   // Déterminer lequel des nombres est le plus grand
   if (nb1 > nb2 && nb1 > nb3) // Si nb1 est le plus grand
   {
      std::cout << "Le nombre " << nb1 << " est le plus grand." << std::endl;
   }
   else // Si nb2 est le plus grand
   {
      if (nb2 > nb1 && nb2 > nb3)
      {
         std::cout << "Le nombre " << nb2 << " est le plus grand." << std::endl;
      }
      else   
         {
         if (nb3 > nb1 && nb3 > nb2)
         {
            std::cout << "Le nombre " << nb3 << " est le plus grand." << std::endl;
         }
         else
         {
            std::cout << "Le nombre"
         }
         }
        
         

      system("pause");

      }
   }


/*Plan de test
Nombres     Résultat
1,2,3          3
-3,0,18        18
0,0,0          0
22,22,21

*/ 


