#include "../headers/Candidat.hpp"

Candidat& Candidat::operator=(const Candidat& candidat) {
    if (this != &candidat) {
        this->cin = candidat.cin;
        this->nom = candidat.nom;
        this->prenom = candidat.prenom;
        this->diplome = candidat.diplome;
        this->score = candidat.score;
    }
    return *this;
}