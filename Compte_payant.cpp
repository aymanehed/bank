#include "Compte_payant.h"

Bank::Compte_payant::Compte_payant()
{
}

Bank::Compte_payant::Compte_payant( Client* p, Devise* solde, double taux):Compte(p,solde)
{
    this->tauxInteret = taux;
}



void Bank::Compte_payant::deposerArgent(Devise* montant)
{
    Devise taux = this->solde->operator-(this->solde->operator-(0.05));
    this->deposerArgent(&taux);
}

bool Bank::Compte_payant::retirerArgent(Devise* montant)
{
    Compte_payant cp;
    Devise taux = this->solde->operator+(this->solde->operator*(0.05));
   return  this->Compte::retirerArgent(&taux);
}
