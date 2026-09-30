#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size();

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] >= target) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }

    return left;
}

int main() {
    vector<int> arr = {1, 3, 5, 6};
    int target = 4;

    cout << "Insert position: " << searchInsert(arr, target) << endl;
    return 0;
}