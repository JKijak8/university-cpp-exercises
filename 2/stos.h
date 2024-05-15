#include <string>
#include <iostream>

using namespace std;

class Stos {
    string *_tablica;
    int _rozmiar;
    int _ile = 0;
public:
    Stos();
    Stos(int rozmiar);
    Stos(Stos &stos);
    ~Stos();

    void wloz(string napis);
    string sciagnij();
    string sprawdz();
    int zapelnienie();
};
