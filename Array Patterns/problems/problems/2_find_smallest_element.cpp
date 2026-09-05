#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 5, 8, 20, 15};
    int n = 5;

    int smallest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    cout << "Smallest element: " << smallest << endl;
    return 0;
}