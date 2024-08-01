#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
    string cnic;

public:
    // Constructor
    Person(string n, int a, string c) {
        name = n;
        
        if (a >= 0 && a <= 130) {
            age = a;
        } else {
            cout << "Invalid age" << endl;
            age = 0;
        }
        
        if (c.length() == 13) {
            cnic = c;
        } else {
            cout << "Invalid CNIC length" << endl;
        }
    }

    // Getter functions
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    string getCnic() {
        return cnic;
    }

    // Setter functions
    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        if (a >= 0 && a <= 130) {
            age = a;
        } else {
            cout << "Invalid age" << endl;
        }
    }

    void setCnic(string c) {
        if (c.length() == 13) {
            cnic = c;
        } else {
            cout << "Invalid CNIC length" << endl;
        }
    }

    void Print()  {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "CNIC: " << cnic << endl;
    }
};

int main() {
    Person P1("John", 30, "12345-6789012-3");

    P1.Print();
    cout << "Age" << endl;
    P1.setAge(150); 
    cout << "CNIC" << endl;
    P1.setCnic("1234567890123"); 
    cout << endl;
    P1.Print();

    return 0;
}


