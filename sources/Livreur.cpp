#include "../headers/Livreur.hpp"

#include <iostream>

void Livreur::addColie(Colie *colie)
{
    int i = 0;
    while (i < colies.size() && colies[i]->getId() != colie->getId())
        i++;
    if (i == colies.size())
        colies.push_back(colie);
    else
        std::cout << "Colie with ID " << colie->getId() << " already exists." << std::endl;
}

void Livreur::calculateCouts()
{
    for (int i = 0; i < colies.size(); i++)
        colies[i]->calculateCout();
}

int Livreur::getColieCountLivreur() const
{
    int count = 0;
    for (int i = 0; i < colies.size(); i++)
        if (colies[i]->getEtat())
            count++;
    return count;
}

bool Livreur::operator>(const Livreur &other)
{
    return getColieCountLivreur() > other.getColieCountLivreur();
}

std::string Livreur::to_string(){
    std::string coliesStr = "";
    for (int i = 0; i < colies.size(); i++) {
        coliesStr += "\nColie " + std::to_string(i) + " : " + colies[i]->to_string() + "\n";
    }

    return "CIN : " + cin +
           "\nColies : " + coliesStr;
}

