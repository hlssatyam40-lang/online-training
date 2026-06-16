#include<iostream>
using namespace std;
int main()
{
    int s;
    cout<<"enter marks of student out of 100\n";
    cin>>s;
    if(s>=83){
        cout<<"A+";
    }
    else if(s>=70){
        cout<<"A";

    }
     else if(s>=60){
        cout<<"B";
        
    }
     else if(s>=40){
        cout<<"C";
        
    }
    else {
        cout<<"fail";
    }
    return 0;
}