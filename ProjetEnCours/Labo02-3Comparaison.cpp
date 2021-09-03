// But : �crivez un programme qui demande � l�utilisateur deux nombres entiers, qui lit ces deux nombres
// et qui affiche le nombre le plus �lev� suivi des mots �est le plus grand �.Si les nombres sont �gaux,
// le programme affiche � Ces nombres sont �gaux �
// Auteur : Charles-Auguste Vandette
// Date : 2021-09-03

#include<iostream>

void main()
{
   setlocale(LC_ALL, "");

   // D�claration des variables
   int nombre1;
   int nombre2;

   std::cout << "Veuillez entrer un nombre entier : ";
   std::cin >> nombre1;

   std::cout << "Veuillez entrer un second nombre entier : ";
   std::cin >> nombre2;

   if (nombre1 > nombre2)
   {
      std::cout << nombre1 << " est le plus grand" << std::endl;
   }
   // On sait que nombre1 est plus petit ou �gale � nombre2
   else if (nombre1 < nombre2)
   {
      std::cout << nombre2 << " est le plus grand" << std::endl;
   }
   else
   {
      std::cout << "Ces nombres sont �gaux" << std::endl;
   }
   system("pause");
}

//       Plan de test V.01
//    donn�e      r�sultat
//    1    0      1 est le plus grand
//    -1   1      1 est le plus grand
//    25  25      Ces nombres sont �gaux
//    10  -7      10 est le plus grand