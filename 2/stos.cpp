#include "stos.h"

Stos::Stos() {
    _rozmiar = 1;
    _tablica = new string[_rozmiar];
}

Stos::Stos(int rozmiar) {
    _rozmiar = rozmiar;
    _tablica = new string[_rozmiar];
}

Stos::Stos(Stos &stos) {
    _rozmiar = stos._rozmiar;
    _tablica = stos._tablica;
}

Stos::~Stos() {
    delete _tablica;
}

void Stos::wloz(string napis) {
    if (_ile < _rozmiar) {
        _tablica[_ile] = napis;
        _ile++;
    }
    else {
        cout << "Stos jest pełny, nie można dodać kolejnego elementu." << endl;
    }
}

string Stos::sciagnij() {
    if (_ile > 0) {
        string ostatniElement = _tablica[_ile];
        _tablica[_ile] = "";
        _ile--;
        return ostatniElement;
    }
    return "Stos jest pusty.";
}

string Stos::sprawdz() {
    if(_ile > 0) {
        return _tablica[_ile];
    }
    return "Stos jest pusty";
}

int Stos::zapelnienie() {
    return _ile;
}
