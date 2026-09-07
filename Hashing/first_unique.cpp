#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[] = {4, 5, 1, 2, 1, 5, 4, 9};
    int n = 8;

    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] == 1) {
            cout << "First unique element: " << arr[i] << endl;
            return 0;
        }
    }

    cout << "No unique element found" << endl;
    return 0;
}