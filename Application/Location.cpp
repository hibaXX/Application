#include "Location.h"
#include"Vehicule.h"
#include"Voiture.h"

int Location::compteurLo= 0;

Location::Location(int numeroLo, Client* client, Vehicule* vehicule, Date* date, int durree):numeroLo(++compteurLo)
{
    this->client = client;
    this->vehicule = vehicule;
    this->duree = duree;
    this->dateDebut = new Date(*date);
}

Location::Location(const Location& L):numeroLo(++(L.compteurLo))
{
    if (this != &L) {
        this->client = L.client;
        this->vehicule = L.vehicule;
        this->dateDebut = new Date(*(L.dateDebut));
        duree = L.duree;
    }
}

double Location::calculermontant(int durree)
{
    return vehicule->calculerprix(durree);
}

void Location::afficher()
{
        cout << "Numero : " << this->numeroLo << endl;

        cout << "Client : " << endl;
        client->afficher();

        cout << "Vehicule : " << endl;
        vehicule->afficher();

        cout << "Date debut : " << endl;
        dateDebut->afficher();

        cout << "Duree : " << duree << " jours" << endl;

        cout << "Montant : " << calculermontant(duree) << " DH" << endl;
    }

Location::~Location()
{
    delete dateDebut;
}
