#include<iostream>
using namespace std;
int max(int a,int b){
    if(a>b){
        cout<<"the greater number is a="<<a;

    }
    else if(b>a){
        cout<<"the greater number is b= "<<b;

    }
    else{
        cout<<"both are equal";
    }
    return 0;
}
int main(){
    int a,b;
    cout<<"enter two numbers";
    cin>>a>>b;
    return max(a,b);
}