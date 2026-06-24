#include <iostream>
using namespace std;

// Recursive function: sum(n) = n + sum(n-1)
int sumOfN(int n) {
    // Base Case
    if (n == 0) {
        return 0;
    }
    
    // Recursive Case
    return n + sumOfN(n - 1);
}

int main() {
    cout << "Sum of 1 to 5 = " << sumOfN(5) << endl;  // Output: 15
    cout << "Sum of 1 to 10 = " << sumOfN(10) << endl; // Output: 55
    
    // Trace: sumOfN(5)
    // = 5 + sumOfN(4)
    // = 5 + 4 + sumOfN(3)
    // = 5 + 4 + 3 + sumOfN(2)
    // = 5 + 4 + 3 + 2 + sumOfN(1)
    // = 5 + 4 + 3 + 2 + 1 + sumOfN(0)
    // = 5 + 4 + 3 + 2 + 1 + 0 = 15
    
    return 0;
}