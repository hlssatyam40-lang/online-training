#include<iostream>
using namespace std;
int main(){
    int arr[5]={43,65,14,22,25};
    int mini=arr[0];
    for(int i=1;i<5;i++){
        if(arr[i]<mini){
            mini = arr[i];
        }

    }
    cout<<"\n minimum no="<<mini;
    for(int i=0;i<5;i++){

        cout<<"\nelements are"<<arr[i];
    }
    
}