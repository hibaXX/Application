#include "Employe.h"

Employe::Employe(string poste, double salaire, string prenom, string nom, string CIN, string telephone):Personne(prenom,nom,CIN,telephone)
{
	this->poste = poste;
	this->salaire = salaire;
}

void Employe::afficher() const
{
	Personne::afficher();
	cout << "Poste :" << this->poste << endl;
	cout << "Salaire :" << this->salaire << endl;
}

double Employe::calculerprime(int nblocation) const
{
	if (nblocation >= 0) return 1000;
	else return 0;
}

Employe::~Employe()
{
	cout << "Destructeur de Employe" << endl;
}
