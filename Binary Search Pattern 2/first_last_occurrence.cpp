#include <iostream>
#include <vector>
using namespace std;

int firstOccurrence(vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;
    int answer = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            answer = mid;
            high = mid - 1;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return answer;
}

int lastOccurrence(vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;
    int answer = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            answer = mid;
            low = mid + 1;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return answer;
}

int main() {
    vector<int> arr = {1, 2, 4, 4, 4, 5, 7};
    int target = 4;

    int first = firstOccurrence(arr, target);
    int last = lastOccurrence(arr, target);

    if (first == -1) {
        cout << "Target not found." << endl;
    } else {
        cout << "First occurrence: " << first << endl;
        cout << "Last occurrence: " << last << endl;
        cout << "Count: " << last - first + 1 << endl;
    }

    return 0;
}