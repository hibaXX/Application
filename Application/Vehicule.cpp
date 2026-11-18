#include "Vehicule.h"

int Vehicule::compteur = 0;
Vehicule::Vehicule(int id, string marque, string model, double prix, bool disponible):id(++compteur)
{
	this->marque = marque;
	this->model = model;
	this->prix = prix;
	this->disponible = disponible;
}

double Vehicule::calculerprix(int durree)
{
	return durree * prix;
}

double Vehicule::modifier(double nvprix)
{
	return nvprix = prix;
}

bool Vehicule::operator==(const Vehicule& V) const
{
	if (this->marque == V.marque && this->model == V.model && this->prix == V.prix) return true;
	return false;
}

bool Vehicule::comparerId(int id) const
{
	return (this->id == id);
}

bool Vehicule::operator<(const Vehicule& V) const
{
	if (this->prix < V.prix)return true;
	return false;
}

void Vehicule::afficher() const
{
	cout << "La marque :" << this->marque << endl;
	cout << "Le model :" << this->model << endl;
	cout << "La prix :" << this->prix << endl;
	if (this->disponible == true)
		cout << "La vehicule : disponible" << endl;
	else
		cout << "La vehicule n'est pas disponible" << endl;
}

Vehicule::~Vehicule()
{
	cout << "Le destructeur de vehicule" << endl;
}
