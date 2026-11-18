#include "Client.h"
#include"Personne.h"
int Client::compteur = 0;
Client::Client(int id, string email, string adresse,string nom,string prenom,string CIN,string telephone):id(++compteur),Personne(nom,prenom,CIN,telephone)
{
	this->adresse = adresse;
	this->email = email;
}

string Client::modifier(string email)
{
	return this->email = email;
}

void Client::afficher() const
{
	Personne::afficher();//démasquage
	cout << "Email :" << this->email << endl;
	cout << "Adresse :" << this->adresse << endl;
}

Client::~Client()
{
	cout << "Le destructeur de client" << endl;
	compteur--;
}


