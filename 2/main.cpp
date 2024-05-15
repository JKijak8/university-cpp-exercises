#include "stos.h"
#include <cstdlib>
#include <string>
#include <ostream>

void menu (Stos *stos);
void wlozZdanie(Stos *stos);
void wyczyscEkran();

int main (int argc, char *argv[]) {
    Stos *stos = new Stos(5);
    menu(stos);
    delete stos;
    return 0;
}

void menu (Stos *stos) {
    string input;

    while (true) {
        cout << "1. Włóż zdanie na stos." << endl << "2. Ściągnij zdanie ze stosu i wyświetl je w terminalu." << endl << "3. Sprawdź zdanie na szczycie stosu." << endl << "4. Sprawdź ile elementów znajduje się na stosie." << endl << "5. Zakończ działanie programu." << endl;
        cout << "Wybierz jedną z powyższych operacji poprzez wpisanie odpowiadającej jej liczby: " << endl;
        getline(cin, input);

        if (input == "1") {
            wyczyscEkran();
            wlozZdanie(stos);
            cout << endl;
        }
        else if (input == "2") {
            wyczyscEkran();
            cout << stos->sciagnij() << endl << endl;
        }
        else if (input == "3") {
            wyczyscEkran();
            cout << stos->sprawdz() << endl << endl;
        }
        else if (input == "4") {
            wyczyscEkran();
            cout << "Ilość elementów na stosie: " << stos->zapelnienie() << endl << endl;
        }
        else if (input == "5") {
            break;
        }
        else {
            wyczyscEkran();
            cout << "Niepoprawna opcja, spróbuj jeszcze raz." << endl << endl;
        }
    }
}

void wlozZdanie(Stos *stos) {
    string input;

    cout << "Wprowadź zdanie które ma zostać włożone na szczyt stosu:" << endl;
    getline(cin, input);

    stos->wloz(input);
}

void wyczyscEkran() {
    #ifdef _WIN32
        system("cls");
    #elif _WIN64
        system("cls");
    #elif __linux__
        system("clear");
    #endif
}
