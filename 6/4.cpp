#include <iostream>

using namespace std;

class Figura {
public:
    virtual double pole();
};

class Kwadrat:public Figura {
    double _bok;

public:
    Kwadrat(double bok);

    double pole();
};

class Prostokat:public Figura {
    double _bok1;
    double _bok2;

public:
    Prostokat(double bok1, double bok2);

    double pole();
};

class Trojkat:public Figura {
    double _podstawa;
    double _wysokosc;

public:
    Trojkat(double podstawa, double wysokosc);

    double pole();
};

double Figura::pole() {
    return 0;
};

Kwadrat::Kwadrat(double bok) {
    _bok = bok;
}

double Kwadrat::pole() {
    return _bok * _bok;
}

Prostokat::Prostokat(double bok1, double bok2) {
    _bok1 = bok1;
    _bok2 = bok2;
}

double Prostokat::pole() {
    return _bok1 * _bok2;
}

Trojkat::Trojkat(double podstawa, double wysokosc) {
    _podstawa = podstawa;
    _wysokosc = wysokosc;
}

double Trojkat::pole() {
    return _podstawa * _wysokosc / 2;
}

int main (int argc, char *argv[]) {
    Figura *tablica[] = {new Kwadrat(2), new Prostokat(2, 3), new Trojkat(2, 4)};

    double sum;
    int length = sizeof(tablica) / sizeof(Figura *);
    for (int i = 0; i < length; i++) {
        sum += tablica[i]->pole();
    }
    cout << sum;
    return 0;
}
