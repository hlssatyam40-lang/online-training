#include<iostream>
using namespace std;
int main(){
    int a,i=1,c;
    cout<<"enter a number";
    cin>>a;
    c=1;
    while(c<=a){
        i*= c;
        c++;
    }
    cout<<"\n"<<i;
}