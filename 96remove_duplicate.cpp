#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    vector<int> vec = {10, 20, 10, 30, 20, 40, 10};
    
    cout << "Original: ";
    for (int val : vec) cout << val << " ";
    cout << endl;
    
    // Method 1: Sort and use unique()
    sort(vec.begin(), vec.end());
    auto it = unique(vec.begin(), vec.end());
    vec.erase(it, vec.end());  // Remove duplicates
    
    cout << "After removing duplicates: ";
    for (int val : vec) cout << val << " ";
    cout << endl;
    
    // Output: 10 20 30 40
    
    return 0;
}