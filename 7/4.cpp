#include <iostream>

using namespace std;

template <typename AnyType>
void przepisz(AnyType *tab1, AnyType *tab2, unsigned int n);

int main (int argc, char *argv[]) {
    int tab1[2][2] = {{1, 2}, {1, 2}};
    int tab2[2][2];
    przepisz(tab1, tab2, 2);

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << tab2[i][j] << ", ";
        }
        cout << endl;
    }
    return 0;
}

template <typename AnyType>
void przepisz(AnyType *tab1, AnyType *tab2, unsigned int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            tab2[i][j] = tab1[i][j];
        }
    }
}
