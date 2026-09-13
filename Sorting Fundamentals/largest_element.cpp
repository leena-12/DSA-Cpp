#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {5, 2, 8, 1, 3};
    int size = 5;

    int largest = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "Largest element: " << largest << endl;
    return 0;
}