#include <cmath>

using namespace std;
class Liczba {
public:
    double re;

    virtual double modul();
    bool wieksza(Liczba liczba);
};

class Zespolone:public Liczba {
public:
    int im;

    double modul();
};

double Liczba::modul() {
    double modul = re;
    if(re < 0) {
        modul *= -1;
    }
    return modul;
}

bool Liczba::wieksza(Liczba liczba) {
    if (re > liczba.re) {
        return true;
    }
    return false;
}

double Zespolone::modul() {
    return sqrt((re * re) + (im * im));
}
