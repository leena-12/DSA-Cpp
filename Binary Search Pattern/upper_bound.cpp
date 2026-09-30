#include <iostream>
#include <vector>
using namespace std;

int upperBound(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size();

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] > target) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }

    return left;
}

int main() {
    vector<int> arr = {1, 2, 2, 2, 3, 4, 5};
    int target = 2;
    int position = upperBound(arr, target);

    cout << "First position where value > " << target << " is: " << position << endl;
    return 0;
}