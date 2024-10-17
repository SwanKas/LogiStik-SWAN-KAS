#ifndef APPLICATION_H
#define APPLICATION_H

#include <list>
#include <string>
#include "Commande.h"

class Application {
private:
    std::list<Commande> createdCommands; 
    int nextNumero;

public:
    Application();
    void creerCommande(const std::string& contenu);
};

#endif
