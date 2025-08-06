#include <iostream>
#include <string.h>

#include "headers/Colie.hpp"
#include "headers/ColieEtr.hpp"
#include "headers/Livreur.hpp"
#include "headers/Application.hpp"

int main()
{
    Colie colie1(1, false, 10, 2);
    Colie colie2(colie1);
    colie2.setId(2);
    ColieEtr colie3(3, true, 10, 2, "Paris", 5);

    Livreur livreur1("123456789");
    livreur1.addColie(&colie1);
    livreur1.addColie(&colie2);
    livreur1.addColie(&colie3);

    livreur1.calculateCouts();

    Livreur livreur2("123456788");
    livreur2.addColie(new Colie(4, true, 655.78, 5));
    livreur2.addColie(new Colie(5, true, 10, 3));

    Application app("Test");
    app.addLivreur(&livreur1);
    app.addLivreur(&livreur2);
    app.displayMaxLivreur();
    app.calculateCouts();
    app.addColieToLivreur("123456788", &colie1);

    app.saveLivreurs("livreurs.txt");

    std::cout << app.getNom() << std::endl;
    return 0;
}
