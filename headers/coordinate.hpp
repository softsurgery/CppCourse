#ifndef COORDINATE_HPP
#define COORDINATE_HPP

class Coordinate{
    public:
    float x;
    float y;

    // constructors
    //parameterized constructor
    Coordinate(float y, float x)
    {
        this->x = x;
        this->y = y;
    }
    //default constructor
    Coordinate(){
        this->x = 0;
        this->y = 0;
    }
};

#endif