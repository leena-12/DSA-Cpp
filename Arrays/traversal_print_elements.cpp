#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 6, 9, 12, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}