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

bool Candidat::operator==(const int& score){
    return this->score == score;
}

std::string Candidat::to_string(){
    return "CIN : " + cin +
    "\nNom : " + nom +
    "\nPrenom : " + prenom +
    "\nDiplome : " + diplome +
    "\nScore : " + std::to_string(score);
}