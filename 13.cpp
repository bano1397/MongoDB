#include <iostream>
using namespace std;

double calculateArea(double* side) {
    return (*side) * (*side);
}

double calculateArea(double* length, double* width) {
    return (*length) * (*width);
}

double calculateArea(int* radius) {
    return 3.14 * (*radius) * (*radius);
}

int main() {
    double side = 4;
    double length = 5;
    double width = 7;
    double radius = 8;

    cout << "Area of the square: " << calculateArea(&side) << endl;
    cout << "Area of the rectangle: " << calculateArea(&length, &width) << endl;
    cout << "Area of the circle: " << calculateArea(&radius) << endl;

    return 0;
}



