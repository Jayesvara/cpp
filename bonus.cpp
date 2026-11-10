#include<iostream>
using namespace std;
int main() {
    
int bonus=5;
int ravimarks=78;
int raviattendance=94;
int meenamarks=82;
int meenattendance=85;
int attendance=90;
if (raviattendance>=attendance)
{
    cout<<"Ravi is eligible for bonus marks"<<endl;
    cout<<"Ravi's total marks: "<<ravimarks+bonus<<endl;

}
if (meenattendance>=attendance) {
    
    cout<<"Meena is eligible for bonus marks"<<endl;
    cout<<"Meena's total marks: "<<meenamarks+bonus<<endl;
}

    return 0;
}