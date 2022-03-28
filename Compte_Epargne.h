#pragma once
#include "Compte.h"
namespace Bank {
	class Compte_Epargne : public virtual Compte
	{

	public: 
		Compte_Epargne();
		Compte_Epargne(Devise* solde,Client* prop ,double tauxIntert);
		void calcul_interet(); 
		bool retirerArgent(Devise* montant) override;

	private: 
		 double tauxIntret; 


	};

};