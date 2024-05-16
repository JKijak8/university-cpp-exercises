#include <iostream>
#include <string>

using namespace std;

class Atrakcja {
protected:
    float _cena;
    string _nazwa;
    string _opis;
public:
    float getCena();
    string getNazwa();
    string getOpis();

    Atrakcja(float cena, string nazwa, string opis);
};

class Kolejka:public Atrakcja {
    int _godz_odjazdu;
    int _godz_przyjazdu;

public:
    Kolejka(float cena, string nazwa, string opis, int godz_odjazdu, int godz_przyjazdu);
    int getGodzPrzyjazdu();
    int getGodzOdjazdu();
    void inicjuj(float cena, string nazwa, string opis, int godz_odjazdu, int godz_przyjazdu);
};

class Zamek:public Atrakcja {
    int _czas_zwiedzania;

public:
    Zamek(float cena, string nazwa, string opis, int czas_zwiedzania);
    int getCzasZwiedzania();
    void inicjuj(float cena, string nazwa, string opis, int czas_zwiedzania);
};

class Film:public Atrakcja {
    int _czas_trwania;
    string _tytul;
public:
    Film(float cena, string nazwa, string opis, int czas_trwania, string tytul);
    int getCzasTrwania();
    string getTytul();
    void inicjuj(float cena, string nazwa, string opis, int czas_trwania, string tytul);
};

float Atrakcja::getCena() {
    return _cena;
}

string Atrakcja::getNazwa() {
    return _nazwa;
}

string Atrakcja::getOpis() {
    return _opis;
}

Atrakcja::Atrakcja(float cena, string nazwa, string opis) {
    _cena = cena;
    _nazwa = nazwa;
    _opis = opis;
}

Kolejka::Kolejka(float cena, string nazwa, string opis, int godz_odjazdu, int godz_przyjazdu):Atrakcja(cena, nazwa, opis) {
    _godz_odjazdu = godz_odjazdu;
    _godz_przyjazdu = godz_przyjazdu;
}

int Kolejka::getGodzOdjazdu() {
    return _godz_odjazdu;
}

int Kolejka::getGodzPrzyjazdu() {
    return _godz_przyjazdu;
}

void Kolejka::inicjuj(float cena, string nazwa, string opis, int godz_odjazdu, int godz_przyjazdu) {
    _cena = cena;
    _nazwa = nazwa;
    _opis = opis;
    _godz_odjazdu = godz_odjazdu;
    _godz_przyjazdu = godz_przyjazdu;
}

Zamek::Zamek(float cena, string nazwa, string opis, int czas_zwiedzania):Atrakcja(cena, nazwa, opis) {
    _czas_zwiedzania = czas_zwiedzania;
}

int Zamek::getCzasZwiedzania() {
    return _czas_zwiedzania;
}

void Zamek::inicjuj(float cena, string nazwa, string opis, int czas_zwiedzania) {
    _cena = cena;
    _nazwa = nazwa;
    _opis = opis;
    _czas_zwiedzania= czas_zwiedzania;
}

Film::Film(float cena, string nazwa, string opis, int czas_trwania, string tytul):Atrakcja(cena, nazwa, opis) {
    _czas_trwania = czas_trwania;
    _tytul = tytul;
}

int Film::getCzasTrwania() {
    return _czas_trwania;
}

string Film::getTytul() {
    return _tytul;
}

void Film::inicjuj(float cena, string nazwa, string opis, int czas_trwania, string tytul) {
    _cena = cena;
    _nazwa = nazwa;
    _opis = opis;
    _czas_trwania = czas_trwania;
    _tytul = tytul;
}

int main (int argc, char *argv[]) {
    Kolejka kolejka(20, "Kolejka", "opis", 13, 14);
    cout << "Kolejka: " << endl << "Cena: " << kolejka.getCena() << endl << "Nazwa: " << kolejka.getNazwa() << endl << "Opis: " << kolejka.getOpis() << endl << "Godz odjazdu: " << kolejka.getGodzOdjazdu() << endl << "Godz przyjazdu: " << kolejka.getGodzPrzyjazdu() << endl << endl;

    kolejka.inicjuj(30, "Kolejka2", "opis2", 15, 16);
    cout << "Kolejka(zmieniona): " << endl << "Cena: " << kolejka.getCena() << endl << "Nazwa: " << kolejka.getNazwa() << endl << "Opis: " << kolejka.getOpis() << endl << "Godz odjazdu: " << kolejka.getGodzOdjazdu() << endl << "Godz przyjazdu: " << kolejka.getGodzPrzyjazdu() << endl << endl;

    Zamek zamek(40, "Zamek", "opis", 2);
    cout << "Zamek: " << endl << "Cena: " << zamek.getCena() << endl << "Nazwa: " << zamek.getNazwa() << endl << "Opis: " << zamek.getOpis() << endl << "Czas zwiedzania: " << zamek.getCzasZwiedzania() << endl << endl;

    zamek.inicjuj(50, "Zamek2", "opis2", 5);
    cout << "Zamek(zmieniony): " << endl << "Cena: " << zamek.getCena() << endl << "Nazwa: " << zamek.getNazwa() << endl << "Opis: " << zamek.getOpis() << endl << "Czas zwiedzania: " << zamek.getCzasZwiedzania() << endl << endl;

    Film film(15, "Film", "opis", 2, "tytuł");
    cout << "Film: " << endl << "Cena: " << film.getCena() << endl << "Nazwa: " << film.getNazwa() << endl << "Opis: " << film.getOpis() << endl << "Czas trwania: " << film.getCzasTrwania() << endl << "Tytuł: " << film.getTytul() << endl << endl;

    film.inicjuj(21, "Film2", "opis", 1, "tytuł2");
    cout << "Film(zmieniony): " << endl << "Cena: " << film.getCena() << endl << "Nazwa: " << film.getNazwa() << endl << "Opis: " << film.getOpis() << endl << "Czas trwania: " << film.getCzasTrwania() << endl << "Tytuł: " << film.getTytul() << endl << endl;
    return 0;
}
