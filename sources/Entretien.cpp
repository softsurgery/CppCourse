#include "../headers/Entretien.hpp"
#include "../headers/Recrue.hpp"
#include <iostream>

Entretien &Entretien::operator=(const Entretien &entretien)
{
    if (this != &entretien)
    {
        this->id = entretien.id;
        this->date = entretien.date;
        this->cins = entretien.cins;
    }
    return *this;
}

int Entretien::searchCin(std::string cin)
{
    int i = 0;
    while (i < cins.size() && cins[i] != cin)
        i++;
    if (i == cins.size())
        return -1;
    else
        return i;
}

void Entretien::addCin(std::string cin)
{
    int i = searchCin(cin);
    if (i == -1)
    {
        cins.push_back(cin);
        std::cout << "Cin " << cin << " added to entretien " << id << std::endl;
    }
    else
    {
        throw std::runtime_error("Cin " + cin + " already exists in entretien " + std::to_string(id) + ".");
    }
}

std::string Entretien::to_string()
{
    std::string cinsStr = "";
    for (int i = 0; i < cins.size(); i++)
    {
        cinsStr += "\nCin " + std::to_string(i) + " : " + cins[i];
    }

    return "ID : " + std::to_string(id) +
           "\nDate : " + date +
           cinsStr;
}

int Entretien::getNbCandidat(std::vector<Candidat *> candidats)
{
    // TODO: count number of candidats in entretien instance of candidat
    Recrue *recrue;
    int count = 0, j;
    for (int i = 0; i < cins.size(); i++)
    {
        j = 0;
        while (j < candidats.size() && candidats[j]->getCin() != cins[i])
            j++;
        if (j != candidats.size())
        {
            if (recrue = dynamic_cast<Recrue *>(candidats[j]))
                if (recrue->getPoste().empty())
                    count++;
        }
    }
    return count;
}