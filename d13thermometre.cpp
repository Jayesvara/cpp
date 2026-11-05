#include<iostream>
using namespace std;
int main(){
    int cel=37;
    int fah=(cel*9/5)+32;
    int fah2=(cel*9.0/5)+32;
    cout<<"Fahrenheit equivalent is : "<<fah<<endl;
    cout<<"Fahrenheit equivalent is : "<<fah2<<endl;
    return 0;

}