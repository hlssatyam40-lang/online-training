#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// OR simpler using recursion:
int gcd_recursive(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd_recursive(b, a % b);
}

int main() {
    cout << "GCD(48, 18) = " << gcd(48, 18) << endl;        // Output: 6
    cout << "GCD(100, 50) = " << gcd_recursive(100, 50) << endl;  // Output: 50
    return 0;
}