#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec = {15, 35, 20, 50, 10, 40};
    
    // Method 1: Using min_element()
    int minVal = *min_element(vec.begin(), vec.end());
    cout << "Minimum element: " << minVal << endl;  // Output: 10
    
    // Method 2: Manual loop
    int min = vec[0];
    for (int val : vec) {
        if (val < min) {
            min = val;
        }
    }
    cout << "Minimum (manual): " << min << endl;  // Output: 10
    
    return 0;
}