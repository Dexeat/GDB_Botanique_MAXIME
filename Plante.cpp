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

int Plante::m_engrais(){
    _engrais ++;
}

string Plante::info_p()
{
    string str1 = "Votre Plante " + _nom + u8"a poussé pendant " + std::to_string(_grow) + u8" jour(s), a été arrosée " + std::to_string(_water) + u8" fois et a été coupée " + std::to_string(_coupe) + " fois";
    return str1;
}


int Plante::evolution(){
    if (_coupe < 2 && _water < 2)
    {
        if(_engrais > 0){
            pousse();
        }
    }
    
}


Plante::Plante(std::string nom) : _nom(nom), _grow(0), _coupe(0), _water(0)
{
}

Plante::~Plante()
{
}