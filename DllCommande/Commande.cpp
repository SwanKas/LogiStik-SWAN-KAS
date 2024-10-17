#include "Commande.h"
#include <iomanip>

Commande::Commande(int num, const std::string& contenu) : numero(num), content(contenu) {
    dateCreation = std::time(nullptr);
    datePreparation = 0;
}

void Commande::Preparer() {
    datePreparation = std::time(nullptr);
}

std::ostream& operator<<(std::ostream& os, const Commande& cmd) {
    std::tm* creation_tm = std::localtime(&cmd.dateCreation);
    os << cmd.numero << ";" << cmd.content << ";";
    os << std::put_time(creation_tm, "%d-%m-%Y %H:%M:%S") << ";";
    if (cmd.datePreparation != 0) {
        os << std::put_time(std::localtime(&cmd.datePreparation), "%d-%m-%Y %H:%M:%S");
    }
    else {
        os << "N/A";
    }
    return os;
}

int Commande::getNumero() const {
    return numero;
}

std::time_t Commande::getDateCreation() const {
    return dateCreation;
}

std::time_t Commande::getDatePreparation() const {
    return datePreparation;
}
