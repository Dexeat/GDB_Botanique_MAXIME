#include "Botaniste.h"

void Botaniste::ajoutplante(Plante plante){
    _inventaire.push_back(plante);
}

void Botaniste::consulterinventaire(){
    for (size_t i = 0; i < _inventaire.size(); i++)
    {
        std::cout << _inventaire[i].info_p() << std::endl;
    }
    std::cout << "Votre argent s'élève a: $" << std::to_string(_argent) << std::endl;
    std::cout << "Vous avez " << std::to_string(_nb_engrais) << " engrai(s)" << std::endl;
}

Botaniste::Botaniste(/* args */):_argent(200),_nb_engrais(1)
{
}

Botaniste::~Botaniste()
{
}