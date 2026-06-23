#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,4,6,9,1};
    int sum = 0;
    int *p = arr;
for(int i = 0; i<5;i++){
    sum += *(p+i);

}
cout<<"sum  ="<<sum;
}