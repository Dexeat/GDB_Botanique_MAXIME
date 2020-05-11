#ifndef FLEUR_H
#define FLEUR_H

#include "Plante.h"

class Fleur : public Plante
{
private:
    bool _fleuri;
public:
    void evolutionf();

    Fleur(/* args */);
    ~Fleur();
};



#endif