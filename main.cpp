#include <iostream>
#include "headers/Hero.hpp"

int main()
{
    Hero player1("Adam");
    Hero *player2 = new Hero("John", 10, 10);

    player2->print();
    delete player2;
    player1.print();

    return 0;
}