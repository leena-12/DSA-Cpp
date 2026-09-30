#include <iostream>
#include <vector>
using namespace std;

int floorValue(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    int answer = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] <= target) {
            answer = arr[mid];
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return answer;
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9};
    int target = 6;

    cout << "Floor value: " << floorValue(arr, target) << endl;
    return 0;
}