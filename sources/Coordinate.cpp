#include <iostream>
#include "../headers/Coordinate.hpp"

Coordinate Coordinate::determineSymetricalPosition(Coordinate coordinate)
{
    float nx, ny;

    float dx = abs(coordinate.getX() - this->x);
    float dy = abs(coordinate.getY() - this->y);

    if (this->x > coordinate.getX())
    {
        nx = coordinate.getX() - dx;
    }
    else
    {
        nx = coordinate.getX() + dx;
    }
    if (this->y > coordinate.getY())
    {
        ny = coordinate.getY() - dy;
    }
    else
    {
        ny = coordinate.getY() + dy;
    }

    return Coordinate(nx, ny);
}

void Coordinate::print()
{
    std::cout << "(" << this->x << ", " << this->y << ")" << std::endl;
}