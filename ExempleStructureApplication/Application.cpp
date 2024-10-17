#include "Application.h"
#include <iostream>

Application::Application() : nextNumero(1) {}

void Application::creerCommande(const std::string& contenu) {
    Commande cmd(nextNumero++, contenu);
    createdCommands.push_back(cmd);
    std::cout << "Commande créée : " << cmd << std::endl;
}

void Application::preparerCommande() {
    if (!createdCommands.empty()) {
        Commande& cmd = createdCommands.front();
        cmd.Preparer();
        preparedCommands.push_back(cmd);
        createdCommands.pop_front();
    }
}

void Application::afficherCollection(const std::string& collectionName) {
    if (collectionName == "createdCommands") {
        for (const auto& cmd : createdCommands) {
            std::cout << cmd << std::endl;
        }
    }
    else if (collectionName == "preparedCommands") {
        for (const auto& cmd : preparedCommands) {
            std::cout << cmd << std::endl;
        }
    }
    else {
        std::cout << "Collection inconnue." << std::endl;
    }
}
