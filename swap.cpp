#include<iostream>
using namespace std;
int main()
{ int s,t;
    cout<<"enter the numbers:";
    cin>>s>>t;
    cout<<"s="<<s<<" t="<<t<<endl;

    int r;
    r=s;
    s=t;
    t=r;
    cout<<"\nafter swapping the numbers are s="<<s<<" \nafter swapping the numbers are t="<<t;
}