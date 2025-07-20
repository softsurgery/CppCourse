#include <iostream>

#ifndef BOOK_HPP
#define BOOK_HPP

class Book
{

public:
    Book()
    {}
    Book(std::string titre, std::string auteur, std::string isbn, double prix)
    {
        this->titre = titre;
        this->auteur = auteur;
        this->isbn = isbn;
        this->prix = prix;
    }

    std::string getTitre()
    {
        return this->titre;
    }

    void print();

private:
    std::string titre;
    std::string auteur;
    std::string isbn;
    double prix;
};

#endif