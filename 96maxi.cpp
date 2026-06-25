#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec = {15, 35, 20, 50, 10, 40};
    
    // Method 1: Using max_element()
    int maxVal = *max_element(vec.begin(), vec.end());
    cout << "Maximum element: " << maxVal << endl;  // Output: 50
    
    // Method 2: Manual loop
    int max = vec[0];
    for (int val : vec) {
        if (val > max) {
            max = val;
        }
    }
    cout << "Maximum (manual): " << max << endl;  // Output: 50
    
    return 0;
}