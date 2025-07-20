#include <iostream>
#include "headers/Coordinate.hpp"
#include "headers/Player.hpp"

int main()
{
    Player player1("Adam");
    Player* player2 = new Player("John", 10, 10);
    
    player2->print();
    delete player2;
    player1.print();

    return 0;
}