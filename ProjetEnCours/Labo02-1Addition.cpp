// But : Demander à l'utilisateur deux nombres entiers et le programme calcule et 
//		 affiche le résultat de la somme des deux nombres
// Auteur : Karine Moreau 
// Date : 2021-08-30

#include <iostream>		// iostream contient la commande cout. 
						// c'est une caisse à outils pour communiquer avec l'utilisateur


void main()
{
	// On veut utiliser une case de la mémoire vive de l'ordinateur qui a 32 milliards de cases. Il faut l'identifier
	// On lui donne un nom. Le contenu de la case mémoire peut changer, donc il varie. 
	// On appelle cet espace mémoire une variable
	// Il faut préciser deux choses pour réserver une variable dans l'espace mémoire
	// 1. dire quel type d'information sera mémorisé dans la variable 
	//         (des entiers (int) : 4 octets, des nombres à virgules (float 4 octets, double 10 octets), 
	//         du texte(string, minimum 15 octects), 
	//			un seul caractère(char 1 octet), un booléen(oui/non ; vrai/faux, ...)(bool 1 octet)
	// 2. donner un nom à la variable : ne doit pas commencer par un chiffre, ne doit pas contenir des espaces
	//					On prendre l'habitude de commencer par une minuscule et les autres mots avec une Majsucule


	// On déclare deux variables de type entier qui vont prendre 4 octets chacune en mémoire vive
	int premierNombre;
	int deuxiemeNombre;
	int resultat;
	
	setlocale(LC_ALL, "");
	
	std::cout << "Veuillez entrer un premier nombre entier : ";
	// Il va falloir mettre les touches tapées sur le clavier dans la mémoire de l'ordinateur
	std::cin >> premierNombre;
	// On va vérifier le contenu de la variable : on peut l'afficher à l'écran
	//std::cout << premierNombre;

	std::cout << "Veuillez entrer un deuxième nombre entier : ";
	// Il va falloir mettre les touches tapées sur le clavier dans la mémoire de l'ordinateur
	std::cin >> deuxiemeNombre;
	// On va vérifier le contenu de la variable : on peut l'afficher à l'écran
	//std::cout << deuxiemeNombre;

	// On demande au programme de faire l'addition et de mémoriser dans la variable resultat
	resultat  = premierNombre + deuxiemeNombre;

	// On affiche le résultat à l'écran
	std::cout << resultat;


}