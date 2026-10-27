#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[] = {4, 5, 1, 2, 1, 5, 4, 9};
    int n = 8;

    unordered_map<int, int> freq;

    // Count frequency of every element
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // Print frequency of each element
    cout << "Element frequencies:" << endl;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " appears " << freq[arr[i]] << " time(s)" << endl;
    }

    // Find the first element that appears only once
    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] == 1) {
            cout << "\nFirst unique element: " << arr[i] << endl;
            return 0;
        }
    }

    cout << "\nNo unique element found" << endl;

    return 0;
}