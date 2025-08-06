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

    int searchCandidat(std::string cin);
    void addCandidat(Candidat *candidat);
    int searchEntretien(int id);
    void addEntretien(Entretien *entretien);
    void assignCandidatToEntretien(std::string cin, int id);
    void displayCandidatsByScore(int score);
    int countRecrueByPoste(std::string poste);
    void saveMaxEntretien(const std::string& filename);

private:
    std::string nom;
    std::vector<Candidat *> candidats;
    std::vector<Entretien *> entretiens;
};
#endif