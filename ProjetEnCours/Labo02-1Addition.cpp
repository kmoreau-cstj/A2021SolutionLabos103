// But : Demander � l'utilisateur deux nombres entiers et le programme calcule et 
//		 affiche le r�sultat de la somme des deux nombres
// Auteur : Karine Moreau 
// Date : 2021-08-30

#include <iostream>		// iostream contient la commande cout. 
						// c'est une caisse � outils pour communiquer avec l'utilisateur


void main()
{
	// On veut utiliser une case de la m�moire vive de l'ordinateur qui a 32 milliards de cases. Il faut l'identifier
	// On lui donne un nom. Le contenu de la case m�moire peut changer, donc il varie. 
	// On appelle cet espace m�moire une variable
	// Il faut pr�ciser deux choses pour r�server une variable dans l'espace m�moire
	// 1. dire quel type d'information sera m�moris� dans la variable 
	//         (des entiers (int) : 4 octets, des nombres � virgules (float 4 octets, double 10 octets), 
	//         du texte(string, minimum 15 octects), 
	//			un seul caract�re(char 1 octet), un bool�en(oui/non ; vrai/faux, ...)(bool 1 octet)
	// 2. donner un nom � la variable : ne doit pas commencer par un chiffre, ne doit pas contenir des espaces
	//					On prendre l'habitude de commencer par une minuscule et les autres mots avec une Majsucule


	// On d�clare deux variables de type entier qui vont prendre 4 octets chacune en m�moire vive
	int premierNombre;
	int deuxiemeNombre;
	int resultat;
	
	setlocale(LC_ALL, "");
	
	std::cout << "Veuillez entrer un premier nombre entier : ";
	// Il va falloir mettre les touches tap�es sur le clavier dans la m�moire de l'ordinateur
	std::cin >> premierNombre;
	// On va v�rifier le contenu de la variable : on peut l'afficher � l'�cran
	//std::cout << premierNombre;

	std::cout << "Veuillez entrer un deuxi�me nombre entier : ";
	// Il va falloir mettre les touches tap�es sur le clavier dans la m�moire de l'ordinateur
	std::cin >> deuxiemeNombre;
	// On va v�rifier le contenu de la variable : on peut l'afficher � l'�cran
	//std::cout << deuxiemeNombre;

	// On demande au programme de faire l'addition et de m�moriser dans la variable resultat
	resultat  = premierNombre + deuxiemeNombre;

	// On affiche le r�sultat � l'�cran
	std::cout << resultat;


}