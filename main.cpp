#include <iostream>
#include "headers/coordinate.hpp"

int main()
{
    Coordinate coordinate;
    coordinate.setX(10);
    coordinate.setY(10);
    
    Coordinate origin(20, 20);

    Coordinate sym = coordinate.determineSymetricalPosition(origin);
    coordinate.print();
    origin.print();
    sym.print();
    return 0;
}