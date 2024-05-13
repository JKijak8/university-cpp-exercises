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
    TComplex substract(TComplex number);
    TComplex multiply(TComplex number);
    TComplex divide(TComplex number);
    TComplex ConjComplex();
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

TComplex TComplex::sum(TComplex number) {
    float Re = this->Re + number.getRe();
    float Im = this->Im + number.getIm();
    TComplex result(Re, Im);

    return result;
}

TComplex TComplex::substract(TComplex number) {
    float Re = this->Re - number.getRe();
    float Im = this->Im - number.getIm();
    TComplex result(Re, Im);

    return result;
}

TComplex TComplex::multiply(TComplex number) {
    float Re = this->Re * number.getRe() - this->Im * number.getIm();
    float Im = this->Re * number.getIm() + this->Im * number.getRe();
    TComplex result(Re, Im);

    return result;
}

TComplex TComplex::divide(TComplex number) {
    TComplex numSquared = number.multiply(number.ConjComplex());

    float Re = ( this->Re * number.getRe() + this->Im * number.getIm() ) / (numSquared.getRe() + numSquared.getIm());
    float Im = (this->Im * number.getRe() - this->Re * number.getIm()) / (numSquared.getRe() + numSquared.getIm());
    TComplex result(Re, Im);

    return result;
}

TComplex TComplex::ConjComplex() {
    TComplex result(this->Re, -this->Im);
    return result;
}

float TComplex::AbsComplex() {
    return sqrt(this->Re * this->Re + this->Im * this->Im);
}

float TComplex::ArgComplexRad() {
    if (this->Re > 0) {
        return atan( this->Im / this->Re );
    }
    else if (this->Re < 0) {
        return atan( this->Im / this->Re ) + M_PI;
    }

    if (this->Im > 0) {
        return M_PI * 0.5;
    }
    else if (this->Im < 0) {
        return -M_PI * 0.5;
    }

    return 0;
}

float TComplex::ArgComplexDeg() {
    return 57.3 * this->ArgComplexRad();
}
