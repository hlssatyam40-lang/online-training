#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a number";
    cin>>a;
    if(a>0){
        cout<<"the number is positive";

    }
    else if(a<0){
        cout<<"the number is negative";
    }
    else{
        cout<<"the number is 0 ";

    }
    return 0;
}