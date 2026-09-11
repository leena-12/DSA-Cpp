#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int numbers[] = {4, 5, 1, 2, 1, 5, 4, 9};
    int size = 8;
    unordered_map<int, int> frequency;

    for (int i = 0; i < size; i++) {
        frequency[numbers[i]]++;
    }

    for (int i = 0; i < size; i++) {
        if (frequency[numbers[i]] == 1) {
            cout << "First non-repeating element: " << numbers[i] << endl;
            break;
        }
    }

    return 0;
}