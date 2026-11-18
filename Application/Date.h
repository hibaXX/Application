#pragma once
#include<iostream>
using namespace std;
class Date
{
private:
	int jour;
	int mois;
	int annee;
public:
	Date(int, int, int);
	bool estbissextile(int);
	bool valider(int, int, int);
	bool operator==(Date&)const;
	bool operator<(Date&)const;
	void afficher()const;
	~Date();
};

