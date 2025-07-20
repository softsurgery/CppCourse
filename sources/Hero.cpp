#include <iostream>
#include "../headers/Hero.hpp"

void Hero::print()
{
    Player::print();
    std::cout << "Level: " << level
              << ", Saved: " << saved
              << ", Injuries: " << injuries
              << std::endl;
}
