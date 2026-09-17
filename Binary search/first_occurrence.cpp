#include <iostream>
using namespace std;

int main() {
    int numbers[] = {1, 2, 2, 2, 3, 4};
    int size = 6;
    int target = 2;

    int low = 0;
    int high = size - 1;
    int answer = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (numbers[mid] == target) {
            answer = mid;
            high = mid - 1;
        } else if (target < numbers[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << "First occurrence of " << target << ": " << answer << endl;
    return 0;
}