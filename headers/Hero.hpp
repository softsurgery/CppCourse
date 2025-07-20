#include "Player.hpp"

#ifndef HERO_HPP
#define HERO_HPP

class Hero : Player
{
public:
    Hero(std::string name) : Player(name)
    {
        this->saved = 0;
        this->injuries = 0;
        this->level = 0;
    }
    Hero(std::string name, int level) : Hero(name)
    {
        this->saved = 0;
        this->injuries = 0;
        this->level = level;
    }
    Hero(std::string name, float x, float y) : Player(name, x, y)
    {
        this->saved = 0;
        this->injuries = 0;
        this->level = 0;
    }
    Hero(std::string name, float x, float y, int level) : Hero(name, x, y)
    {
        this->level = level;
    }
    Hero(std::string name, int health, int maxHealth, float x, float y) : Player(name, health, maxHealth, x, y) {}

    void print() override;

private:
    int saved;
    int injuries;
    int level;
};

#endif