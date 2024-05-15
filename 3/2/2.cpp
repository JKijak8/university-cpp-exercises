#include "Tcena.h"
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>

void clearScreen();
void menu(Tcena *cena);

int main (int argc, char *argv[]) {
    Tcena *cena = new Tcena(256, 15);
    menu(cena);
    delete cena;
    return 0;
}

void menu(Tcena *cena) {
    string input;

    while (true) {
        cout << "1. Wyświetl cenę brutto" << endl << "2. Wyświetl cenę netto" << endl << "3. Wyświetl VAT" << endl << "4. Zmień cenę netto" << endl << "5. Zmień VAT" << endl << "6. Przeceń produkt" << endl << "7. Zakończ działanie programu." << endl;

        cout << "Wybierz jedną z powyższych opcji i wpisz odpowiadającą jej liczbę: " << endl;
        getline(cin, input);

        if(input == "1"){
            clearScreen();
            cout << "Cena brutto wynosi " << *cena << endl << endl;
        }
        else if (input == "2") {
            clearScreen();
            cout << "Cena netto wynosi " << cena->getNetto() << " PLN" << endl << endl;
        }
        else if (input == "3") {
            clearScreen();
            cout << "VAT wynosi " << cena->getVAT() << "%" << endl << endl;
        }
        else if (input == "4") {
            clearScreen();
            float nowaCena;
            cout << "Wpisz nową cenę netto: " << endl;
            cin >> nowaCena;
            cout << endl;
            cena->setNetto(nowaCena);
            getline(cin, input);
        }
        else if (input == "5") {
            clearScreen();
            float nowyVAT;
            cout << "Wpisz nowy VAT: " << endl;
            cin >> nowyVAT;
            cout << endl;
            cena->setVAT(nowyVAT);
            getline(cin, input);
        }
        else if (input == "6") {
            clearScreen();
            float przecena;
            cout << "Wpisz o ile procent ma zostać przeceniony produkt: " << endl;
            cin >> przecena;
            cout << endl;
            cena->przecena(przecena);
            getline(cin, input);
        }
        else if (input == "7") {
            break;
        }
        else {
            clearScreen();
            cout << "Niepoprawna opcja. Spróbuj jeszcze raz." << endl << endl;
        }
    }
}

void clearScreen() {
    #ifdef _WIN32
        system("cls");
    #elif _WIN64
        system("cls");
    #elif __linux__
        system("clear");
    #endif
}
