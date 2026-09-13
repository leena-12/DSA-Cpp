#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {5, 2, 8, 1, 3};
    int size = 5;

    sort(arr, arr + size);

    cout << "Ascending order: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}