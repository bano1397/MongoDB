#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 100; 
    char charArray[MAX_SIZE];
    int length = 0; 

    cout << "Enter a string: ";
    cin.getline(charArray, MAX_SIZE); 

    char *ptr = charArray; 
    while (*ptr != '\0') {  
        length++;  
        ptr++;  
    }

    cout << "Length of the string: " << length << endl;

    return 0;
}


