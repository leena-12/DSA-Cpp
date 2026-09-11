#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int numbers[] = {1, 5, 3, 7, 5};
    int size = 5;
    unordered_set<int> seen;
    bool duplicate = false;

    for (int i = 0; i < size; i++) {
        if (seen.find(numbers[i]) != seen.end()) {
            duplicate = true;
            break;
        }
        seen.insert(numbers[i]);
    }

    if (duplicate) {
        cout << "Duplicates exist" << endl;
    } else {
        cout << "No duplicates" << endl;
    }

    return 0;
}