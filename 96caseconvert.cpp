#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

string toUpperCase(string str) {
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    return str;
}

string toLowerCase(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

string toggleCase(string str) {
    for (int i = 0; i < str.length(); i++) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        } else {
            str[i] = toupper(str[i]);
        }
    }
    return str;
}

int main() {
    string str = "Hello World";
    
    cout << "Original: " << str << endl;
    cout << "Uppercase: " << toUpperCase(str) << endl;      // HELLO WORLD
    cout << "Lowercase: " << toLowerCase(str) << endl;      // hello world
    cout << "Toggle Case: " << toggleCase(str) << endl;     // hELLO wORLD
    
    return 0;
}