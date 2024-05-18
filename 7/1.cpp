#include <iostream>

using namespace std;

template <typename AnyType>
AnyType function(AnyType a, AnyType b, AnyType c);
template <> int function<int>(int a, int b, int c);
template <> float function<float>(float a, float b, float c);

int main (int argc, char *argv[]) {
    cout << function(2.3, 3.2, 4.5);
    return 0;
}

template <typename AnyType>
AnyType function(AnyType a, AnyType b, AnyType c) {
    return a - b + c;
}

template <> int function<int>(int a, int b, int c) {
    return a - b + c;
}

template <> float function<float>(float a, float b, float c) {
    return a - b + c;
}
