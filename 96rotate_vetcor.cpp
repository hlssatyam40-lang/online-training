#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Rotate left by k positions
void rotateLeft(vector<int>& vec, int k) {
    k = k % vec.size();  // Handle k > size
    rotate(vec.begin(), vec.begin() + k, vec.end());
}

// Rotate right by k positions
void rotateRight(vector<int>& vec, int k) {
    k = k % vec.size();  // Handle k > size
    rotate(vec.begin(), vec.end() - k, vec.end());
}

int main() {
    vector<int> vec = {10, 20, 30, 40, 50};
    
    cout << "Original: ";
    for (int val : vec) cout << val << " ";
    cout << endl;
    
    // Rotate left by 2
    rotateLeft(vec, 2);
    cout << "After rotating left by 2: ";
    for (int val : vec) cout << val << " ";
    cout << endl;  // Output: 30 40 50 10 20
    
    // Reset
    vec = {10, 20, 30, 40, 50};
    
    // Rotate right by 2
    rotateRight(vec, 2);
    cout << "After rotating right by 2: ";
    for (int val : vec) cout << val << " ";
    cout << endl;  // Output: 40 50 10 20 30
    
    return 0;
}