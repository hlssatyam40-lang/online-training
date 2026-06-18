#include<iostream>
using namespace std;
int sum(int a, int b){
    return a+b;
};
int main(){
    int a,b;
    cout<<"enter two numbers to add";
    cin>>a>>b;
    cout<<"sum="<<sum(a,b);
    return 0;
}