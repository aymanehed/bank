#include "Compte_Epargne_payant.h"
using namespace std;
using namespace Bank;

Bank::Compte_Epargne_payant::Compte_Epargne_payant(Client* p, Devise* solde, double taux, double tauxIntert)
:Compte_Epargne(solde,p,tauxIntert),Compte_payant(p,solde,taux),Compte(p,solde){
}

bool Bank::Compte_Epargne_payant::retirerArgent(Devise* solde)
{
	if (Compte_Epargne::retirerArgent(solde))
		return Compte_payant::retirerArgent(solde);
			
}
