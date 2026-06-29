#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){

vector<int> arr = {3,4,4,8,8,6,8};
map<int,int> freq;
int maxcount = 0,element = -1;
for(int  i : arr){
    freq[i]++;
    if(freq[i]>maxcount){
        maxcount = freq[i];
        element = i;
    }

}
cout<<"maximum element is"<<element<<"->"<<maxcount<<"times\n";




    return 0;
}