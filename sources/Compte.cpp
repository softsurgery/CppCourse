#include "../headers/Compte.h"

#include <iostream>
#include <ostream>

void Compte::opCredit(double credit) {
    this->solde+=credit;
}

void Compte::opDebit(double debit) {
    this->solde-=debit;
}