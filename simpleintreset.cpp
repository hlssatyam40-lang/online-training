#include<iostream>
using namespace std;
int main()
{
    float P,R,T;
    cout<<"enter amount u have borrowed in INR ";
    cin>>P;
    cout<<"enter rate of interest in %";
    cin>>R;
    cout<<"enter time of borrowing in days";
    cin>>T;
    cout<<"THE SIMPLE INTEREST FOR THE GIVEN AMOUNT "<<P<<"\nIS="<<(P*R*T)/100;
    return 0;
}