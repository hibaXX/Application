#pragma once
#include"Client.h"
#include"Date.h"
#include"Vehicule.h"

class Location
{
	const int numeroLo;
	Client* client;
	Vehicule* vehicule;
	Date* dateDebut;
	int duree;
	static int compteurLo;
public:
	Location(int, Client*, Vehicule*, Date*, int);
	Location(const Location&);
	double calculermontant(int durree);
	void afficher();
	~Location();
};

