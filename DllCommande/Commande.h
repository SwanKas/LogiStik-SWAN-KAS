#ifndef COMMANDE_H
#define COMMANDE_H

#include <string>
#include <iostream>
#include <ctime>

class Commande {
private:
    int numero;
    std::string content;
    std::time_t dateCreation;

public:
    Commande(int num, const std::string& contenu);
    friend std::ostream& operator<<(std::ostream& os, const Commande& cmd);
    int getNumero() const;
    std::time_t getDateCreation() const;
};

#endif
