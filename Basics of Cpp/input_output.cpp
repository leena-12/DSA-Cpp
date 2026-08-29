#include <iostream>
using namespace std;

int main() {
    string name;
    int number;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Hello, " << name << endl;
    cout << "You entered: " << number << endl;

    return 0;
}