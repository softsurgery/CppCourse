#ifndef COLIEETR_H
#define COLIEETR_H

#include <string>
#include "Colie.hpp"

class ColieEtr : public Colie {
    public:
        ColieEtr(int id, bool etat, float frais, short priorite, std::string destination, float fraisSup) : Colie(id, etat, frais, priorite){ 
            this->destination = destination;
            this->fraisSup = fraisSup;
        }

        std::string getDestination(){
            return destination;
        }

        float getFraisSup(){
            return fraisSup;
        }

        void setDestination(std::string destination){
            this->destination = destination;
        }

        void setFraisSup(float fraisSup){
            this->fraisSup = fraisSup;
        }

        void calculateCout();
        std::string to_string();

    private:
        std::string destination;
        float fraisSup;

};

#endif