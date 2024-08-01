#include <iostream>
using namespace std;

void printConstIntPtr(const int* ptr) {
    if (ptr != NULL) {
        cout << "Value pointed to by the pointer: " << *ptr <<endl;
    } 
}

int main() {
    int num = 10;
    const int* ptr = &num; 
    printConstIntPtr(ptr); 
    return 0;
}


