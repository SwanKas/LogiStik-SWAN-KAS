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
	/// La commande crée
	/// </summary>
	Commande* lastCommand = nullptr;

public:
	/// <summary>
	/// Un exemple de méthode réalisant une des fonctionalités demandée
	/// Ce n'est qu'un exemple!!!
	/// </summary>
	void CreerCommande();

	/// <summary>
	/// Boucle d'exécution du programme.
	/// Affiche le menu, attend le choix de l'utilisateur,
	/// puis exécute la méthode demandée.
	/// </summary>
	void Run();
};

