#ifndef CLASSE_HPP
#define CLASSE_HPP

#include "enseignant.hpp"
#include "enseignant_exp.hpp"
#include <vector>

class Classe
{
public:
    Classe(std::string des)
    {
        designation = des;
    }

    // getter
    std::string getDesignation()
    {
        return designation;
    }
    int getlong()
    {
        return Enseignant_mat.size();
    }
    std::string getMat(int i)
    {
        if (i < getlong())
            return Enseignant_mat[i];
        else
            return "";
    }

    // setter
    void setDesignation(std::string designation)
    {
        this->designation = designation;
    }

    // ajout Enseignantgnant
    void ajouter(std::string mat)
    {
        Enseignant_mat.push_back(mat);
    }

    int search(std::string mat){
        int i = 0;
        while (i < getlong() && Enseignant_mat[i] != mat)
            i++;
        return i == getlong() ? -1 : i;
    }

private:
    std::string designation; // unique
    std::vector<std::string> Enseignant_mat;
};

#endif