#include <iostream>
#include <cmath>

using namespace std;

class TComplex {
    float Re;
    float Im;

    public:
    TComplex();
    TComplex(float Re);
    TComplex(float Re, float Im);

    void display();
    float getRe();
    float getIm();
    TComplex sum(TComplex number);
    TComplex ConjComplex();
    TComplex operator+(TComplex complex);
    TComplex operator-(TComplex complex);
    TComplex operator*(TComplex complex);
    TComplex operator/(TComplex complex);
    float AbsComplex();
    float ArgComplexRad();
    float ArgComplexDeg();
};

TComplex::TComplex() {
    Re = 0;
    Im = 0;
}

TComplex::TComplex(float Re) {
    this->Re = Re;
    Im = 0;
}

TComplex::TComplex(float Re, float Im) {
    this->Re = Re;
    this->Im = Im;
}

void TComplex::display() {
    if (Im < 0) {
        cout << Re << Im << "j" << endl;
        return; 
    }
    cout << Re << "+" << Im << "j" << endl;
}

float TComplex::getRe() {
    return Re;
}

float TComplex::getIm() {
    return Im;
}

TComplex TComplex::operator+(TComplex complex) {
    float Re = this->Re + complex.getRe();
    float Im = this->Im + complex.getIm();
    TComplex result(Re, Im);

    return result;
}

TComplex TComplex::operator-(TComplex complex) {
    float Re = this->Re - complex.getRe();
    float Im = this->Im - complex.getIm();
    TComplex result(Re, Im);

    return result;
}

TComplex TComplex::operator*(TComplex complex) {
    float Re = this->Re * complex.getRe() - this->Im * complex.getIm();
    float Im = this->Re * complex.getIm() + this->Im * complex.getRe();
    TComplex result(Re, Im);

    return result;
}

TComplex TComplex::operator/(TComplex complex) {
    TComplex numSquared = complex * complex.ConjComplex();

    float Re = ( this->Re * complex.getRe() + this->Im * complex.getIm() ) / (numSquared.getRe() + numSquared.getIm());
    float Im = (this->Im * complex.getRe() - this->Re * complex.getIm()) / (numSquared.getRe() + numSquared.getIm());
    TComplex result(Re, Im);

    return result;
}

TComplex TComplex::ConjComplex() {
    TComplex result(Re, -Im);
    return result;
}

float TComplex::AbsComplex() {
    return sqrt(Re * Re + Im * Im);
}

float TComplex::ArgComplexRad() {
    if (Re > 0) {
        return atan( Im / Re );
    }
    else if (Re < 0) {
        return atan( Im / Re ) + M_PI;
    }

    if (Im > 0) {
        return M_PI * 0.5;
    }
    else if (Im < 0) {
        return -M_PI * 0.5;
    }

    return 0;
}

float TComplex::ArgComplexDeg() {
    return 57.3 * ArgComplexRad();
}

int main (int argc, char *argv[]) {
    TComplex liczba(2, 4);
    TComplex liczba2(6, -8);
    TComplex liczba3 = liczba / liczba2;
    liczba3.display();
    return 0;
}
