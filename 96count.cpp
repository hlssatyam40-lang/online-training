#include <iostream>
#include <string>
using namespace std;

int countWords(string str) {
    int count = 0;
    size_t pos = 0;
    
    // find_first_not_of() - finds first character that is NOT a space
    while ((pos = str.find_first_not_of(" ", pos)) != string::npos) {
        count++;
        // find_first_of() - finds next space
        pos = str.find_first_of(" ", pos);
        if (pos == string::npos) break;
    }
    return count;
}

int main() {
    string str = "Hello World from C Plus Plus";
    
    cout << "String: " << str << endl;
    cout << "Word count: " << countWords(str) << endl;  // Output: 5
    
    return 0;
}