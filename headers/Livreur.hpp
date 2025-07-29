#ifndef LIVREUR_H
#define LIVREUR_H

#include <string>
#include <vector>
#include "Colie.hpp"

class Livreur {
    public:
    Livreur(std::string cin) {
        this->cin = cin;
    }

    std::string getCin() {
        return cin;
    }

    std::vector<Colie*> getColies() {
        return colies;
    }

    void setCin(std::string cin) {
        this->cin = cin;
    }

    void setColies(std::vector<Colie*> colies) {
        this->colies = colies;
    }

    void addColie(Colie* colie);
    int getColieCountLivreur() const;
    bool operator>(const Livreur &other);
    std::string to_string();

    private:
    std::string cin;
    std::vector<Colie*> colies;
};

#endif