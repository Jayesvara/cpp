#include<iostream>
using namespace std;

int main(){
    int age = 17;
    bool license = true;

    bool eligible = (age >= 18) && (license == true);

    if(eligible){
        cout << "Eligible to ride a bike" << endl;
    }
    else{
        cout << "Not eligible to ride a bike" << endl;
    }

    return 0;
}