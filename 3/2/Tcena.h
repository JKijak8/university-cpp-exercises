#include <iostream>

using namespace std;

class Tcena {
    float _netto;
    float _vat;

public:
    Tcena(float cena, float vat);
    Tcena(float cena);
    Tcena();

    float getBrutto();
    float getNetto();
    float getVAT();
    void setNetto(float netto);
    void setVAT(float vat);
    void przecena(float procent);

    friend ostream& operator<<(ostream& os, Tcena& cena);
};
