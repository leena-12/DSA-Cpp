#include <iostream>
#include <vector>
using namespace std;

int searchInsertPosition(vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;
    int answer = arr.size();

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= target) {
            answer = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return answer;
}

int main() {
    vector<int> arr = {1, 3, 5, 6};
    int target = 4;

    cout << "Insert position: " << searchInsertPosition(arr, target) << endl;
    return 0;
}