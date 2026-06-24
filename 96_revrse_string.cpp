#include <iostream>
#include <string>
using namespace std;

// Recursive function: reverse from end to beginning
void reverseString(string str, int index) {
    // Base Case
    if (index < 0) {
        return;
    }
    
    // Print character at index
    cout << str[index];
    
    // Recursive Case: move to previous character
    reverseString(str, index - 1);
}

// Alternative: Build reversed string
string reverseStringBuild(string str) {
    // Base Case
    if (str.length() == 0) {
        return "";
    }
    
    // Recursive Case: last char + reverse of rest
    return str[str.length() - 1] + reverseStringBuild(str.substr(0, str.length() - 1));
}

int main() {
    string str = "Hello";
    
    cout << "Original: " << str << endl;
    
    cout << "Reversed (Method 1): ";
    reverseString(str, str.length() - 1);
    cout << endl;
    
    cout << "Reversed (Method 2): " << reverseStringBuild(str) << endl;
    
    // Trace: reverseString("Hello", 4)
    // Print H, reverseString("Hello", 3)
    // Print e, reverseString("Hello", 2)
    // Print l, reverseString("Hello", 1)
    // Print l, reverseString("Hello", 0)
    // Print o, reverseString("Hello", -1) → Base Case
    // Output: olleH
    
    return 0;
}