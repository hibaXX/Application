#pragma once
#include "Vehicule.h"
class Camion :public Vehicule
{
	int capacite;
	int nbessieux;
public:
	Camion(int, int, int, string, string, double, bool);
	void afficher() const override;
	double calculerprix(int durree) override;
	~Camion();
};

