#include <iostream>
using namespace std;

// In a real problem, isBadVersion() is provided by the platform.
// Here, version 4 is treated as the first bad version.
bool isBadVersion(int version) {
    return version >= 4;
}

int firstBadVersion(int n) {
    int low = 1;
    int high = n;
    int answer = n;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (isBadVersion(mid)) {
            answer = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return answer;
}

int main() {
    int n = 10;

    cout << "First bad version: " << firstBadVersion(n) << endl;
    return 0;
}