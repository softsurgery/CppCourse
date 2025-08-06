#include "../headers/Recrue.hpp"

Recrue& Recrue::operator=(const Recrue& recrue) {
    if (this != &recrue) {
        this->cin = recrue.cin;
        this->nom = recrue.nom;
        this->prenom = recrue.prenom;
        this->diplome = recrue.diplome;
        this->poste = recrue.poste;
        this->salaire = recrue.salaire;
    }
    return *this;
}