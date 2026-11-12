#include<iostream>
using namespace std;
int main(){
    int arr[]={12,9,15,8,7,11};
    for(int i=0;i<6;i++){
        cout<<arr[i]<<endl;

    }
    cout<<"First element: "<<arr[0]<<endl;
    cout<<"Last element: "<<arr[5]<<endl;
    for (int i=5;i>=0;i--){
        cout<<arr[i]<<endl;
    }


}