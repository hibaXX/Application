#pragma once
#include "Vehicule.h"
class Moto :
    public Vehicule
{
    string cylindree;
    string typemoto;
public:
    Moto(string, string, int, string, string, double, bool);
    void afficher() const override;
    double calculerprix(int durree) override;
    ~Moto();
};

