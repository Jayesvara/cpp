#include<iostream>
using namespace std;
int main(){
  int input;
    int i;
    int fact=1;
    cin>>input;
    for(i=1;i<=input;i++){
        fact=fact*i;
    }
    cout<<fact;
}