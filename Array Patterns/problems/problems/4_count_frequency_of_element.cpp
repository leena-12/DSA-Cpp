#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 2, 4, 5};
    int n = 7;
    int target = 2;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            count++;
        }
    }

    cout << "Frequency of " << target << ": " << count << endl;
    return 0;
}