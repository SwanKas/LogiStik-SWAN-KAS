#include "Menu.h"
#include <iostream>

void Menu::afficherMenu() {
    int choix;
    std::string contenu;

    do {
        std::cout << "1. Créer une commande" << std::endl;
        std::cout << "2. Quitter" << std::endl;
        std::cout << "Choisissez une option : ";
        std::cin >> choix;

        switch (choix) {
        case 1:
            std::cout << "Contenu de la commande : ";
            std::cin >> contenu;
            app.creerCommande(contenu);
            break;
        case 2:
            std::cout << "Au revoir!" << std::endl;
            break;
        default:
            std::cout << "Choix invalide!" << std::endl;
        }

    } while (choix != 2);
}
