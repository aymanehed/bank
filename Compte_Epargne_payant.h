#pragma once
#include "Compte_Epargne.h"
#include "Compte_payant.h"
#include "Devise.h"
namespace Bank {
    class Compte_Epargne_payant :
        public Compte_Epargne,Compte_payant
    {
    public:
        Compte_Epargne_payant(Client* p, Devise* solde, double taux, double tauxIntert);
        bool retirerArgent(Devise* solde)override;
    };
};
