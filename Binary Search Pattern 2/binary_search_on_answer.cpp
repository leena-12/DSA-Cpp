#include <iostream>
using namespace std;

// Binary Search on Answer example:
// Find the largest x such that x * x <= n.
int integerSqrt(int n) {
    int low = 0;
    int high = n;
    int answer = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (mid <= n / mid) {
            answer = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return answer;
}

int main() {
    int n = 20;

    cout << "Integer square root of " << n << " is: " << integerSqrt(n) << endl;
    return 0;
}