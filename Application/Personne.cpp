#include "Personne.h"

Personne::Personne(string nom, string prenom, string CIN, string telephone)
{
	this->nom = nom;
	this->prenom = prenom;
	this->CIN = CIN;
	this->telephone = telephone;
}

void Personne::afficher() const
{
	cout << "Le nom :" << this->nom << endl;
	cout << "Le prenom :" << this->prenom << endl;
	cout << "CIN :" << this->CIN  << endl;
	cout << "Le telephone :" << this->telephone << endl;
}

Personne::~Personne()
{
	cout << "Destrusteur de personne" << endl;
}
