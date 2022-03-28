
#pragma once
#include "Compte.h"
#include "Devise.h"
namespace Bank {
	class Compte_payant : public virtual Compte
	{
	public:
		Compte_payant();
		Compte_payant(Client* p,Devise* solde , double taux);
	 void deposerArgent(Devise* montant) override;
		bool retirerArgent(Devise* montant) override;

	private:
		double tauxInteret;

	};
};

