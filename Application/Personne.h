#pragma once
#include<iostream>
using namespace std;
class Personne
{
	string nom;
	string prenom;
	string CIN;
	string telephone;
public:
	Personne(string, string, string, string);
	virtual void afficher()const;
	virtual ~Personne();
};

