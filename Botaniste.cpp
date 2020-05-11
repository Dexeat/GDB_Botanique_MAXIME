#include "Botaniste.h"

void Botaniste::ajoutplante(Plante plante){
    _inventaire.push_back(plante);
}

void Botaniste::consulterinventaire(){
    for (size_t i = 0; i < _inventaire.size(); i++)
    {
        std::cout << _inventaire[i].info_p();
    }
    
}

Botaniste::Botaniste(/* args */)
{
}

Botaniste::~Botaniste()
{
}