#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N; // Read how many terms to print
    
    long long first = 0;
    long long second = 1;
    
    for (int i = 1; i <= N; i++) {
        // 1. Print the current term
        cout << first << " ";
        
        // 2. Calculate the next term
        long long next = first + second;
        
        // 3. Shift variables forward for the next loop cycle
        first = second;
        second = next;
    }
    
    cout << endl;
    return 0;
}
