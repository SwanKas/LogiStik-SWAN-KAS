#include "Commande.h"
#include <iomanip>
#include <sstream>

Commande::Commande(int num, const std::string& contenu) : numero(num), content(contenu) {
    dateCreation = std::time(nullptr); // Initialisation à la date actuelle
}

std::ostream& operator<<(std::ostream& os, const Commande& cmd) {
    std::tm* creation_tm = std::localtime(&cmd.dateCreation);
    os << cmd.numero << ";" << cmd.content << ";";
    os << std::put_time(creation_tm, "%d-%m-%Y %H:%M:%S");
    return os;
}

int Commande::getNumero() const {
    return numero;
}

std::time_t Commande::getDateCreation() const {
    return dateCreation;
}
