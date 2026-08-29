#include <iostream>
using namespace std;

void greet() {
    cout << "Hello from function!" << endl;
}

int add(int a, int b) {
    return a + b;
}

int main() {
    greet();

    int sum = add(10, 20);
    cout << "Sum: " << sum << endl;

    return 0;
}