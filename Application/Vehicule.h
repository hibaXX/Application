#pragma once
#include<iostream>
using namespace std;

class Vehicule
{
	const int id;
	string marque;
	string model;
	bool disponible;
	static int compteur;
protected:
	double prix;
public:
	Vehicule(int, string, string, double, bool);
	virtual double calculerprix(int durree);
	double modifier(double nvprix);
	bool operator==(const Vehicule&)const;
	bool comparerId(int id) const;
	bool operator<(const Vehicule&)const;
	virtual void afficher()const;
	~Vehicule();
};

