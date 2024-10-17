#pragma once
#include "Menu.h"
#include "Commande.h"
#include <deque>

class Application
{
private:
	/// <summary>
	/// Le menu de l'application
	/// </summary>
	Menu menu;

	/// <summary>
	/// La commande cr�e
	/// </summary>
	Commande* lastCommand = nullptr;

public:
	/// <summary>
	/// Un exemple de m�thode r�alisant une des fonctionalit�s demand�e
	/// Ce n'est qu'un exemple!!!
	/// </summary>
	void CreerCommande();

	/// <summary>
	/// Boucle d'ex�cution du programme.
	/// Affiche le menu, attend le choix de l'utilisateur,
	/// puis ex�cute la m�thode demand�e.
	/// </summary>
	void Run();
};

