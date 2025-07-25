#ifndef COMPTE_H
#define COMPTE_H
#include <string>


class Compte {
 public:
 Compte() {
  this->solde = 0;
 }
 Compte(std::string numero): Compte() {
  this->numero = numero;
 }
 Compte(std::string numero, double solde): Compte(numero) {
  this->solde = solde;
 }

 std::string getNumero() {
  return numero;
 }

 double getSolde() {
  return solde;
 }

 void opCredit(double credit);
 void opDebit(double debit);

 std::string to_string()  {
     return "Numero : " + numero + " Solde : " + std::to_string(solde);
 }

private:
 std::string numero;
 double solde;
};



#endif
