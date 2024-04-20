#include <iostream>

using namespace std;

struct TComplex

{
    float Re;
    float Im;
};

TComplex suma(TComplex z1, TComplex z2);
TComplex iloczyn(TComplex z1, TComplex z2);
void drukuj(TComplex lzesp);

int main(){
    struct TComplex z1 = {
        2,
        4
    };
    struct TComplex z2 = {
        6,
        -8
    };

    struct TComplex z3 = suma(z1, z2); 
    struct TComplex z4 = iloczyn(z1, z2);
    drukuj(z3);
    drukuj(z4);
    return 0;
}

TComplex suma(TComplex z1, TComplex z2) {
    z1.Re += z2.Re;
    z1.Im += z2.Im;
    return z1;
}

TComplex iloczyn(TComplex z1, TComplex z2) {
    TComplex wynik;
    wynik.Re = ((z1.Re * z2.Re) - (z1.Im * z2.Im)); 
    wynik.Im = ((z1.Re * z2.Im) + (z1.Im * z2.Re));
    return wynik;
}

void drukuj(TComplex lzesp) {
    if(lzesp.Im >= 0) {
        cout << lzesp.Re << "+" << lzesp.Im << "j" << endl;
    }
    else {
        cout << lzesp.Re << lzesp.Im << "j" << endl;
    }
}
