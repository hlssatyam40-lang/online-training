#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter numbers to calculate ";
    cin>>a>>b;
    cout<<"\nenter 1 to add";
    cout<<"\nenter 2 to sub";
    cout<<"\nenter 3 to multiply";
    cout<<"\nenter 4 to divide";
    cin>>c;
    switch(c){
        case 1:
        cout<<"sum ="<<a+b;
        break;
        case 2:
        cout<<"diff ="<<a-b;
        break;
        case 3:
        cout<<"product ="<<a*b;
        break;
        case 4:
        cout<<"division ="<<a/b;
        break;

    }


}