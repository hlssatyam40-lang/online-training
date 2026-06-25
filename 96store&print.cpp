#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;
    
    // Store elements
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);
    
    cout << "Vector elements: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
    
    // Alternative using range-based loop
    cout << "Using range loop: ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}