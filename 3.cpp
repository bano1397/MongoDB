#include <iostream>
using namespace std;

void AscendingSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap the elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    const int size = 10;
    int arr[size];

    // Input 10 integers from the user
    cout << "Enter 10 integers: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Sort the array using AscendingSort function
    AscendingSort(arr, size);

    // Display the sorted array
    cout << "Sorted array in ascending order: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


