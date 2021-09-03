// But : Le programme demande pour chaque opération (+ - * /) deux nombres entiers à l'utilisateur,
//       fait le calcul et l'affiche à l'écran
// Auteur : Karine Moreau
// Date : 2021-09-01

#include <iostream>

void main()
{
	setlocale(LC_ALL, "");

	// Déclaration des variables
	int nb1;
	int nb2;
	int operation;
	int resteDivisionEntiere;

	// Demande à l'utilisateur d'entrer deux nombres entiers
	std::cout << "Veuillez entrer un nombre entier :";
	std::cin >> nb1;
	std::cout << "Veuillez entrer un nombre entier :";
	std::cin >> nb2;

	// Le programme calcule le résultat de l'addition
	operation = nb1 + nb2;

	// Le programme affiche le résultat et passe à la ligne en utilisant 
	// le caractère d'échappement \ suivi de n pour new line
	std::cout << nb1 << " + " << nb2 << " = " << operation << "\n";

	// Demande à l'utilisateur d'entrer deux nombres entiers avec une alarme
	std::cout << "Veuillez entrer un nombre entier :\a";
	std::cin >> nb1;
	std::cout << "Veuillez entrer un nombre entier :\a";
	std::cin >> nb2;

	// Le programme calcule le résultat de la soustraction
	operation = nb1 - nb2;

	// Le programme affiche le résultat
	std::cout << nb1 << "\t-\t" << nb2 << "\t=\t" << operation << "\n";

	// Demande à l'utilisateur d'entrer deux nombres entiers avec une alarme
	std::cout << "Veuillez entrer un nombre entier : ";
	std::cin >> nb1;
	std::cout << "Veuillez entrer un nombre entier : ";
	std::cin >> nb2;

	// Le programme calcule le résultat de la multiplication
	operation = nb1 * nb2;

	// Le programme affiche le résultat et passe à la ligne en utilisant endl
	std::cout << nb1 << "\tx\t" << nb2 << "\t=\t" << operation << std::endl;

	// Demande à l'utilisateur d'entrer deux nombres entiers avec une alarme
	std::cout << "Veuillez entrer un nombre entier : ";
	std::cin >> nb1;
	std::cout << "Veuillez entrer un nombre entier : ";
	std::cin >> nb2;

	// Le programme calcule le résultat de la multiplication
	// Avant de diviser, il faut toujours s'assurer que le deuxième opérande n'est pas égal à 0
	// Si nb2 est différent de 0 on calcule la division, sinon on affiche un message d'erreur
	if (nb2 !=0)
	{
		operation = nb1 / nb2;
		resteDivisionEntiere = nb1 % nb2;

		// Le programme affiche le résultat et passe à la ligne en utilisant endl
		std::cout << nb1 << "\t/\t" << nb2 << "\t=\t" << operation << " reste " <<  resteDivisionEntiere <<  std::endl;

	}





}


