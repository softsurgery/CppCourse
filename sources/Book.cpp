#include <iostream>
#include "../headers/Book.hpp"

void Book::print()
{
    std::cout << "Titre: " << this->titre << std::endl;
    std::cout << "Auteur: " << this->auteur << std::endl;
    std::cout << "ISBN: " << this->isbn << std::endl;
    std::cout << "Prix: " << this->prix << std::endl;
}