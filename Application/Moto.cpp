#include "Moto.h"

Moto::Moto(string cylindree, string typemoto, int id, string marque, string model, double prix, bool disponible):Vehicule(id,marque,model,prix,disponible)
{
	this->cylindree = cylindree;
	this->typemoto = typemoto;
}

void Moto::afficher() const
{
	Vehicule::afficher();
	cout << "Cylindree :" << this->cylindree << endl;
	cout << "Le type de moto :" << this->typemoto << endl;
}

double Moto::calculerprix(int durree)
{
	return Vehicule::calculerprix(durree);
}

Moto::~Moto()
{
	cout << "Le destructeur de Moto" << endl;
}
