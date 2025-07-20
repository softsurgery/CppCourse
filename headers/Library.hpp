#include <iostream>
#include "Book.hpp"

#ifndef LIBRARY_HPP
#define LIBRARY_HPP

class Library
{

public:
    Library(int capacity)
    {
        this->capacity = capacity;
        this->books = new Book[capacity];
        this->nbBooks = 0;
        std::cout << "Library initialized with capacity " << this->capacity << std::endl;

    }

    int getCapacity()
    {
        return this->capacity;
    }

    int getNbBooks()
    {
        return this->nbBooks;
    }

    void add(Book b);
    void display();

    private : Book *books;
    int nbBooks;
    int capacity;
};

#endif