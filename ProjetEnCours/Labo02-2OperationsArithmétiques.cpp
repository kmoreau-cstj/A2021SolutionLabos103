// But : Le programme demande pour chaque op�ration (+ - * /) deux nombres entiers � l'utilisateur,
//       fait le calcul et l'affiche � l'�cran
// Auteur : Karine Moreau
// Date : 2021-09-01

#include <iostream>

void main()
{
	setlocale(LC_ALL, "");

	// D�claration des variables
	int nb1;
	int nb2;
	int operation;
	int resteDivisionEntiere;

	// Demande � l'utilisateur d'entrer deux nombres entiers
	std::cout << "Veuillez entrer un nombre entier :";
	std::cin >> nb1;
	std::cout << "Veuillez entrer un nombre entier :";
	std::cin >> nb2;

	// Le programme calcule le r�sultat de l'addition
	operation = nb1 + nb2;

	// Le programme affiche le r�sultat et passe � la ligne en utilisant 
	// le caract�re d'�chappement \ suivi de n pour new line
	std::cout << nb1 << " + " << nb2 << " = " << operation << "\n";

	// Demande � l'utilisateur d'entrer deux nombres entiers avec une alarme
	std::cout << "Veuillez entrer un nombre entier :\a";
	std::cin >> nb1;
	std::cout << "Veuillez entrer un nombre entier :\a";
	std::cin >> nb2;

	// Le programme calcule le r�sultat de la soustraction
	operation = nb1 - nb2;

	// Le programme affiche le r�sultat
	std::cout << nb1 << "\t-\t" << nb2 << "\t=\t" << operation << "\n";

	// Demande � l'utilisateur d'entrer deux nombres entiers avec une alarme
	std::cout << "Veuillez entrer un nombre entier : ";
	std::cin >> nb1;
	std::cout << "Veuillez entrer un nombre entier : ";
	std::cin >> nb2;

	// Le programme calcule le r�sultat de la multiplication
	operation = nb1 * nb2;

	// Le programme affiche le r�sultat et passe � la ligne en utilisant endl
	std::cout << nb1 << "\tx\t" << nb2 << "\t=\t" << operation << std::endl;

	// Demande � l'utilisateur d'entrer deux nombres entiers avec une alarme
	std::cout << "Veuillez entrer un nombre entier : ";
	std::cin >> nb1;
	std::cout << "Veuillez entrer un nombre entier : ";
	std::cin >> nb2;

	// Le programme calcule le r�sultat de la multiplication
	// Avant de diviser, il faut toujours s'assurer que le deuxi�me op�rande n'est pas �gal � 0
	// Si nb2 est diff�rent de 0 on calcule la division, sinon on affiche un message d'erreur
	if (nb2 !=0)
	{
		operation = nb1 / nb2;
		resteDivisionEntiere = nb1 % nb2;

		// Le programme affiche le r�sultat et passe � la ligne en utilisant endl
		std::cout << nb1 << "\t/\t" << nb2 << "\t=\t" << operation << " reste " <<  resteDivisionEntiere <<  std::endl;

	}





}


