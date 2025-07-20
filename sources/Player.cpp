#include <iostream>
#include "../headers/Player.hpp"

void Player::print()
{
    std::cout << "Player: " << this->name << std::endl;
    std::cout << "Health: " << this->health << std::endl;
    std::cout << "Max Health: " << this->maxHealth << std::endl;
    std::cout << "Score: " << this->score << std::endl;
    this->position.print();
}