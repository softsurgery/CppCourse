#include "../headers/ColieEtr.hpp"

void ColieEtr::calculateCout() {
	Colie::calculateCout();
    cout += fraisSup;
}

std::string ColieEtr::to_string(){
    return "ID : " + std::to_string(id) +
    "\nEtat : " + std::to_string(etat) +
    "\nFrais : " + std::to_string(frais) +
    "\nPriorite : " + std::to_string(priorite) +
    "\nCout : " + std::to_string(cout) +
    "\nDestination : " + destination +
    "\nFrais Supplémentaire : " + std::to_string(fraisSup);
}