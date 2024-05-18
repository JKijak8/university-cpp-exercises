#include <iostream>

using namespace std;

template<typename AnyType>
AnyType minArray(AnyType *array, int length);

int main (int argc, char *argv[]) {
    int arr1[] = {2, 1, 8, 5};
    float arr2[] = {2.4, -1.5, 18, -300};

    int len1 = sizeof(arr1) / sizeof(int);
    int len2 = sizeof(arr2) / sizeof(float);

    cout << minArray(arr1, len1) << endl;
    cout << minArray(arr2, len2) << endl;
    return 0;
}

template<typename AnyType>
AnyType minArray(AnyType *array, int length) {
    AnyType min = array[0];

    for (int i = 1; i < length; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}
