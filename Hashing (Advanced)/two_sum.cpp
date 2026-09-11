#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int numbers[] = {2, 7, 11, 15};
    int size = 4;
    int target = 9;
    unordered_map<int, int> seen;

    for (int i = 0; i < size; i++) {
        int needed = target - numbers[i];

        if (seen.find(needed) != seen.end()) {
            cout << "Pair: " << needed << " and " << numbers[i] << endl;
            break;
        }

        seen[numbers[i]] = i;
    }

    return 0;
}