#ifndef RECRUE_H
#define RECRUE_H

#include <string>
#include "Candidat.hpp"

class Recrue : public Candidat {
    public:
        Recrue(std::string cin, std::string nom, std::string prenom, std::string diplome, std::string poste, float salaire) : Candidat(cin, nom, prenom, diplome) {
            this->poste = poste;
            this->salaire = salaire;
        }
        Recrue(const Recrue& recrue) : Recrue(recrue.cin, recrue.nom, recrue.prenom, recrue.diplome, recrue.poste, recrue.salaire){}
        Recrue& operator=(const Recrue& recrue);
        virtual ~Recrue() {};

        std::string getPoste() {
            return poste;
        }

        float getSalaire() {
            return salaire;
        }

        void setPoste(std::string poste) {
            this->poste = poste;
        }

        void setSalaire(float salaire) {
            this->salaire = salaire;
        }

        virtual std::string to_string();

    private:
        std::string poste;
        float salaire;
};

#endif