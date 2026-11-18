
#include "Agence.h"
#include <iostream>
using namespace std;

// Constructeur
Agence::Agence(string nom, int cap)
{
    nomAgence = nom;
    Capacite = cap;
    nbVehicules = 0;
    vehicules = new Vehicule * [Capacite];
}

// Constructeur de copie
Agence::Agence(const Agence& a)
{
    nomAgence = a.nomAgence;
    Capacite = a.Capacite;
    nbVehicules = a.nbVehicules;

    vehicules = new Vehicule * [Capacite];

    for (int i = 0; i < nbVehicules; i++)
    {
        vehicules[i] = a.vehicules[i];
    }
}

// Ajouter un véhicule
void Agence::ajouterVehicule(Vehicule* v)
{
    if (nbVehicules < Capacite)
    {
        vehicules[nbVehicules] = v;
        nbVehicules++;
    }
    else
    {
        cout << "Agence pleine !" << endl;
    }
}

// Supprimer un véhicule selon son identifiant
void Agence::supprimerVehicule(int id)
{
    int pos = -1;

    for (int i = 0; i < nbVehicules; i++)
    {
        if (vehicules[i]->comparerId(id))
        {
            pos = i;
            break;
        }
    }

    if (pos != -1)
    {
        for (int i = pos; i < nbVehicules - 1; i++)
        {
            vehicules[i] = vehicules[i + 1];
        }

        nbVehicules--;
    }
    else
    {
        cout << "Vehicule introuvable !" << endl;
    }
}
// Rechercher un véhicule
Vehicule* Agence::rechercherVehicule(int id) const
{
    for (int i = 0; i < nbVehicules; i++)
    {
        if (vehicules[i]->comparerId(id) == id)
            return vehicules[i];
    }

    return nullptr;
}

// Affichage
void Agence::afficher() const
{
    cout << "Agence : " << nomAgence << endl;
    cout << "Nombre de vehicules : " << nbVehicules << endl;

    for (int i = 0; i < nbVehicules; i++)
    {
        vehicules[i]->afficher();
    }
}

// Destructeur
Agence::~Agence()
{
    delete[] vehicules;
}

