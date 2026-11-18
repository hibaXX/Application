// Application.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"Date.h"
#include"Client.h"
#include "Employe.h"
#include"Vehicule.h"
#include"Voiture.h"
#include"Moto.h"
#include"Camion.h"

int main()
{
    Date d(26, 3, 2006);

    cout << "<<Tester si l'annee est bissextile :>>" << endl;
    if (d.estbissextile(2006))
        cout << "* Annee est bissextile" << endl;
    else
        cout << "* Annee est non bissextile" << endl;

    cout << "<<Tester si l'annee est valide>>" << endl;
    if (d.valider(26,3,2006))
        cout << "* Annee est valide" << endl;
    else
        cout << "* Annee est non valide" << endl;

    cout << "<<Affichage>>" << endl;
    d.afficher();

    cout << "<<--------------------------------->>" << endl;

    Personne P("Erdalane", "Hiba", "M5656", "0687049014");
    P.afficher();

    cout << "<<--------------------------------->>" << endl;

    Client C(1, "HIBA@gmail.ma", "Anassi", "Erdalane", "Hiba", "M5654", "0687049014");
    C.afficher();
    cout << "<<-------------------------------------->>" << endl;
    C.modifier("ardalanehiba@gmail.ma");
    C.afficher();

    cout << "<<-------------------------------------->>" << endl;
    Employe E("chef", 20000, "ERDALANE" , "Hiba", "M6986", "0687049014");
    E.afficher();
    E.calculerprime(10);

    cout << "<<-------------------------------------->>" << endl;

    Vehicule VE(1, "BMW", "2026", 40000, true);
    VE.calculerprix(20);
    VE.afficher();
    cout << "<<-------------------------------------->>" << endl;
    VE.modifier(2000);
    VE.afficher();
    cout << "<<-------------------------------------->>" << endl;

    Voiture VO(4, "Gazoil", 1, "BMW", "2026", 40000, true);
    VO.afficher();

    cout << "<<-------------------------------------->>" << endl;
    Moto M("hhh", "kawazaki", 1, "bmw", "2020", 20000, true);
    M.calculerprix(20);
    M.afficher();

    cout << "<<-------------------------------------->>" << endl;
    Camion Ca(100, 4, 1, "bmw", "2020", 20000, true);
    Ca.calculerprix(40);
    Ca.afficher();
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
