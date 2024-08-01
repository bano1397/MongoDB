#include <iostream>
using namespace std;

string GetChoice(){
    string shape;
    cout << "Enter the shape (Square, Rectangle, Circle): ";
    cin >> shape;
    return shape;
}

void CalculateArea(string shape){
    if(shape=="Square"){
        double Radius;
        cout << "Radius of square is ";
        cin >> Radius;
        double Area = Radius * Radius; 
        cout << "Area of square is " << Area << endl;
    }
    else if(shape=="Rectangle"){
        double Length;
        double Width;
        cout << "Length of Rectangle is ";
        cin >> Length;
        cout << "Width of Rectangle is ";
        cin >> Width;
        double Area = Length * Width; 
        cout << "Area of Rectangle is " << Area << endl;
    }
    else if(shape=="Circle"){
        double Radius;
        cout << "Radius of Circle is ";
        cin >> Radius;
        double Area = 3.14 * Radius * Radius; 
        cout << "Area of Circle is " << Area << endl;
    }
}

int main(int argc, char** argv) {
    string shape = GetChoice();
    CalculateArea(shape);
    return 0;
}


