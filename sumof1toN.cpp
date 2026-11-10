#include<iostream>
using namespace std;
int main(){
    int number;
    int sum;
    int i;
    cin>>number;
     sum=0;
    for(i=1;i<=number; i++){
        sum=sum+i;
    }
    cout<<sum;
    
    return 0;
    
}