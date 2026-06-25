#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec = {10, 20, 30, 40, 50};
    
    cout << "Original: ";
    for (int val : vec) cout << val << " ";
    cout << endl;
    
    // Method 1: Using reverse() function
    reverse(vec.begin(), vec.end());
    
    cout << "Reversed: ";
    for (int val : vec) cout << val << " ";
    cout << endl;
    
    // Output: 50 40 30 20 10
    
    return 0;
}