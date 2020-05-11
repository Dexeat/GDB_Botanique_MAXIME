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
    void achatengrais();
    void achatplante(Plante);
    void reventeplante(int nb_inv);
    void dormir();
    void arrose();
    void coupe();
    void mettreengrais();

    Botaniste(/* args */);
    ~Botaniste();
};

#endif