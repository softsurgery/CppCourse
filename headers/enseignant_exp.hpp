#ifndef ENSEIGNANT_EXP_HPP
#define ENSEIGNANT_EXP_HPP

#include "enseignant.hpp"

class EnseignantExpert : public Enseignant
{
public:
    EnseignantExpert(std::string mat, std::string nom, std::string pre, int heu, std::string entreprise) : Enseignant(mat, nom, pre, heu)
    {
        this->entreprise = entreprise;
    }

    // getter & setter
    std::string getEntreprise() const
    {
        return entreprise;
    }
    void setEntreprise(std::string entreprise)
    {
        this->entreprise = entreprise;
    }

    // payment
    int payment() override
    {
        return (this->getHeu() * 40);
    }

    std::string toString() override
    {
        return "Matricule: " + getMat() + ", Nom: " + getNom() + ", Prenom: " + getPre() + ", Entreprise: " + getEntreprise() + ", Heures: " + std::to_string(getHeu()) + ", Paiement: " + std::to_string(payment());
    }

    // affichage
    void print() override
    {
        std::cout << "Matricule: " << getMat() << ", Nom: " << getNom() << ", Prenom: " << getPre()
                  << ", Entreprise: " << getEntreprise() << ", Heures: " << getHeu()
                  << ", Paiement: " << payment() << std::endl;
    }

private:
    std::string entreprise;
};

#endif