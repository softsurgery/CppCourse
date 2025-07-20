#include "Coordinate.hpp"

#ifndef PLAYER_HPP
#define PLAYER_HPP

class Player
{
public:
    Player(std::string name)
    {
        this->name = name;
        this->health = 100;
        this->maxHealth = 200;
        this->score = 0;
        this->position = Coordinate(0, 0);
    }

    Player(std::string name, float x, float y) : Player(name)
    {
        this->maxHealth = 100;
        this->position = Coordinate(x, y);
    }

    Player(std::string name, int health) : Player(name)
    {
        this->health = health;
    }

    Player(std::string name, int health, int maxHealth, float x, float y) : Player(name, x, y)
    {
        this->health = health;
        this->maxHealth = maxHealth;
    }

    //desctructor
    ~Player()
    {
        std::cout << "Destructor called" << std::endl;
    }

    void print();

private:
    std::string name;
    int health;
    int maxHealth;
    int score;
    Coordinate position;
};

#endif