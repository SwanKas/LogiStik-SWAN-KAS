#include <iostream>
#include "Menu.h"

using namespace std;

/// <summary>
/// Affiche le menu de l'application
/// </summary>
void Menu::Affiche()
{
	cout << endl << endl << endl;
	cout << ">>>>>   MENU   <<<<<<" << endl;
	cout << "1) Créer une commande" << endl;
	cout << "2) Afficher la commande" << endl;

	cout << "3) Quitter" << endl << endl << endl;
}

/// <summary>
/// Permet à l'utilisateur de saisir au clavier un nombre entier compris entre les limites données en paramètres.
/// Utilisé par exemple pour saisir le n° de la rubrique du menu qu'il choisit...
/// </summary>
/// <param name="minNb">La plus petite valeur autorisée, par défaut 1</param>
/// <param name="max">La plus grande valeur autorisée, par défaut 6</param>
/// <returns>Le nombre entier saisi par l'utilisateur</returns>
int Menu::SaisirEntierEntre(int minNb, int maxNb)
{
	// Le nombre saisi par l'utilisateur
	int nbSaisi = 0;

	cout << "--> Saisir un entier entre " << minNb << " et " << maxNb << ": ";
	while (!(cin >> nbSaisi) || nbSaisi < minNb || nbSaisi > maxNb)
	{
		if (cin.fail())	// Erreur, ce n'est pas un entier
		{
			cout << "!! Saisie incorrecte, recommencez : ";
			cin.clear();
			cin.ignore(1024, '\n');
		}
		else
		{
			// Saisie d'un entier, mais hors des limites
			cout << "Le nombre n'est pas entre " << minNb << " et " << maxNb << ", recommencez : ";
		}
	}

	return nbSaisi;
}
