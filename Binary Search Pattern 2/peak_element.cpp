#include <iostream>
#include <vector>
using namespace std;

int findPeakElement(vector<int>& arr) {
    int low = 0;
    int high = arr.size() - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] > arr[mid + 1]) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }

    return low;
}

int main() {
    vector<int> arr = {1, 2, 3, 1};

    int peakIndex = findPeakElement(arr);

    cout << "Peak element index: " << peakIndex << endl;
    cout << "Peak element value: " << arr[peakIndex] << endl;
    return 0;
}