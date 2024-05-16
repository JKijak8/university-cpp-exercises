#include <iostream>
#include <string>

using namespace std;

class Figura {
protected:
    float _pole;
    float _obwod;
    string _rodzaj;

public:
    Figura(float pole, float obwod, string rodzaj);

    float getPole();
    float getObwod();
    string getRodzaj();
};

class Kwadrat:public Figura {
    float _bok;

public:
    Kwadrat(float bok);

    float getBok();
};

class Prostokat:public Figura {
    float _bok1;
    float _bok2;

public:
    Prostokat(float bok1, float bok2);

    float getBok1();
    float getBok2();
};

class Trojkat:public Figura {
    float _podstawa;
    float _wysokosc;
    float _ramie1;
    float _ramie2;

public:
    Trojkat(float podstawa, float wysokosc, float ramie1, float ramie2);

    float getPodstawa();
    float getWysokosc();
    float getRamie1();
    float getRamie2();
};

Figura::Figura(float pole, float obwod, string rodzaj) {
    _pole = pole;
    _obwod = obwod;
    _rodzaj = rodzaj;
}

float Figura::getPole() {
    return _pole;
}

float Figura::getObwod() {
    return _obwod;
}

string Figura::getRodzaj() {
    return _rodzaj;
}

Kwadrat::Kwadrat(float bok):Figura((bok * bok), (4 * bok), "Kwadrat") {
    _bok = bok;
}

float Kwadrat::getBok() {
    return _bok;
}

Prostokat::Prostokat(float bok1, float bok2):Figura((bok1 * bok2), (2 * bok1 + 2 * bok2), "Prostokąt") {
    _bok1 = bok1;
    _bok2 = bok2;
}

float Prostokat::getBok1() {
    return _bok1;
}

float Prostokat::getBok2() {
    return _bok2;
}

Trojkat::Trojkat(float podstawa, float wysokosc, float ramie1, float ramie2):Figura((podstawa * wysokosc / 2), (podstawa + ramie1 + ramie2), "Trójkąt") {
    _podstawa = podstawa;
    _wysokosc = wysokosc;
    _ramie1 = ramie1;
    _ramie2 = ramie2;
}

float Trojkat::getPodstawa() {
    return _podstawa;
}

float Trojkat::getWysokosc() {
    return _wysokosc;
}

float Trojkat::getRamie1() {
    return _ramie1;
}

float Trojkat::getRamie2() {
    return _ramie2;
}

int main (int argc, char *argv[]) {
    Kwadrat kwadrat(6);
    Prostokat prostokat(2, 3);
    Trojkat trojkat(6, 2, 3, 2);

    cout << kwadrat.getRodzaj() << ": " << endl << "Bok: " << kwadrat.getBok() << endl << "Obwód: " << kwadrat.getObwod() << endl << "Pole: " << kwadrat.getPole() << endl << endl;
    cout << prostokat.getRodzaj() << ": " << endl << "Bok 1: " << prostokat.getBok1() << endl << "Bok 2: " << prostokat.getBok2() << endl << "Obwód: " << prostokat.getObwod() << endl << "Pole: " << prostokat.getPole() << endl << endl;
    cout << trojkat.getRodzaj() << ": " << endl << "Podstawa: " << trojkat.getPodstawa() << endl << "Wysokość: " << trojkat.getWysokosc() << endl << "Ramię 1: " << trojkat.getRamie1() << endl << "Ramię 2: " << trojkat.getRamie2() << endl << "Obwód: " << trojkat.getObwod() << endl << "Pole: " << trojkat.getPole() << endl << endl;
    return 0;
}
