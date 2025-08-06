#include "../headers/Entretien.hpp"

Entretien& Entretien::operator=(const Entretien& entretien) {
    if (this != &entretien) {
        this->id = entretien.id;
        this->date = entretien.date;
        this->cins = entretien.cins;
    }
    return *this;
}