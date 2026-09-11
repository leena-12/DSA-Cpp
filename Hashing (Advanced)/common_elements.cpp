#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {3, 4, 5, 6, 7};
    int sizeA = 5;
    int sizeB = 5;

    unordered_set<int> values;

    for (int i = 0; i < sizeA; i++) {
        values.insert(a[i]);
    }

    cout << "Common elements: ";

    for (int i = 0; i < sizeB; i++) {
        if (values.find(b[i]) != values.end()) {
            cout << b[i] << " ";
        }
    }

    cout << endl;
    return 0;
}