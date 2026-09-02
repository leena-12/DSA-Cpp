#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 45, 7, 89, 23};
    int size = sizeof(arr) / sizeof(arr[0]);

    int minElement = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
    }

    cout << "Minimum = " << minElement << endl;

    return 0;
}