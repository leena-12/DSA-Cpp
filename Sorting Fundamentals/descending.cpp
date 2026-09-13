#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
    int arr[] = {4, 9, 1, 7, 2};
    int size = 5;

    sort(arr, arr + size, greater<int>());

    cout << "Descending order: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}