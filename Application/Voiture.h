#pragma once
#include "Vehicule.h"
class Voiture :public Vehicule
{
	int nbportes;
	string carburant;
public:
	Voiture(int, string, int, string, string, double, bool);
	void afficher()const override;
	double calculerprix(int durree) override;
	~Voiture();
};

