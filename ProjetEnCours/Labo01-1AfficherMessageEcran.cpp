// But : �crire un programme qui affiche un message � l'�cran
// Auteur : Karine Moreau
// Date : 2021-08-26


// Le programme recherche toujours la fonction principale pour d�buter. Elle porte le nom main (principale)
// Le nom d'une fonction en C++ est toujours suivi de parenth�ses. Entre les parenth�ses, on dresse la 
// liste des param�tres qui sont s�par�s par des virgules.
// Une fonction peut ou pas retourner un r�sultat. On doit pr�ciser le type du r�sultat avant le nom 
// de la fonction


// Il faut se munir de boites � outils pour �viter de reprogrammer les m�mes instructions.
// Pour communiquer avec l'ordinateur on doit inclure la biblioth�que 
// i(in : intput : entr�e)o(out : output : sortie) stream (flux) qui contient la fonction cout
#include <iostream>


void main()
// Les instructions doivent �tre dans un bloc d'instructions qui s'ouvre avec une accolade
// L'accolade ouvrante doit �tre align�e verticalement avec l'accolade fermante.
// Les instructions doivent �tre d�cal�es d'une tabulation. On appelle cela indenter le code.
{
	setlocale(LC_ALL, "");
	
	// Le programme doit afficher un message � l'�cran
	// la commande cout est situ�e dans l'espace de nom (namespace) dit standard std:: 
	// (:: est l'op�rateur de r�solution de port�e)
	// il faut indiquer le sens du message << (caract�res de redirection) , il doit se diriger vers l'�cran
	// Les texte en C++ doit toujours �tre mis entre guillemets
	// Toutes les instructions en C++ doivent se terminer par un point virgule ;
	std::cout << "Bienvenue � tous !";
	// Faire une pause dans la console pour avoir le temps de lire le message
	system("pause");
}
