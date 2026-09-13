#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr1[] = {10, 5, 8, 10, 3};
    int size1 = 5;

    sort(arr1, arr1 + size1);

    int secondLargestSorting = 0;
    bool found = false;

    for (int i = size1 - 2; i >= 0; i--) {
        if (arr1[i] != arr1[size1 - 1]) {
            secondLargestSorting = arr1[i];
            found = true;
            break;
        }
    }

    if (found) {
        cout << "Second-largest using sorting: " << secondLargestSorting << endl;
    } else {
        cout << "No second-largest distinct element" << endl;
    }

    int arr2[] = {10, 5, 8, 10, 3};
    int size2 = 5;
    int largest = 0;
    int secondLargest = 0;
    bool hasLargest = false;
    bool hasSecondLargest = false;

    for (int i = 0; i < size2; i++) {
        int number = arr2[i];

        if (!hasLargest || number > largest) {
            if (hasLargest && number != largest) {
                secondLargest = largest;
                hasSecondLargest = true;
            }
            largest = number;
            hasLargest = true;
        } else if (number != largest &&
                   (!hasSecondLargest || number > secondLargest)) {
            secondLargest = number;
            hasSecondLargest = true;
        }
    }

    if (hasSecondLargest) {
        cout << "Second-largest using single traversal: " << secondLargest << endl;
    } else {
        cout << "No second-largest distinct element" << endl;
    }

    return 0;
}