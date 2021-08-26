// But : Écrire un programme qui affiche un message à l'écran
// Auteur : Karine Moreau
// Date : 2021-08-26


// Le programme recherche toujours la fonction principale pour débuter. Elle porte le nom main (principale)
// Le nom d'une fonction en C++ est toujours suivi de parenthèses. Entre les parenthèses, on dresse la 
// liste des paramètres qui sont séparés par des virgules.
// Une fonction peut ou pas retourner un résultat. On doit préciser le type du résultat avant le nom 
// de la fonction


// Il faut se munir de boites à outils pour éviter de reprogrammer les mêmes instructions.
// Pour communiquer avec l'ordinateur on doit inclure la bibliothèque 
// i(in : intput : entrée)o(out : output : sortie) stream (flux) qui contient la fonction cout
#include <iostream>


void main()
// Les instructions doivent être dans un bloc d'instructions qui s'ouvre avec une accolade
// L'accolade ouvrante doit être alignée verticalement avec l'accolade fermante.
// Les instructions doivent être décalées d'une tabulation. On appelle cela indenter le code.
{
	setlocale(LC_ALL, "");
	
	// Le programme doit afficher un message à l'écran
	// la commande cout est située dans l'espace de nom (namespace) dit standard std:: 
	// (:: est l'opérateur de résolution de portée)
	// il faut indiquer le sens du message << (caractères de redirection) , il doit se diriger vers l'écran
	// Les texte en C++ doit toujours être mis entre guillemets
	// Toutes les instructions en C++ doivent se terminer par un point virgule ;
	std::cout << "Bienvenue à tous !";
	// Faire une pause dans la console pour avoir le temps de lire le message
	system("pause");
}
