#import "stos.h"
#include <string>
#include <ostream>

int main (int argc, char *argv[]) {

    return 0;
}

void menu (Stos *stos) {
    string input;
    cout << "1. Włóż zdanie na stos." << endl << "2. Ściągnij zdanie ze stosu i wyświetl je w terminalu." << endl << "3. Sprawdź zdanie na szczycie stosu." << endl << "4. Sprawdź ile elementów znajduje się na stosie." << endl << "5. Zakończ działanie programu." << endl;

    while (true) {
        cout << "Wybierz jedną z powyższych operacji poprzez wpisanie odpowiadającej jej liczby: " << endl;
        getline(cin, input);

        if (input == "1") {
        
        }
        else if (input == "2") {

        }
        else if (input == "3") {

        }
        else if (input == "4") {

        }
        else if (input == "5") {
            break;
        }
        else {

        }
    }
}
