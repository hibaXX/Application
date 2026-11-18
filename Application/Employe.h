#pragma once
#include "Personne.h"
class Employe :public Personne
{
	string poste;
	double salaire;
public:
	Employe(string, double, string, string, string, string);
	void afficher()const override;
	double calculerprime(int)const;
	~Employe();
};

