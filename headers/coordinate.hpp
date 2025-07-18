#ifndef COORDINATE_HPP
#define COORDINATE_HPP

class Coordinate
{
    // members
public:
    // constructors
    // parameterized constructor
    Coordinate(float y, float x)
    {
        this->x = x;
        this->y = y;
    }
    // default constructor
    Coordinate()
    {
        this->x = 0;
        this->y = 0;
    }

    float getX()
    {
        return this->x;
    }

    float getY()
    {
        return this->y;
    }

    void setX(float x)
    {
        if (x > 0) {
            this->x = x;
        }
    }

    void setY(float y)
    {
        this->y = y;
    }

private:
    // attributes
    // properties
    float x;
    float y;
};

#endif