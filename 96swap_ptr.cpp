#include<iostream>
using namespace std;
int main(){
    int e=50;
    int q = 78;
     cout<<"before swap\na="<<e;
    cout<<"b="<<q;
   int *a = &e,*b = &q;
     int temp = *a;
    *a = *b;
    *b = temp;

    cout<<"\nafter swap\na="<<e;
    cout<<"b="<<q;
return 0;

}