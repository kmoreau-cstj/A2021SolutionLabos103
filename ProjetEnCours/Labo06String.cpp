// But:           Apprendre à utiliser les chaines de caractères: string
// Auteur:        Tom Strohmeier
// Date:          2021-10-18

#include "Labo06Fonctions.h"



int main()
{
   setlocale(LC_ALL, "");

   // Déclaration des variables:
   string prenom;                                                       // On vient d'appeler le constructeur de l'objet string pour créer une instance de type string
   string adresse;                                                      // Ces variables sont initialisées avec une chaine vide ""
   string paragraphe;
   /*
   prenom = "Tom";                                                      // = opérateur d'affectation on copie la valeur à droite dans la variable à gauche du égal

   string chaine1("Bonjour à tous et bonne chance à Arnaud !");         // On vient d'appeler le constructeur et on à initialisé la chaine avec Bonjour
   string chaine2("à tous !");

   // On utilise les objets avec les fonctions prédéfinies dans la bibliothèque
   cout << prenom << endl;    

   // Combien de place occupe un string ?:
   cout << "taille de string: "     << prenom.size()     << endl;
   cout << "capacitée string: "     << prenom.capacity() << endl;       // capacité 15 = 15 octets de mémoire réservé
   cout << "longueur de string: "   << prenom.length()   << endl;

   // Combien de place occupe un string ?:
   cout << chaine1 << endl;
   cout << "taille de string: "     << chaine1.size()    << endl;
   cout << "capacitée string: "     << chaine1.capacity()<< endl;       
   cout << "longueur de string: "   << chaine1.length()  << endl;

   chaine1 = "Bonjour";                                                 // On copie Bonjour dans chaine1

   cout << chaine1 << endl;
   cout << "taille de string: " << chaine1.size()     << endl;
   cout << "capacitée string: " << chaine1.capacity() << endl;
   cout << "longueur de string: " << chaine1.length() << endl;

   // On demande à l'utilisateur de mettre de l'information dans les string:
   cout << "Veuillez entrer votre prénom: "           << endl;
   cin  >> prenom;                                                        // Ici on à tapé Tom \n. Ici on a utilisé >>. Quand il rencontre \n il s'arrête. Il met les caractères avant le \n dans la variable.
   // Les >> laissent trainer les \n dans la mémoire du clavier. Il faut les éliminer après chaque usage de cin >> Il faut vider la mémoire du clavier.
   // Quand un programme utilise le cin >> et le getline(), il faut toujours nettoyer derrière le cin >>.
   cin.ignore();                                                          // La valeur des deux paramètres sera par défaut 1 ou \n cin.ignore(1, '\n');
                                                                          // cin.ignore va supprimer les caractères qui restent dans a mémoire du clavier, en général on ignore les séparateurs
   // cin.ignore(1, '\n');                                                                      // laissés par les >> (espace, tabulation ou enter)
   // Attention, cin.ignore('\n'); ne fonctionne pas car le \n est à la mauvaise position de paramètre. Il doit être placé dans le deuxième paramètre, donc on écrit (1, '\n');
   cout << "Vous vous appelez " << prenom             << endl;

   cout << "Veuillez entrer votre adresse: "          << endl;
   //cin >> adresse;                                                      // cin prend les caractères tapé au clavier jusqu'à un enter ou un espace ou une tabulation
                                                                          // les  >> ne sont pas adapyés au chaines de caractères car elles peuvent contenir des espaces
   getline(cin, adresse, '\n');                                           // Va permettre la saisie des espaces dans l'adresse
   cout << "Vous habité au " << adresse << endl; 

   cout << "Veuillez vous présenter: " << endl;
   //cin >> paragraphe;                                                   // On remplace cin par getline. On a peut-être besoin d'écrire des tabulation, enter, espace dans le texte
   getline(cin, paragraphe, '*');                                         // Le get.line vide toujours la mémoire du clavier, donc pas besoin de cin.ignore.

                                                                          // Le get.line ne fonctionne que pour les strings, pas pour les int, ni les floats, ou autre.
   // Ici, comme le caractère de fin de saisie n'est pas le \n mais l'étoile, il faut le retirer de la mémoire du clavier. 
   // Il pourrait être précédé de plein de caractères non lus

   cin.ignore(8192, '\n');

   cout << "Votre texte est: " << paragraphe << endl;

   cout << "Veuillez entrer votre prenom" << endl;
   getline(cin, prenom, '\n');

   cout << "Votre prénom : " << prenom << endl;

   //--------------------------------------------------------------------ATTENTION--------------------------------------------------------------------------------------------------------------------------
   //                                     Maintenant, aprés chaque cin >>, il FAUDRA SYSTÉMATIQUEMENT nettoyer la mémoire du clavier avec cin.ignore();

  
*/
   string clavier;
   int nombre;

   cout << "Veuillez entrer un nombre entier : ";
   // A partir de maintenant, on utilise que des getline, plus JAMAIS de cin >>
   getline(cin, clavier, '\n');                          // On est sûr de lire tous les caractères tapés au clavier

   // Avant de convertir le nombre, il faut s'assurer que l'utilisateur a bien rentré un nombre
   while (!(etreUnNombreEntier(clavier)))
   {
      cout << "Erreur : Il faut entrer des chiffres pour saisir un nombre entier." << endl;
      cout << "Veuillez entrer un nombre entier : ";
      // A partir de maintenant, on utilise que des getline, plus JAMAIS de cin >>
      getline(cin, clavier, '\n');                          // On est sûr de lire tous les caractères tapés au clavier
   }



   nombre = stoi(clavier);

   cout << "Votre nombre est : " << nombre << endl;

   // On peut utiliser les opérateurs de comparaison avec les string
   //string prenom;

   cout << "Veuillez entre votre prénom : ";
   getline(cin, prenom, '\n');

   if (prenom == "Charles")
   {
      cout << "vous êtes l'étudiant fétiche du cours" << endl;
   }
   else
   {
      cout << "Vous êtes jamais le dernier !" << endl;
   }

   if (prenom >= "Arthur")
   {
      cout << prenom << " vient après Arthur" << endl;
   }
   if (prenom <= "Zoe")
   {
      cout << prenom << " vient avant Zoe" << endl;
   }

   // On veut concaténer deux chaines de caractères : Ajouter (+) au bout de
   string chaine1("Bonjour");
   string chaine2("à tous !");

   chaine1 = chaine1 + " " + chaine2 + '\n';

   cout << chaine1;



   system("pause");
   return 0;
}
