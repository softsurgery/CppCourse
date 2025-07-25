#ifndef CLIENT_H
#define CLIENT_H
#include "Compte.h"


class Client {
public:
    Client(int maxCompte) {
        this->maxCompte = maxCompte;
        comptes = new Compte[maxCompte];
        nbCompte = 0;
    }

    Client (std::string nom, std::string prenom , int maxCompte): Client(maxCompte) {
        this->nom = nom;
        this->prenom = prenom;
    }

    std::string getNom() {
        return nom;
    }

    std::string getPrenom() {
        return prenom;
    }

    int getNbCompte() {
        return nbCompte;
    }
    void getCompteInfo(int i);
    void addCompte(Compte compte);
    int searchCompte(Compte compte);
    double getTotalSolde();

    std::string to_string() {
        std::string accounts = "";
        for (int i = 0; i < nbCompte; i++) {
            accounts += "\n" + comptes[i].to_string();
        }
        return "Nom : " + nom +
        "\nPrenom : " + prenom +
        "\nNb Compte : " + std::to_string(nbCompte) +
        "\nAccounts :" + accounts +
        "\nTotal solde : " + std::to_string(getTotalSolde());
    }

private:
    std::string nom;
    std::string prenom;
    int nbCompte;
    Compte* comptes;
    int maxCompte;
};



#endif
