#ifndef APPLICATION_H
#define APPLICATION_H

#include <list>
#include <string>
#include "Commande.h"

class Application {
private:
    std::list<Commande> createdCommands;
    std::list<Commande> preparedCommands;
    int nextNumero;

public:
    Application();
    void creerCommande(const std::string& contenu);
    void preparerCommande();
    void afficherCollection(const std::string& collectionName);
};

#endif
