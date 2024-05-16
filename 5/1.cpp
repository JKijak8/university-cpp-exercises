#include <string>
#include <iostream>

using namespace std;

class Zwierze {
public:
    string gatunek;
    string nazwa;
};

class Zmija:public Zwierze {
public:
    float dlugosc;

    Zmija(float dlugosc);
};

class Rys:public Zwierze {
public:
    float dlugosc;
    float wysokosc;

    Rys(float dlugosc, float wysokosc);
};

class Orzel:public Zwierze {
public:
    float dlugosc;
    float rozpietosc_skrzydel;

    Orzel(float dlugosc, float rozpietosc_skrzydel);
};

Zmija::Zmija(float dlugosc) {
    this->gatunek = "Żmija";
    this->dlugosc = dlugosc;
}

Rys::Rys(float dlugosc, float wysokosc) {
    this->gatunek = "Ryś";
    this->dlugosc = dlugosc;
    this->wysokosc = wysokosc;
};

Orzel::Orzel(float dlugosc, float rozpietosc_skrzydel) {
    this->gatunek = "Orzeł";
    this->dlugosc = dlugosc;
    this->rozpietosc_skrzydel = rozpietosc_skrzydel;
}

int main (int argc, char *argv[]) {
    Zmija zmija(30);
    Rys rys(50, 40);
    Orzel orzel(83, 120);

    cout << "Żmija:" << endl << "Gatunek: " << zmija.gatunek << endl << "Długość: " << zmija.dlugosc << endl << endl;
    cout << "Ryś:" << endl << "Gatunek: " << rys.gatunek << endl << "Długość: " << rys.dlugosc << endl << "Wysokość: " << rys.wysokosc << endl << endl;
    cout << "Orzeł: " << endl << "Gatunek: " << orzel.gatunek << endl << "Długość: " << orzel.dlugosc << endl << "Rozpiętość skrzydeł: " << orzel.rozpietosc_skrzydel << endl << endl;
    return 0;
}
