#include <iostream>
#include <vector>
using namespace std;

int ceilValue(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    int answer = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] >= target) {
            answer = arr[mid];
            right = mid - 1;
        } 
        else {
            left = mid + 1;
        }
    }

    return answer;
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9};
    int target = 6;

    int result = ceilValue(arr, target);

    if (result == -1) {
        cout << "No ceil value exists." << endl;
    } 
    else {
        cout << "Ceil value: " << result << endl;
    }

    return 0;
}