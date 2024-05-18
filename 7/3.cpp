#include <iostream>
#include <string>

using namespace std;

template<typename AnyType>
void wypisz(AnyType *zmienna);

int main (int argc, char *argv[]) {
    int liczba = 32;
    int *wskaznik = &liczba;
    string napis = "napis";
    string *wskaznik2 = &napis;
    wypisz(wskaznik);
    wypisz(wskaznik2);
    return 0;
}

template<typename AnyType>
void wypisz(AnyType *zmienna) {
    cout << *zmienna << endl;
}
