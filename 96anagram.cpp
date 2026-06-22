#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool areAnagrams(string str1, string str2) {
    // Remove spaces and convert to lowercase
    string s1 = "", s2 = "";
    
    for (char c : str1) {
        if (c != ' ') {
            s1 += tolower(c);
        }
    }
    
    for (char c : str2) {
        if (c != ' ') {
            s2 += tolower(c);
        }
    }
    
    // Check length
    if (s1.length() != s2.length()) {
        return false;
    }
    
    // Sort both and compare using compare()
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    
    return s1.compare(s2) == 0;
}

int main() {
    string str1 = "listen";
    string str2 = "silent";
    string str3 = "hello";
    
    cout << "Are '" << str1 << "' and '" << str2 << "' anagrams? " 
         << (areAnagrams(str1, str2) ? "Yes" : "No") << endl;  // Yes
    
    cout << "Are '" << str1 << "' and '" << str3 << "' anagrams? " 
         << (areAnagrams(str1, str3) ? "Yes" : "No") << endl;  // No
    
    return 0;
}