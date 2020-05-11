#include <iostream>
#include <string>
#include <vector>
#include "Plante.cpp"
#include "Botaniste.cpp"

using namespace std;

int main()
{
    int choix;
    Plante *Jasmin = new Plante("Jasmin");
    Botaniste *Didier = new Botaniste();
    Didier->ajoutplante(*Jasmin);
    

    while (1)
    {
        cout << "Menu:" << endl
             << "1.Inventaire" << endl
             << "2.Dormir" << endl
             << "3.Arroser" << endl
             << "4.Tailler" << endl
             << "5.Acheter Engrais" << endl
             << "6.Acheter Plante" << endl
             << "7.Revendre Plante" << endl
             << "8.Mettre de l'engrais" << endl;
        cin >> choix;
        if (choix == 1)
        {
            Didier->consulterinventaire();
        }
        if (choix == 2)
        {
            Didier->dormir();
        }
        if (choix == 3)
        {
            Didier->arrose();
        }
        if (choix == 4)
        {
            Didier->coupe();
        }
        if (choix == 5)
        {
            Didier->achatengrais();      
        }
        if (choix == 6)
        {
            Didier->achatplante(*Jasmin);
        }
        if (choix == 7)
        {
            /* code */
        }
        if(choix == 8){
            Didier->mettreengrais();
        }
        
    }
    

    return 0;
}