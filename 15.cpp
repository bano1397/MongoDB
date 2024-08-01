#include <iostream>
using namespace std;

void findMin(int* arr, int size) {
	
    if (size == 0) {
        cout << "Array is empty." << endl;
        return;
    }

    int *ptr = arr;
    
    int minValue = *ptr;

    for (int i = 1; i < size; ++i) {
        ptr++;
        if (*ptr < minValue) {
            minValue = *ptr;
        }
    }

    cout << "The minimum value in the array is: " << minValue << endl;
}

int main() {
	
    int arr[] = {5, 3, 9, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    findMin(arr, size);

    return 0;
}


