#include <iostream>

#include "headers/Client.h"
#include "headers/Compte.h"

int main()
{
    Compte c("123456", 23.3);
    Compte c2("1234567", 1000);
    Compte c3("123456", 100);

    Client cl("AAA", "BBBB", 20);

    cl.addCompte(c);
    cl.addCompte(c2);
    cl.addCompte(c);
    cl.addCompte(c3);

    cl.getCompteInfo(0);
    cl.getCompteInfo(1);
    cl.getCompteInfo(2);

    std::cout << cl.to_string() << std::endl;
    return 0;
}
