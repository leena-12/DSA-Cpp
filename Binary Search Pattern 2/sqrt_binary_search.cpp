#include <iostream>
using namespace std;

int squareRoot(int x) {
    int low = 0;
    int high = x;
    int answer = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (mid * mid == x) {
            return mid;
        } else if (mid * mid < x) {
            answer = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return answer;
}

int main() {
    int x = 16;

    cout << "Square root of " << x << " is: " << squareRoot(x) << endl;
    return 0;
}