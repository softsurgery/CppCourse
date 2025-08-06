#ifndef ENTRETIEN_H
#define ENTRETIEN_H

#include "Candidat.hpp"
#include <string>
#include <vector>

class Entretien {
    public:
        Entretien(int id, std::string date) {
            this->id = id;
            this->date = date;
        }
        Entretien(const Entretien& entretien) : Entretien(entretien.id, entretien.date){}
        Entretien& operator=(const Entretien& entretien);
        virtual ~Entretien() {};

        int getId() {
            return id;
        }

        std::string getDate() {
            return date;
        }

        std::vector<std::string> getCins() {
            return cins;
        }

        void setId(int id) {
            this->id = id;
        }

        void setDate(std::string date) {
            this->date = date;
        }

        void setCins(std::vector<std::string> cins) {
            this->cins = cins;
        }

        int searchCin(std::string cin);
        void addCin(std::string cin);
        std::string to_string();
        int getNbCandidat(std::vector<Candidat*> candidats);

    private:
        int id;
        std::string date;
        std::vector<std::string> cins;
};

#endif