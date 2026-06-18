#include <iostream>
using namespace std;

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    cout << "2^3 = " << power(2, 3) << endl;   // Output: 8
    cout << "5^2 = " << power(5, 2) << endl;   // Output: 25
    return 0;
}