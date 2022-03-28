
#include"Compte.h"
using namespace std;
using namespace Bank;
Client::Client()
{

}

Client::Client(string n, string p, string a)
{
	this->nom = n;
	this->prenom = p;
	this->addresse = a;
}

Client::~Client()
{
	cout << "le destructeur de la classe compte";
}

void Client::afficher() const
{
	cout << "nom: " << this->nom << endl;
	cout << "prenom: " << this->prenom << endl;
	cout << "adresse: " << this->addresse << endl;
}
