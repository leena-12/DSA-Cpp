#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 5, 8, 20, 15};
    int n = 5;

    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "Largest element: " << largest << endl;
    return 0;
}