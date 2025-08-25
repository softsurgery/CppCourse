#ifndef UNIVERSITE_HPP
#define UNIVERSITE_HPP

#include "classe.hpp"

#include <fstream>

class Universite
{
public:
    Universite(std::string nom)
    {
        this->nom = nom;
    }

    // getter
    std::string getNom()
    {
        return nom;
    }
    int getlong1()
    {
        return enseignants.size();
    }
    int getlong2()
    {
        return classes.size();
    }

    // setter
    void setNom(std::string nom)
    {
        this->nom = nom;
    }

    // ajouter Enseignantgnant
    int search_Enseignantgnant(std::string mat)
    {
        for (int i = 0; i < getlong1(); i++)
        {
            if (enseignants[i].getMat() == mat)
            {
                return 1; // found
            }
        }
        return 0; // not found
    }

    void addEnseignant(Enseignant* e)
    {
        if (!search_Enseignantgnant(e->getMat()))
            enseignants.push_back(*e);
            
    }

    // ajouter classe
    int search_classe(std::string des)
    {
        for (int i = 0; i < getlong2(); i++)
        {
            if (classes[i].getDesignation() == des)
            {
                return 1; // found
            }
        }
        return 0; // not found
    }

    int searchEnseignant(std::string mat)
    {
        int i = 0;
        while (i < getlong1() && enseignants[i].getMat() != mat)
            i++;
        return i == getlong1() ? -1 : i;
    }

    void addClasse(Classe* c, std::string mat)
    {
        if (!search_classe(c->getDesignation()))
        {
            if (searchEnseignant(mat) == -1)
                throw std::runtime_error("Error: Enseignant non trouvé.");
            c->ajouter(mat);
            classes.push_back(*c);
        }
        else
            throw std::runtime_error("Error: La classe existe deja.");
    }

    // affichage payement totale
    void affiche_pay()
    {
        for (int i = 0; i < getlong1(); i++)
        {
            std::cout << "Enseignant " << i + 1 << " (" << enseignants[i].getNom() << ") : " << enseignants[i].payment() << std::endl;
        }
    }

    // le nombre de classes affectées à un Enseignantgnant
    int nbr_classe_aff(std::string mat)
    {
        int nbr = 0;
        for (int i = 0; i < getlong2(); i++)
            if (classes[i].search(mat) != -1)
                nbr++;
        return nbr;
    }

    void affiche_max_enseignant()
    {
        Enseignant max = enseignants[0];
        for (int i = 1; i < getlong1(); i++)
        {
            if (enseignants[i] > max)
                max = enseignants[i];
        }
        std::cout << "Le plus grand est " << max.toString() << std::endl;
    }

    // fichier texte
    void enregistre(std::string filename, std::string enterprise)
    {
        EnseignantExpert *e_exp = nullptr;
        std::ofstream file(filename);
        for (int i = 0; i < getlong1(); i++)
        {
            if ((e_exp = dynamic_cast<EnseignantExpert *>(&enseignants[i])))
            {
                if (e_exp->getEntreprise() == enterprise)
                    file << e_exp->toString() << std::endl;
            }
        }
    }

private:
    std::string nom;
    std::vector<Enseignant> enseignants;
    std::vector<Classe> classes;
};

#endif