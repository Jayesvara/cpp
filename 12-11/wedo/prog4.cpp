#include <iostream>
using namespace std;

int main() {
    int array[5] = {18, 21, 19, 23, 20};
    int input;
    cin >> input; 

    for (int i = 0; i < 5; i++) {
        

        if (array[i] == input) {
            cout << "correct";
        } else {
            cout << "incorrect";
        }
    }

    return 0;
}
