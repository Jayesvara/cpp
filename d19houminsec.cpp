#include<iostream>
using namespace std;

int main(){
    int dur = 7384;

    int hours = dur / 3600;
    int remaining = dur % 3600;

    int minutes = remaining / 60;
    int seconds = remaining % 60;

    cout << "Hours: " << hours << endl;
    cout << "Minutes: " << minutes << endl;
    cout << "Seconds: " << seconds << endl;

    return 0;
}