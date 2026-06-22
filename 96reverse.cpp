#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string reverseString(string str) {
    reverse(str.begin(), str.end());
    return str;
}

int main() {
    string str = "Hello";
    
    cout << "Original: " << str << endl;
    cout << "Reversed: " << reverseString(str) << endl;  // Output: olleH
    
    return 0;
}