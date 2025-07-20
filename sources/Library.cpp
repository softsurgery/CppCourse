#include <iostream>
#include "../headers/Library.hpp"

void Library::add(Book b)
{
    if (this->nbBooks < this->capacity)
    {
        this->books[this->nbBooks] = b;
        this->nbBooks++;
        std::cout << "Book with title " << b.getTitre() << " added to the library" << std::endl;
    }
    else
    {
        std::cout << "Library is full" << std::endl;
    }
}

void Library::display()
{
    if (this->nbBooks == 0)
    {
        std::cout << "Library is empty" << std::endl;
    }
    else
    {

        std::cout << "This library contains " << this->nbBooks << " book(s)" << std::endl;
        for (int i = 0; i < this->nbBooks; i++)
        {
            std::cout << "Book " << i << std::endl;
            this->books[i].print();
        }
    }
}