#include "date.h"

Date::Date() {
    _dzien = 0;
    _miesiac = 0;
    _rok = 0;
}

Date::Date(int dzien, int miesiac, int rok) {
    _dzien = dzien;
    _miesiac = miesiac;
    _rok = rok;
}

Date& Date::operator++() {
    if (_dzien == 31 && (_miesiac == 1 || _miesiac == 3 || _miesiac == 5 || _miesiac == 7 || _miesiac == 8 || _miesiac == 10)) {
        _dzien = 1;
        _miesiac++;
    }
    else if (_dzien == 30 && (_miesiac == 4 || _miesiac == 6 || _miesiac == 9 || _miesiac == 11)) {
        _dzien = 1;
        _miesiac++;
    }
    else if (_dzien == 31 && _miesiac == 12) {
        _dzien = 1;
        _miesiac = 1;
        _rok++;
    }
    else if (_dzien == 28 && _miesiac == 2) {
        _dzien = 1;
        _miesiac++;
    }
    else {
        _dzien++;
    }
    return *this;
}

bool Date::operator<(Date data) {
    if (_rok > data._rok) {
        return false;
    }
    else if (_rok < data._rok) {
        return true;
    }
    else if (_miesiac > data._miesiac) {
        return false;
    }
    else if (_miesiac < data._miesiac) {
        return true;
    }
    else if (_dzien > data._dzien) {
        return false;
    }
    else if (_dzien < data._dzien) {
        return true;
    }
    return false;
}

ostream& operator<<(ostream& os, Date& data) {
    os << data._dzien << "." << data._miesiac << "." << data._rok;
    return os;
}

istream& operator>>(istream& is, Date& data) {
    is >> data._dzien >> data._miesiac >> data._rok;
    return is;
}
