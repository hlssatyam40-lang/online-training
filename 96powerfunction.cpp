#include<iostream>
using namespace std;
int power(int x, int y){
    if(y==0){
        return 1;
    }
    else{
        return x*power(x,y-1);
    }

}

int main(){
    int a,b;
    cout<<"enter no and power";
    cin>>a>>b;
    cout<<"power = "<<power(a,b);

}