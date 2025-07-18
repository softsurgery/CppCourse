#include <iostream>
#include "headers/coordinate.hpp"

int main()
{
    Coordinate coordinate;
    coordinate.setX(-10); 
    coordinate.setY(20);
    std::cout << coordinate.getX() << std::endl;
    std::cout << coordinate.getY() << std::endl;
    return 0;
}