#include <iostream>
#include <string.h>

#include "headers/Application.hpp"
#include "headers/Recrue.hpp"
#include "headers/Entretien.hpp"
#include "headers/Candidat.hpp"

int main()
{
    Candidat c("123456789", "Jean", "Michel", "Licence");
    std::cout << c.to_string() << std::endl
              << std::endl;

    Candidat c2("123456788", "Olivier", "Michel", "Master");
    Candidat c3("123456787", "Benjamin", "David", "Licence");

    Recrue r("123456750", "Jean", "Michel", "Licence", "Recruteur", 2000);
    std::cout << r.to_string() << std::endl;

    Application app("Recrutement 2025/2026");

    app.addCandidat(&c);
    app.addCandidat(&c2);
    app.addCandidat(&c3);
    app.addCandidat(&r);

    app.addEntretien(new Entretien(1, "20/01/2025"));
    app.addEntretien(new Entretien(2, "20/02/2025"));
    app.addEntretien(new Entretien(3, "20/03/2025"));
    app.addEntretien(new Entretien(4, "20/04/2025"));

    std::cout << app.to_string() << std::endl;

    app.assignCandidatToEntretien("123456789", 1);
    app.assignCandidatToEntretien("123456788", 2);
    app.assignCandidatToEntretien("123456787", 1);

    std::cout << app.to_string() << std::endl;

    app.displayCandidatsByScore(0);

    app.saveMaxEntretien("entretien_max.txt");

    return 0;
}
