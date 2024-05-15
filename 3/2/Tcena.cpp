#include "Tcena.h"
#include <ostream>

Tcena::Tcena(float cena, float vat) {
    _netto = cena;
    _vat = vat / 100;
}

Tcena::Tcena(float cena) {
    _netto = cena;
    _vat = 0.23;
}

Tcena::Tcena() {
    _netto = 0;
    _vat = 0.23;
}

float Tcena::getBrutto() {
    return _netto + _netto * _vat;
}

float Tcena::getNetto() {
    return _netto;
}

float Tcena::getVAT() {
    return _vat * 100;
}

void Tcena::setNetto(float netto) {
    _netto = netto;
}

void Tcena::setVAT(float vat) {
    _vat = vat / 100;
}

void Tcena::przecena(float procent) {
    _netto = _netto - _netto * (procent / 100);
}

ostream& operator<<(ostream& os, Tcena& cena) {
    os << cena.getBrutto() << " PLN";
    return os;
}
