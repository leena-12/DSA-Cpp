#include <iostream>
using namespace std;

int main() {
    int numbers[] = {4, 7, 1, 9, 3};
    int size = 5;
    int target = 9;
    bool found = false;

    for (int i = 0; i < size; i++) {
        if (numbers[i] == target) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << target << " exists in the array" << endl;
    } else {
        cout << target << " does not exist in the array" << endl;
    }

    return 0;
}