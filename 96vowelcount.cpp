#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string str1="abcdefghijklmnopqrstvwxyz";
     int count = 0;
     for(int i=0;i<str1.length();i++){
         char ch = tolower(str1[i]);
        if( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ){
        count++;
        }
      
     
} cout<<count; }
