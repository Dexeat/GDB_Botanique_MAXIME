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
    int _engrais;
public:
    int pousse();
    int coupe();
    int arrose();
    void m_engrais();
    std::string info_p();
    void evolution();

    Plante(std::string nom);
    ~Plante();
};

#endif
