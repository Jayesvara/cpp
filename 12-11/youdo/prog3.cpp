
#include<iostream>
using namespace std;

int main(){

    int arr[]={21,35,21,44,21,50};
    int target=21;
    int count=0;

    cout<<"Searching for 21:"<<endl;
    for(int i=0;i<6;i++){

        if(arr[i]==target){
            cout<<"Index: "<<i<<endl;
            count++;
        }

    }

    cout<<"Match cout: "<<count<<endl;

    if(count==0){
        cout<<"Not f0und"<<endl;
    }

    target=99;
    count=0;

    cout<<"Searching for99:"<<endl;

    for(int i=0;i<6;i++){

        if(arr[i]==target){
            cout<<"Index: "<<i<<endl;
            count++;
        }

    }

    cout<<"Match count: "<<count<<endl;

    if(count==0){
        cout<<"Not found"<<endl;
    }

    return 0;
}
