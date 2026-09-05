#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 0, 3, 0, 5, 0, 7};
    int n = 7;

    int pos = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            int temp = arr[i];
            arr[i] = arr[pos];
            arr[pos] = temp;
            pos++;
        }
    }

    cout << "Result: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}