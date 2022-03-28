#pragma once
class Devise
{

public: 
	Devise(); 
	Devise(double val); 
	bool operator>=(const Devise& D)const;
    Devise operator-(const Devise& D);
	Devise operator+(const Devise& D);
	Devise operator*(double v);
	Devise operator/(double v);
	void afficher()const;
private: 
	double valeur;
};

