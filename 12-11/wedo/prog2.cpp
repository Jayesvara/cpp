#include<iostream>
using namespace std;
int main(){
    int array[5]={28,31,26,30,29};
    for (int i=0;i<5;i++){
        array[2]=32;
        cout<<array[i]<<endl;
    }
    return 0;
}
