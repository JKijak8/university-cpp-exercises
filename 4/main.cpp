#include "date.h"
#include <iostream>

void wyswietlTydzien(Date data);

int main (int argc, char *argv[]) {
    Date data1;
    Date data2;

    cout << "Wpisz pierwszą datę w formacie DD MM RRRR: ";
    cin >> data1;
    cout << "Wpisz drugą datę w formacie DD MM RRRR: ";
    cin >> data2;
    cout << endl;

    if (data1 < data2) {
        wyswietlTydzien(data2);
    }
    else {
        wyswietlTydzien(data1);
    }
    return 0;
}

void wyswietlTydzien(Date data) {
    for (int i = 0; i < 7; i++) {
        cout << ++data << endl;
    }
}
