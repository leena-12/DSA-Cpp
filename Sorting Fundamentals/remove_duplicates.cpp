#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 3, 4};
    int size = 6;

    sort(arr, arr + size);

    cout << "After removing duplicates: ";

    for (int i = 0; i < size; i++) {
        if (i == 0 || arr[i] != arr[i - 1]) {
            cout << arr[i] << " ";
        }
    }

    cout << endl;
    return 0;
}