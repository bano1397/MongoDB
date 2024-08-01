#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;
    string cnic;

public:
	
    Person(string n, int a, string c)
	{
		name=n;
		age=a;
		cnic=c;
	}

    // Member function to print data members
    void Print() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "CNIC: " << cnic << endl;
    }
};

int main() {
	
    Person P1("John", 30, "12345-6789012-3");

    P1.Print();

    return 0;
}


