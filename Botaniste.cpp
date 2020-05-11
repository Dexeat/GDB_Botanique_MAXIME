#include "Botaniste.h"

void Botaniste::ajoutplante(Plante plante){
    _inventaire.push_back(plante);
}

void Botaniste::consulterinventaire(){
    for (size_t i = 0; i < _inventaire.size(); i++)
    {
        std::cout << _inventaire[i].info_p() << std::endl;
    }
    std::cout << "Votre argent s'eleve a: $" << std::to_string(_argent) << std::endl;
    std::cout << "Vous avez " << std::to_string(_nb_engrais) << " engrai(s)" << std::endl;
}

void Botaniste::achatengrais(){
    if(_argent >= 50){
        _argent -= 50;
        _nb_engrais ++;
        std::cout << "Vous avez achetez un sac d'engrais" << std::endl;
    }
    else
    {
        std::cout << "Vous n'avez pas assez d'argent" << std::endl;
    }
    
}

void Botaniste::achatplante(Plante plante){
    if (_argent >= 100)
    {
        _argent -= 100;
        _inventaire.push_back(plante);
        std::cout << "Vous avez achetez une nouvelle plante" << std::endl;
    }
    
}

void Botaniste::arrose(){
    for (size_t i = 0; i < _inventaire.size(); i++)
    {
        _inventaire[i].arrose();
    }
    std::cout << "Vous avez arrosez toutes vos plantes" << std::endl;
}

void Botaniste::coupe()
{
    for (size_t i = 0; i < _inventaire.size(); i++)
    {
        _inventaire[i].coupe();
    }
    std::cout << "Vous avez taille toutes vos plantes" << std::endl;
}

void Botaniste::dormir(){
    for (size_t i = 0; i < _inventaire.size(); i++)
    {
        _inventaire[i].evolution();
    }
    std::cout << "Apres une nuit certaine plante ont pousse " << std::endl;
}

void Botaniste::mettreengrais(){
    for (size_t i = 0; i < _inventaire.size(); i++)
    {
        _inventaire[i].m_engrais();
    }
    std::cout << "Vous avez donne de l'engrais a toutes vos plantes" << std::endl;
}

void Botaniste::reventeplante(int nb_inv)
{
    _inventaire.erase(_inventaire.begin()+nb_inv-1);//efface le nb-1 //début tableau = 0
    if (_inventaire[nb_inv-1].getgrow() == 1)
    {
        _argent += 300;
    }
    else
    {
        _argent += 100;
    }
}

Botaniste::Botaniste(/* args */) : _argent(200), _nb_engrais(1)
{
}

Botaniste::~Botaniste()
{
}