#include <iostream>
using namespace std;

int main() {
    int numbers[] = {1, 3, 5, 7, 9, 11, 13};
    int size = 7;
    int target = 9;

    int low = 0;
    int high = size - 1;
    bool found = false;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (numbers[mid] == target) {
            found = true;
            break;
        } else if (target < numbers[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    if (found) {
        cout << target << " found" << endl;
    } else {
        cout << target << " not found" << endl;
    }

    return 0;
}