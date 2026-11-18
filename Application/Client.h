#pragma once
#include "Personne.h"
class Client : public Personne
{
	const int id;
	string email;
	string adresse;
	static int compteur;
public:
	Client(int, string, string,string,string,string,string);
	string modifier(string);
	void afficher() const override;
	~Client();
};

