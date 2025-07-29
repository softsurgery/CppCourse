#include "../headers/Application.hpp"

#include <iostream>
#include <fstream>

void Application::addLivreur(Livreur *livreur)
{
    int i = 0;
    while (i < livreurs.size() && livreurs[i]->getCin() != livreur->getCin())
        i++;
    if (i == livreurs.size())
        livreurs.push_back(livreur);
    else
        std::cout << "Livreur with CIN " << livreur->getCin() << " already exists." << std::endl;
}

void Application::addColieToLivreur(std::string cin, Colie *colie)
{
    int i = 0;
    while (i < livreurs.size() && livreurs[i]->getCin() != cin)
        i++;
    if (i == livreurs.size())
        throw std::runtime_error("Livreur with CIN " + cin + " not found.");
    else
        livreurs[i]->addColie(colie);
}

void Application::calculateCouts()
{
    for(int i = 0; i < livreurs.size(); i++){
        for(int j = 0; j < livreurs[i]->getColies().size(); j++){
            livreurs[i]->getColies()[j]->calculateCout();
        }
    }
}


void Application::displayMaxLivreur()
{
    Livreur* maxLivreur = livreurs[0];

    for(int i = 1; i < livreurs.size(); i++){
      if (livreurs[i] > maxLivreur){
        maxLivreur = livreurs[i];
      }

    }
    std::cout << "Livreur with maximum colies: " << maxLivreur->getCin() << std::endl;
}

void Application::saveLivreurs(const std::string& filename){
    std::ofstream out(filename);
    for(int i = 0; i < livreurs.size(); i++){
        out << livreurs[i]->to_string();
    }
}

// ERROR
//Compile Time Errors

//Lexical errors;
//Syntax errors;

//Runtime Errors
//Semantic errors;
//Exception handling errors;