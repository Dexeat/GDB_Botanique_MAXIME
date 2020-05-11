#ifndef BOTANISTE_H
#define BOTANISTE_H

#include <string>
#include <iostream>
#include <vector>
#include "Plante.cpp"

class Botaniste
{
private:
    int _argent;
    int _nb_engrais;
    std::vector<Plante> _inventaire;
public:
    int ajoutplante(Plante);// add plante de base
    int consulterinventaire();
    int achatengrais();
    int achatplante(Plante);
    int reventeplante();
    int dormir();

    Botaniste(/* args */);
    ~Botaniste();
};

#endif