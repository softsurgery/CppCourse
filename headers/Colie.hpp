#ifndef COLIE_H
#define COLIE_H

#include <string>

class Colie{
    public:
    Colie(int id, bool etat, float frais, short priorite){
        this->id = id;
        this->etat = etat;
        this->frais = frais;
        this->priorite = priorite;
        this->cout = 0;
    }

    Colie(const Colie& colie) : Colie(colie.id, colie.etat, colie.frais, colie.priorite){}


    int getId(){
        return id;
    }

    bool getEtat(){
        return etat;
    }

    float getFrais(){
        return frais;
    }

    short getPriorite(){
        return priorite;
    }

    float getCout(){
        return cout;
    }

    void setId(int id){
        this->id = id;
    }

    void setEtat(bool etat){
        this->etat = etat;
    }

    void setFrais(float frais){
        this->frais = frais;
    }

    void setPriorite(short priorite){
        this->priorite = priorite;
    }

    void setCout(float cout){
        this->cout = cout;
    }

    Colie& operator=(const Colie& colie);
    virtual std::string to_string();
    virtual void calculateCout();
    virtual ~Colie() {};
    
    protected:
    int id;
    bool etat;
    float frais;
    short priorite;
    float cout;
};

#endif