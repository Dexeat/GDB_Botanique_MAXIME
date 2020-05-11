#include "Plante.h"

using namespace std;

int Plante::pousse(){
    _grow ++;
    return _grow;
}

int Plante::coupe(){
    _coupe ++;
    return _coupe;
}

int Plante::arrose(){
    _water ++;
    return _water;
}

int Plante::info(){
    cout << "Votre Plante" << _nom << "a poussé pendant " << _grow << "jour(s), a été arrosée " << _water << " fois et a été coupée " << _coupe << " fois";
    return 0;
}

Plante::Plante(/* args */)
{
}

Plante::~Plante()
{
}