#include <iostream>
#include <vector>
using namespace std;

int lowerBound(vector<int>& arr, int target) {
    int left = 0, right = arr.size();
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] >= target) right = mid;
        else left = mid + 1;
    }
    return left;
}

int upperBound(vector<int>& arr, int target) {
    int left = 0, right = arr.size();
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] > target) right = mid;
        else left = mid + 1;
    }
    return left;
}

int main() {
    vector<int> arr = {1, 2, 2, 2, 3, 4, 5};
    int target = 2;

    int first = lowerBound(arr, target);
    int afterLast = upperBound(arr, target);
    int count = afterLast - first;

    cout << "Occurrences of " << target << ": " << count << endl;
    return 0;
}