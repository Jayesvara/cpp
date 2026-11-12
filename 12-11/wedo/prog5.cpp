#include <iostream>
using namespace std;
int main(){
    int code;
    cin>>code;
    int array[5]={14,27,31,27,42};
    for (int index=0;index<5;index++){
        cout<<index;
        if (array[index]==code[index])
        {
            cout<<"found";
        }
        else {
            cout<<"not found";
        }
    }
}