#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter 3 numbers";
    cin>>a>>b>>c;
    if(a>c && a>b){
        cout<<"the greater number is "<<a;

    
    }
    else if(b>a && b>c){
        cout<<"the greater number is"<<b;

    }
    else if(c>a && c>b){
        cout<<"the greater number is "<<c;
        
    }
}