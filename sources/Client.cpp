
#include "../headers/Client.h"

#include <iostream>

void Client::getCompteInfo(int i) {
    if (i >= nbCompte) {
        std::cout << "Compte " << i << " is out of bounds" << std::endl;
    } else {
        std::cout << comptes[i].to_string() << std::endl;
    }
}

void Client::addCompte(Compte compte) {
    if (nbCompte < maxCompte) {
        if (this->searchCompte(compte) == -1) {
            comptes[nbCompte] = compte;
            nbCompte++;
            std::cout << "Compte " << compte.getNumero() << " is added successfully" << std::endl;
        } else {
            std::cout << "Compte " << compte.getNumero() << " already exists" << std::endl;
        }

    } else {
        std::cout << "Array is full" << std::endl;
    }
}

int Client::searchCompte(Compte compte) {
    int i = 0;
    while (i < nbCompte && comptes[i].getNumero() != compte.getNumero()) i++;
    return i == nbCompte ? -1 : i;
}

double Client::getTotalSolde() {
    double total = 0;
    for (int i = 0; i < nbCompte; i++) {
        total += comptes[i].getSolde();
    }
    return total;
}