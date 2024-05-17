#include<iostream>
#include<string>
using namespace std;
class Student{
public:
string *imie;
string *nazwisko;
string *miasto;
Student();

Student(string im, string nzw, string mst);

Student(Student &student);
Student operator=(Student student);

};
Student::Student()
{
string im = "";
string nzw = "";
string mst = "";
}
Student::Student(string im, string nzw, string mst)
{
imie = new string; 
nazwisko = new string;
miasto = new string;
*imie = im; *nazwisko = nzw;
*miasto = mst;
}

Student::Student(Student &student) {
    imie = new string;
    nazwisko = new string;
    miasto = new string;
    *imie = *student.imie;
    *nazwisko = *student.nazwisko;
    *miasto = *student.miasto;
}

int main(){
Student ktos("Jan", "Kowalski", "Krosno");
Student inny = ktos;
*inny.miasto = "Rzeszow";
cout << *ktos.miasto << ", " << *inny.miasto << endl;
return 0;
}
