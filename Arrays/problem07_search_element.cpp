#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 15;

    int foundIndex = -1;

    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        cout << "Element found at index " << foundIndex << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}