#ifndef BOTANISTE_H
#define BOTANISTE_H

#include <string>
#include <iostream>
#include <vector>
#include "Plante.h"
//#include "Fleur.h"

class Botaniste
{
private:
    int _argent;
    int _nb_engrais;
    std::vector<Plante> _inventaire;
    //std::vector<Fleur> _inventairef;
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
    //void ajoutfleur(Fleur);

    Botaniste(/* args */);
    ~Botaniste();
};

#endif