#include <iostream>
#include <string>
using namespace std;

// Recursive palindrome check using two pointers
bool isPalindrome(string str, int start, int end) {
    // Base Case: all characters matched
    if (start >= end) {
        return true;
    }
    
    // If characters don't match
    if (str[start] != str[end]) {
        return false;
    }
    
    // Recursive Case: check inner substring
    return isPalindrome(str, start + 1, end - 1);
}

// Wrapper function
bool checkPalindrome(string str) {
    return isPalindrome(str, 0, str.length() - 1);
}

int main() {
    string str1 = "racecar";
    string str2 = "hello";
    string str3 = "madam";
    
    cout << "Is '" << str1 << "' palindrome? " 
         << (checkPalindrome(str1) ? "Yes" : "No") << endl;  // Yes
    
    cout << "Is '" << str2 << "' palindrome? " 
         << (checkPalindrome(str2) ? "Yes" : "No") << endl;  // No
    
    cout << "Is '" << str3 << "' palindrome? " 
         << (checkPalindrome(str3) ? "Yes" : "No") << endl;  // Yes
    
    // Trace: isPalindrome("racecar", 0, 6)
    // r == r? Yes → isPalindrome("racecar", 1, 5)
    // a == a? Yes → isPalindrome("racecar", 2, 4)
    // c == c? Yes → isPalindrome("racecar", 3, 3)
    // start >= end → return true (Palindrome!)
    
    return 0;
}