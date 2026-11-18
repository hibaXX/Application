#include "Date.h"

Date::Date(int j, int m, int a)
{
	this->jour = j;
	this->mois = m;
	this->annee = a;
}

bool Date::estbissextile(int a)
{
	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0) return true;
	return false;
}

bool Date::valider(int j, int m, int a)
{
	int T[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (j < 0 || j>31 || a < 0 || a>2026 || m < 0 || m>12) return false;
	if (estbissextile(a)) {
		T[1] = 28;
	}
	return j < T[m] - 1;
}

bool Date::operator==(Date& d)const
{
	if (this->annee == d.annee && this->mois == d.mois && this->jour == d.jour)return true;
	return false;
}

bool Date::operator<(Date& d) const
{
  if(this->annee < d.annee) return true;
  if (this->annee == d.annee && this->mois < d.mois) return true;
  if (this->annee == d.annee && this->mois == d.mois && this->jour < d.jour) return true;
  return false;
}

void Date::afficher() const
{
	cout << "L'annee :" << this->annee << endl;
	cout << "Le mois :" << this->mois << endl;
	cout << "Le jour :" << this->jour << endl;
}

Date::~Date()
{
	cout << "Destructeur de date" << endl;
}
