#pragma once
#include<iostream>
using namespace std;
#include"Vehicule.h"
#include"Client.h"
#include"Employe.h"
#include"Location.h"
class Agence
{
	string nomAgence;
	Vehicule** vehicules;
	int nbVehicules;
	int Capacite;
public:
	Agence(string, int);
	Agence(const Agence&);
	void ajouterVehicule(Vehicule*);
	void supprimerVehicule(int);
	Vehicule* rechercherVehicule(int) const;
	void afficher() const;
	~Agence();
};

