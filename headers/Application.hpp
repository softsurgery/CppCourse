#ifndef APPLICATION_H
#define APPLICATION_H

#include <string>
#include <vector>
#include "Livreur.hpp"

class Application {
    public:
    Application(std::string nom) {
        this->nom = nom;
    }

    std::string getNom() {
        return nom;
    }

    std::vector<Livreur*> getLivreurs() {
        return livreurs;
    }

    void setNom(std::string nom) {
        this->nom = nom;
    }

    void setLivreurs(std::vector<Livreur*> livreurs) {
        this->livreurs = livreurs;
    }

    void addLivreur(Livreur* livreur);
    void addColieToLivreur(std::string cin, Colie* colie);
    void calculateCouts();
    int getColieCountLivreur(int i);
    void displayMaxLivreur();
    void saveLivreurs(const std::string& filename);

    private:
        std::string nom;
        std::vector<Livreur*> livreurs;
};

#endif