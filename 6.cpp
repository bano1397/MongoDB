#include <iostream>
using namespace std;

class Distance 
{
private:
    int feet;
    float inches;
public:
    void set(int ft, float in) 
	{
        feet = ft;
        inches = in;
    }

    void display() 
	{
        cout << "Distance: " << feet << " feet " << inches << " inches" << endl;
    }

    Distance add(Distance d) {
        Distance temp;
        temp.feet = feet + d.feet;
        temp.inches = inches + d.inches;
        if (temp.inches >= 12.0) {
            temp.inches -= 12.0;
            temp.feet++;
        }
        return temp;
    }
};

int main() 
{
    Distance d1, d2, d3;
    d1.set(6, 8.2);
    d2.set(4, 10.5);
    d3 = d1.add(d2);

    cout << "Distance 1: ";
    d1.display();
    cout << "Distance 2: ";
    d2.display();
    cout << "Sum: ";
    d3.display();

    return 0;
}

