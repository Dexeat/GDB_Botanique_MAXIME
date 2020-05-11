#include <iostream>
#include <string>
#include <vector>
#include "Plante.cpp"
#include "Botaniste.cpp"

using namespace std;

int main()
{
    Plante *Jasmin = new Plante("Jasmin");
    Botaniste *Didier = new Botaniste();
    Didier->ajoutplante(*Jasmin);
    Didier->consulterinventaire();

    return 0;
}