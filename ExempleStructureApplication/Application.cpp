#include <iostream>
#include "Application.h"

using namespace std;

/// <summary>
/// Retourne n, un nombre entier généré au hasard,
/// avec deb <= n < fin
/// </summary>
/// <param name="deb"> la valeur minimale de n</param>
/// <param name="fin"> la valeur à laquelle n doit être < </param>
/// <returns> n avec deb <= n < fin </returns>
int hasard(int deb, int fin)
{
	int val;
	srand((unsigned int)time(0));
	val = rand() % fin + deb;
	return val;
}

/// <summary>
/// Un exemple de méthode réalisant une des fonctionalités demandée
/// Ce n'est qu'un exemple!!!
/// </summary>
void Application::CreerCommande()
{
	int number = hasard(1, 999);
	std::string content = "Commande ";
	content += (char)number;

	if (this->lastCommand != nullptr)
		delete this->lastCommand;

	this->lastCommand = new Commande(number, content);
}

/// <summary>
/// Boucle d'exécution du programme.
/// Affiche le menu, attend le choix de l'utilisateur,
/// puis exécute la méthode demandée.
/// </summary>
void Application::Run()
{
	bool quit = false;
	int choix = 0;

	do
	{
		//  Affiche le menu et lit le choix de l'utilisateur
		menu.Affiche();
		choix = menu.SaisirEntierEntre(1, 3);
		switch(choix)
		{
		case 1:
			CreerCommande();
			break;
		case 2:
			cout << *this->lastCommand << endl;
			break;
		case 3:
			quit = true;
			if (this->lastCommand != nullptr)
				delete this->lastCommand;
			break;
		}
	} while (!quit);
}
