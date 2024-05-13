#include <cmath>
#include <iostream>

using namespace std;

class TPoint {
    float x;
    float y;

    public:
    TPoint(float x, float y);

    float getX();

    float getY();

    void display();

    float distance();

    float distance(TPoint point);

    void move(float dx, float dy);
};

TPoint::TPoint(float x, float y) {
    this->x = x;
    this->y = y;
}

void TPoint::display() {
    cout << "(" << x << "," << y << ")" << endl;
}

float TPoint::distance() {
    return sqrt(x * x + y * y);
}

float TPoint::distance(TPoint point) {
    float xDiff = point.getX() - x;
    float yDiff = point.getY() - y;
    return sqrt(xDiff * xDiff + yDiff * yDiff);
}

float TPoint::getX() {
    return x;
}

float TPoint::getY() {
    return y;
}

void TPoint::move(float dx, float dy) {
    x = x + dx;
    y = y + dy;
}

int main (int argc, char *argv[]) {
    TPoint point(1, 2);
    TPoint point2(4, 6);

    cout << "Współrzędne punktu 1: ";
    point.display();

    cout << "Dystans między punktem 1, a początkiem układu współrzędnych: " << point.distance() << endl;
    cout << "Dystans między punktem 1 a punktem 2: " << point.distance(point2) << endl;

    point.move(1, 1);
    cout << "Współrzędne punktu 1 po przesunięciu: ";
    point.display();

    return 0;
}
