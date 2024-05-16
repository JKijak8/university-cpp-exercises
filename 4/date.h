#include <iostream>

using namespace std;

class Date {
    int _dzien;
    int _miesiac;
    int _rok;

public:
    Date();
    Date(int dzien, int miesiac, int rok);

    Date& operator++();
    bool operator<(Date data);
    friend ostream& operator<<(ostream& os, Date& data);
    friend istream& operator>>(istream& is, Date& data);
};
