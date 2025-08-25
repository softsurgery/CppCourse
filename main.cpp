#include "headers/classe.hpp"
#include "headers/enseignant.hpp"
#include "headers/enseignant_exp.hpp"
#include "headers/universite.hpp"
#include <iostream>

int main()
{

    Enseignant e1("1203", "adam", "adam", 200);
    Enseignant e2("1305", "hamza", "hamza", 50);
    Enseignant e3("1201", "meryem", "meryem", 150);
    Enseignant e4(e1);

    EnseignantExpert e_exp("5000", "omar", "omat", 70, "lol");

    Classe cl1("english");
    Classe cl2("french");

    cl1.ajouter(e1.getMat());
    cl1.ajouter(e2.getMat());

    cl2.ajouter(e2.getMat());
    cl2.ajouter(e3.getMat());
    cl2.ajouter(e_exp.getMat());

    Universite cl_uni("esprit");

    cl_uni.addEnseignant(&e1);
    cl_uni.addEnseignant(&e2);
    cl_uni.addEnseignant(&e4);
    cl_uni.addEnseignant(&e_exp);
    cl_uni.addEnseignant(&e1);

    cl_uni.addClasse(&cl1, "1203");
    cl_uni.addClasse(&cl2, "1305");

    std::cout << "\naffiche payment:\n";
    cl_uni.affiche_pay();
    std::cout << "\nnbr de classe (e2):" << cl_uni.nbr_classe_aff(e2.getMat()) << std::endl;

    std::cout << "\nbyy\n";

    return 0;
}