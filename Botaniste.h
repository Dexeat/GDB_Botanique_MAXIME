#ifndef BOTANISTE_H
#define BOTANISTE_H

#include <string>
#include <iostream>
#include <vector>
#include "Plante.h"

class Botaniste
{
private:
    int _argent;
    int _nb_engrais;
    std::vector<Plante> _inventaire;
public:
    void ajoutplante(Plante);// add plante de base
    void consulterinventaire();
    int achatengrais();
    int achatplante(Plante);
    int reventeplante();
    int dormir();

    Botaniste(/* args */);
    ~Botaniste();
};

#endif