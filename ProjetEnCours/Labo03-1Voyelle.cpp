// But : le programme demande à l'utilisateur une lettre et indique si la lettre est une voyelle ou une consomme
// Auteur : Charles-Auguste
// Date : 2021-09-08

#include <iostream>

void main()
{
   setlocale(LC_ALL, "");

   // Déclaration des variables
   char lettre;


   // on demande à l'utilisateur une lettre

   std::cout << "Veuillez entrer une lettre : ";
   std::cin >> lettre;// Il faut mettre la bonne variable;

   // TODO : Si le caractère tapé par l'utilisateur est bien une lettre compris entre a et z (minuscule ou majuscule), alors
   if (lettre >= 'a' && lettre <= 'z' || lettre >= 'A' && lettre <= 'Z')
   {
      // TODO : Si la lettre est AEIUOY (minuscule ou majuscule) alors le programme affiche c'est une voyelle

      if (lettre == 'a' || lettre == 'e' || lettre == 'i' || lettre == 'o' || lettre == 'u' || lettre == 'y' 
         || lettre == 'A' || lettre == 'E' || lettre == 'I' || lettre == 'O' || lettre == 'U' || lettre == 'Y')
      {
         std::cout << lettre << " est une voyelle\n";
      }
      // TODO : sinon, le programme affiche c'est une consonne
      else
      {
         std::cout << lettre << " est une consonne\n";
      }
   }
   // TODO : sinon, le programme affiche c'est une erreur ce n'est une lettre
   else
   {
      std::cout << "C'est une erreur ce n'est une lettre!\n";
   }

   
   system("pause");

     
}


/*Plan de test
Lettres     Résultat
w           est une consonne
g           est une consonne
H           est une consonne
A           est une voyelle
z           est une consonne
B           est une consonne
Y           est une voyelle
a           est une voyelle
1           erreur ce n'est une lettre
_           erreur ce n'est une lettre
=           erreur ce n'est une lettre
*/ 


