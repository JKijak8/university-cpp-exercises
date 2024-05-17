#include <iostream>

using namespace std;

class Bazowa {
public:
    void typ_wskaznika() {
        cout << "Bazowa" << endl;
    }
    virtual void typ_obiektu() {
        cout << "Bazowa" << endl;
    }
};


class Pochodna1:public Bazowa {
public:
    void typ_wskaznika() {
        cout << "Pochodna1" << endl;
    }
    void typ_obiektu() {
        cout << "Pochodna1" << endl;
    }
};

class Pochodna2:public Bazowa {
public:
    void typ_wskaznika() {
        cout << "Pochodna2" << endl;
    }
    void typ_obiektu() {
        cout << "Pochodna2" << endl;
    }
};

int main (int argc, char *argv[]) {
    Bazowa *bazowa1 = new Pochodna1;
    Pochodna1 *pochodna1 = new Pochodna1;

    Bazowa *bazowa2 = new Pochodna2;
    Pochodna2 *pochodna2 = new Pochodna2;

    Bazowa *bazowa3 = new Bazowa;

    bazowa1->typ_wskaznika();
    bazowa1->typ_obiektu();

    pochodna1->typ_wskaznika();
    pochodna1->typ_obiektu();

    bazowa2->typ_wskaznika();
    bazowa2->typ_obiektu();

    pochodna2->typ_wskaznika();
    pochodna2->typ_obiektu();

    bazowa3->typ_wskaznika();
    bazowa3->typ_obiektu();
    return 0;
}
