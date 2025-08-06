#ifndef CANDIDAT_H
#define CANDIDAT_H

#include <iostream>
#include <string>

class Candidat {
    public:
        Candidat(std::string cin, std::string nom, std::string prenom, std::string diplome) {
            this->cin = cin;
            this->nom = nom;
            this->prenom = prenom;
            this->diplome = diplome;
        }
        Candidat(const Candidat& candidat) : Candidat(candidat.cin, candidat.nom, candidat.prenom, candidat.diplome){}
        Candidat& operator=(const Candidat& candidat);
        bool operator==(const int &score);
        virtual ~Candidat() {};

        std::string getCin() {
            return cin;
        }

        std::string getNom() {
            return nom;
        }

        std::string getPrenom() {
            return prenom;
        }

        std::string getDiplome() {
            return diplome;
        }

        int getScore() {
            return score;
        }

        void setCin(std::string cin) {
            this->cin = cin;
        }

        void setNom(std::string nom) {
            this->nom = nom;
        }

        void setPrenom(std::string prenom) {
            this->prenom = prenom;
        }

        void setDiplome(std::string diplome) {
            this->diplome = diplome;
        }

        void setScore(int score) {
            if (score < 50 || score > 100) {
                std::cout << "Score invalide" << std::endl;
            }
            else {
                this->score = score;
            }
        }

        virtual std::string to_string();

    protected:
        std::string cin;
        std::string nom;
        std::string prenom;
        std::string diplome;
        int score;
};

#endif