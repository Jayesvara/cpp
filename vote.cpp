#include <iostream>

using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 18) {
        cout << "The age " << age << " is eligible for voting." << endl;
    } else {
        cout << "The age " << age << " is not eligible for voting." << endl;
    }
    return 0;
}
