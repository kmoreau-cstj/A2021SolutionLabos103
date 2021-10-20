// But:           Apprendre � utiliser les chaines de caract�res: string
// Auteur:        Tom Strohmeier
// Date:          2021-10-18

#include "Labo06Fonctions.h"



int main()
{
   setlocale(LC_ALL, "");

   // D�claration des variables:
   string prenom;                                                       // On vient d'appeler le constructeur de l'objet string pour cr�er une instance de type string
   string adresse;                                                      // Ces variables sont initialis�es avec une chaine vide ""
   string paragraphe;
   /*
   prenom = "Tom";                                                      // = op�rateur d'affectation on copie la valeur � droite dans la variable � gauche du �gal

   string chaine1("Bonjour � tous et bonne chance � Arnaud !");         // On vient d'appeler le constructeur et on � initialis� la chaine avec Bonjour
   string chaine2("� tous !");

   // On utilise les objets avec les fonctions pr�d�finies dans la biblioth�que
   cout << prenom << endl;    

   // Combien de place occupe un string ?:
   cout << "taille de string: "     << prenom.size()     << endl;
   cout << "capacit�e string: "     << prenom.capacity() << endl;       // capacit� 15 = 15 octets de m�moire r�serv�
   cout << "longueur de string: "   << prenom.length()   << endl;

   // Combien de place occupe un string ?:
   cout << chaine1 << endl;
   cout << "taille de string: "     << chaine1.size()    << endl;
   cout << "capacit�e string: "     << chaine1.capacity()<< endl;       
   cout << "longueur de string: "   << chaine1.length()  << endl;

   chaine1 = "Bonjour";                                                 // On copie Bonjour dans chaine1

   cout << chaine1 << endl;
   cout << "taille de string: " << chaine1.size()     << endl;
   cout << "capacit�e string: " << chaine1.capacity() << endl;
   cout << "longueur de string: " << chaine1.length() << endl;

   // On demande � l'utilisateur de mettre de l'information dans les string:
   cout << "Veuillez entrer votre pr�nom: "           << endl;
   cin  >> prenom;                                                        // Ici on � tap� Tom \n. Ici on a utilis� >>. Quand il rencontre \n il s'arr�te. Il met les caract�res avant le \n dans la variable.
   // Les >> laissent trainer les \n dans la m�moire du clavier. Il faut les �liminer apr�s chaque usage de cin >> Il faut vider la m�moire du clavier.
   // Quand un programme utilise le cin >> et le getline(), il faut toujours nettoyer derri�re le cin >>.
   cin.ignore();                                                          // La valeur des deux param�tres sera par d�faut 1 ou \n cin.ignore(1, '\n');
                                                                          // cin.ignore va supprimer les caract�res qui restent dans a m�moire du clavier, en g�n�ral on ignore les s�parateurs
   // cin.ignore(1, '\n');                                                                      // laiss�s par les >> (espace, tabulation ou enter)
   // Attention, cin.ignore('\n'); ne fonctionne pas car le \n est � la mauvaise position de param�tre. Il doit �tre plac� dans le deuxi�me param�tre, donc on �crit (1, '\n');
   cout << "Vous vous appelez " << prenom             << endl;

   cout << "Veuillez entrer votre adresse: "          << endl;
   //cin >> adresse;                                                      // cin prend les caract�res tap� au clavier jusqu'� un enter ou un espace ou une tabulation
                                                                          // les  >> ne sont pas adapy�s au chaines de caract�res car elles peuvent contenir des espaces
   getline(cin, adresse, '\n');                                           // Va permettre la saisie des espaces dans l'adresse
   cout << "Vous habit� au " << adresse << endl; 

   cout << "Veuillez vous pr�senter: " << endl;
   //cin >> paragraphe;                                                   // On remplace cin par getline. On a peut-�tre besoin d'�crire des tabulation, enter, espace dans le texte
   getline(cin, paragraphe, '*');                                         // Le get.line vide toujours la m�moire du clavier, donc pas besoin de cin.ignore.

                                                                          // Le get.line ne fonctionne que pour les strings, pas pour les int, ni les floats, ou autre.
   // Ici, comme le caract�re de fin de saisie n'est pas le \n mais l'�toile, il faut le retirer de la m�moire du clavier. 
   // Il pourrait �tre pr�c�d� de plein de caract�res non lus

   cin.ignore(8192, '\n');

   cout << "Votre texte est: " << paragraphe << endl;

   cout << "Veuillez entrer votre prenom" << endl;
   getline(cin, prenom, '\n');

   cout << "Votre pr�nom : " << prenom << endl;

   //--------------------------------------------------------------------ATTENTION--------------------------------------------------------------------------------------------------------------------------
   //                                     Maintenant, apr�s chaque cin >>, il FAUDRA SYST�MATIQUEMENT nettoyer la m�moire du clavier avec cin.ignore();

  
*/
   string clavier;
   int nombre;

   cout << "Veuillez entrer un nombre entier : ";
   // A partir de maintenant, on utilise que des getline, plus JAMAIS de cin >>
   getline(cin, clavier, '\n');                          // On est s�r de lire tous les caract�res tap�s au clavier

   // Avant de convertir le nombre, il faut s'assurer que l'utilisateur a bien rentr� un nombre
   while (!(etreUnNombreEntier(clavier)))
   {
      cout << "Erreur : Il faut entrer des chiffres pour saisir un nombre entier." << endl;
      cout << "Veuillez entrer un nombre entier : ";
      // A partir de maintenant, on utilise que des getline, plus JAMAIS de cin >>
      getline(cin, clavier, '\n');                          // On est s�r de lire tous les caract�res tap�s au clavier
   }



   nombre = stoi(clavier);

   cout << "Votre nombre est : " << nombre << endl;

   // On peut utiliser les op�rateurs de comparaison avec les string
   //string prenom;

   cout << "Veuillez entre votre pr�nom : ";
   getline(cin, prenom, '\n');

   if (prenom == "Charles")
   {
      cout << "vous �tes l'�tudiant f�tiche du cours" << endl;
   }
   else
   {
      cout << "Vous �tes jamais le dernier !" << endl;
   }

   if (prenom >= "Arthur")
   {
      cout << prenom << " vient apr�s Arthur" << endl;
   }
   if (prenom <= "Zoe")
   {
      cout << prenom << " vient avant Zoe" << endl;
   }

   // On veut concat�ner deux chaines de caract�res : Ajouter (+) au bout de
   string chaine1("Bonjour");
   string chaine2("� tous !");

   chaine1 = chaine1 + " " + chaine2 + '\n';

   cout << chaine1;



   system("pause");
   return 0;
}
