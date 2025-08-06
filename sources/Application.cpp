#include "../headers/Application.hpp"
#include "../headers/Recrue.hpp"

#include <iostream>
#include <fstream>

int Application::searchCandidat(std::string cin)
{
    int i = 0;
    while (i < candidats.size() && candidats[i]->getCin() != cin)
        i++;
    if (i == candidats.size())
        return -1;
    else
        return i;
}

void Application::addCandidat(Candidat *candidat)
{
    int i = searchCandidat(candidat->getCin());
    if (i == candidats.size())
    {
        candidats.push_back(candidat);
        std::cout << "Candidat " << candidat->getCin() << " added." << std::endl;
    }
    else
    {
        std::cout << "Candidat " << candidat->getCin() << " already exists." << std::endl;
    }
}

int Application::searchEntretien(int id)
{
    int i = 0;
    while (i < entretiens.size() && entretiens[i]->getId() != id)
        i++;
    if (i == entretiens.size())
        return -1;
    else
        return i;
}

void Application::addEntretien(Entretien *entretien)
{
    int i = searchEntretien(entretien->getId());
    if (i == entretiens.size())
    {
        entretiens.push_back(entretien);
        std::cout << "Entretien " << entretien->getId() << " added." << std::endl;
    }
    else
    {
        std::cout << "Entretien " << entretien->getId() << " already exists." << std::endl;
    }
}

void Application::assignCandidatToEntretien(std::string cin, int id)
{
    int i = searchCandidat(cin);
    if (i != -1)
    {
        int j = searchEntretien(id);
        if (j != -1)
        {
            entretiens[j]->addCin(cin);
            std::cout << "Candidat " << cin << " assigned to entretien " << id << std::endl;
        }
        else
        {
            std::cout << "Entretien " << id << " not found." << std::endl;
        }
    }
    else
    {
        std::cout << "Candidat " << cin << " not found." << std::endl;
    }
}

void Application::displayCandidatsByScore(int score)
{
    for (int i = 0; i < candidats.size(); i++)
        if (*candidats[i] == score)
            std::cout << candidats[i]->to_string() << std::endl;
}

int Application::countRecrueByPoste(std::string poste)
{
    int count = 0;
    Recrue *recrue = nullptr;
    for (int i = 0; i < candidats.size(); i++)
    {
        recrue = dynamic_cast<Recrue *>(candidats[i]);
        if (recrue->getPoste() == poste)
            count++;
    }
    return count;
}

void Application::saveMaxEntretien(const std::string &filename)
{
    int maxIndex = 0;
    for (int i = 1; i < entretiens.size(); i++)
        if (entretiens[i]->getNbCandidat(this->candidats) > entretiens[maxIndex]->getNbCandidat(this->candidats))
            maxIndex = i;

    std::ofstream out(filename);
    out << entretiens[maxIndex]->to_string() << std::endl
        << "Nb de cins : " << entretiens[maxIndex]->getNbCandidat(this->candidats)     << std::endl;
}