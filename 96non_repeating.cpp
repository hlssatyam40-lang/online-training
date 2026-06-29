#include<iostream>
#include<map>
#include<string>

using namespace std;
int main(){
    string s="apple";
    map<char,int> freq;
    for(char c : s){ freq[c]++;
        
    }
    for(char c:s){
        if (freq[c] == 1){
            cout<<"first non repeating character is "<<c<<endl;
        }
    }



}