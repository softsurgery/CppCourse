#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include "Candidat.hpp"
#include "Entretien.hpp"
#include <string>
#include <vector>

class Application
{
public:
    Application(std::string nom)
    {
        this->nom = nom;
    }
    std::string getNom()
    {
        return nom;
    }
    std::vector<Candidat *> getCandidats()
    {
        return candidats;
    }
    void setNom(std::string nom)
    {
        this->nom = nom;
    }
    void setCandidats(std::vector<Candidat *> candidats)
    {
        this->candidats = candidats;
    }
    virtual ~Application() {};

private:
    std::string nom;
    std::vector<Candidat *> candidats;
    std::vector<Entretien *> entretiens;
};
#endif