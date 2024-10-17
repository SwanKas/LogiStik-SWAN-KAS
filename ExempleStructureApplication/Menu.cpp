#include "Menu.h"
#include <iostream>

void Menu::afficherMenu() {
    int choix;
    std::string contenu;
    std::string collectionName;

    do {
        std::cout << "1. Créer une commande" << std::endl;
        std::cout << "2. Préparer une commande" << std::endl;
        std::cout << "3. Afficher une collection" << std::endl;
        std::cout << "4. Quitter" << std::endl;
        std::cout << "Choisissez une option : ";
        std::cin >> choix;

        switch (choix) {
        case 1:
            std::cout << "Contenu de la commande : ";
            std::cin >> contenu;
            app.creerCommande(contenu);
            break;
        case 2:
            app.preparerCommande();
            break;
        case 3:
            std::cout << "Nom de la collection (createdCommands, preparedCommands) : ";
            std::cin >> collectionName;
            app.afficherCollection(collectionName);
            break;
        case 4:
            std::cout << "Au revoir!" << std::endl;
            break;
        default:
            std::cout << "Choix invalide!" << std::endl;
        }

    } while (choix != 4);
}
