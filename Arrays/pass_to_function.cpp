#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    cout << "Array elements: ";

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main() {
    int arr[] = {5, 10, 15, 20};

    // Calculate number of elements in the array
    int size = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, size);

    return 0;
}