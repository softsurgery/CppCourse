#ifndef ENSEIGNANT_HPP
#define ENSEIGNANT_HPP

#include <iostream>
#include <string>

class Enseignant
{
public:
    Enseignant();

    Enseignant(std::string mat, std::string nom, std::string pre, int heu)
    {
        this->mat = mat;
        this->nom = nom;
        this->pre = pre;
        this->heu = heu;
    }

    // Getters
    std::string getMat() const
    {
        return mat;
    }
    std::string getNom()
    {
        return nom;
    }
    std::string getPre()
    {
        return pre;
    }
    int getHeu()
    {
        return heu;
    }

    // Setters
    void setMat(std::string mat)
    {
        this->mat = mat;
    }
    void setNom(std::string nom)
    {
        this->nom = nom;
    }
    void setPre(std::string pre)
    {
        this->pre = pre;
    }
    void setHeu(int heu)
    {
        this->heu = heu;
    }

    // payment
    virtual int payment()
    {
        if (heu <= 196)
            return 2000;
        else
            return 2000 + ((heu - 196) * 20);
    }

    // affichage
    virtual void print()
    {
        std::cout << "Matricule: " << mat << ", Nom: " << nom << ", Prenom: " << pre
                  << ", Heures: " << heu << ", Paiement: " << payment() << std::endl;
    }

    // copie
    Enseignant(const Enseignant &other)
    {
        mat = other.mat;
        nom = other.nom;
        pre = other.pre;
        heu = other.heu;
    }

    Enseignant &operator=(const Enseignant &other)
    {
        if (this != &other)
        {
            mat = other.mat;
            nom = other.nom;
            pre = other.pre;
            heu = other.heu;
        }
        return *this;
    }

    bool operator>(const Enseignant &other) const
    {
        return heu > other.heu;
    }

    virtual std::string toString()
    {
        return "Matricule: " + mat + ", Nom: " + nom + ", Prenom: " + pre + ", Heures: " + std::to_string(heu);
    }

    // destructor
    ~Enseignant()
    {
        // std::cout << "Destructor called! (" << nom << ")\n";
    }

private:
    std::string mat; // unique
    std::string nom;
    std::string pre;
    int heu;
};

#endif