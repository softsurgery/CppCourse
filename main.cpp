#include <iostream>
#include "headers/Book.hpp"
#include "headers/Library.hpp"

int main()
{
    Book book("Le Petit Prince", "Antoine de Saint-Exupéry", "9782753002001", 10.99);
    Book* book2 = new Book("La Vie de Bohème", "André Gide", "9782753002002", 12.99);

    Library lib(1);
    lib.add(book);
    lib.add(*book2);
    lib.display();
    return 0;
}