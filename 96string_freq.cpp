#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
string str;
cout<<"enter elments :";
getline(cin,str);
map<char,int> freq;
for(char c : str){
    freq[c]++;
    
}
cout<<"frequency of characters :";
for( auto &p : freq){
    cout<<p.first<<"->"<<p.second<<"\n";
}



    return 0;
}