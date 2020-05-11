#ifndef PLANTE_H
#define PLANTE_H

#include <string>
#include <iostream>

class Plante
{
private:
    int _grow;
    int _coupe;
    int _water;
    std::string _nom;
public:
    int pousse();
    int coupe();
    int arrose();
    int info();

    Plante(/* args */);
    ~Plante();
};

#endif
