#include "Voiture.h"

Voiture::Voiture(int nbportes, string carburant, int id, string marque, string model, double prix, bool disponible):Vehicule(id,marque,model,prix,disponible)
{
	this->nbportes = nbportes;
	this->carburant = carburant;
}

void Voiture::afficher() const
{
	Vehicule::afficher();
	cout << "NbPortes :" << this->nbportes << endl;
	cout << "carburant :" << this->carburant << endl;
}

double Voiture::calculerprix(int durree)
{
	return Vehicule::calculerprix(durree);
}

Voiture::~Voiture()
{
	cout << "Le destructeur de Voiture" << endl;
}
