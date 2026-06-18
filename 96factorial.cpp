#include <iostream>
using namespace std;

// Iterative approach
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// OR Recursive approach:
int factorial_recursive(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial_recursive(n - 1);
}

int main() {
    cout << "5! = " << factorial(5) << endl;  // Output: 120
    cout << "4! = " << factorial_recursive(4) << endl;  // Output: 24
    return 0;
}