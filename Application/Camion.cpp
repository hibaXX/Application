#include "Camion.h"

Camion::Camion(int capacite, int nbessieux, int id, string marque, string model, double prix, bool disponible) :Vehicule(id, marque, model, prix, disponible)
{
	this->capacite = capacite;
	this->nbessieux = nbessieux;
}

void Camion::afficher() const
{
	Vehicule::afficher();
	cout << "La capacite :" << this->capacite << endl;
	cout << "Le nbessieux :" << this->nbessieux << endl;
}

double Camion::calculerprix(int durree)
{
	return Vehicule::calculerprix(durree);
}

Camion::~Camion()
{
	cout << "Le destructeur de Camion" << endl;
}

