#include <iostream>
#include <unordered_map>
using namespace std;

void bruteForce(int arr[], int n, int target) {
    cout << "Brute-force approach:" << endl;
    bool found = false;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << arr[i] << " + " << arr[j] << " = " << target << endl;
                found = true;
                return;
            }
        }
    }

    if (!found) {
        cout << "No pair found" << endl;
    }
}

void hashMapApproach(int arr[], int n, int target) {
    cout << "Hash-map approach:" << endl;
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++) {
        int need = target - arr[i];

        if (mp.count(need)) {
            cout << arr[i] << " + " << need << " = " << target << endl;
            return;
        }

        mp[arr[i]] = i;
    }

    cout << "No pair found" << endl;
}

int main() {
    int arr[] = {2, 7, 11, 15};
    int n = 4;
    int target = 9;

    bruteForce(arr, n, target);
    hashMapApproach(arr, n, target);

    cout << "Why is the second approach better?" << endl;
    cout << "Because it checks needed values in constant average time instead of comparing every pair." << endl;

    return 0;
}