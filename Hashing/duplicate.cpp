#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int arr[] = {1, 4, 2, 7, 4};
    int n = 5;

    unordered_set<int> seen;
    bool duplicate = false;

    for (int i = 0; i < n; i++) {
        if (seen.count(arr[i])) {
            duplicate = true;
            break;
        }
        seen.insert(arr[i]);
    }

    if (duplicate) {
        cout << "Duplicate exists" << endl;
    } else {
        cout << "No duplicate" << endl;
    }

    return 0;
}