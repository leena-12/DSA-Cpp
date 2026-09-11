#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int numbers[] = {1, 2, 2, 3, 1, 4, 2};
    int size = 7;

    unordered_map<int, int> frequency;

    for (int i = 0; i < size; i++) {
        frequency[numbers[i]]++;
    }

    cout << "Frequency of every element:" << endl;

    for (auto item : frequency) {
        cout << item.first << " occurs " << item.second << " times" << endl;
    }

    return 0;
}