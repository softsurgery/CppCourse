#include "../headers/Colie.hpp"

Colie& Colie::operator=(const Colie& colie) {
    if (this != &colie) {
        this->id = colie.id;
        this->etat = colie.etat;
        this->frais = colie.frais;
        this->priorite = colie.priorite;
        this->cout = colie.cout;
    }
    return *this;
}

void Colie::calculateCout() {
    this->cout = frais * priorite;
}

std::string Colie::to_string(){
    return "ID : " + std::to_string(id) +
    "\nEtat : " + std::to_string(etat) +
    "\nFrais : " + std::to_string(frais) +
    "\nPriorite : " + std::to_string(priorite) +
    "\nCout : " + std::to_string(cout);
}