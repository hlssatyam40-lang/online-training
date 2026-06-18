#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int n) {
    if (n < 2) {
        return false;
    }
    
    // Check divisors from 2 to sqrt(n)
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    cout << "Is 7 prime? " << (is_prime(7) ? "Yes" : "No") << endl;    // Yes
    cout << "Is 10 prime? " << (is_prime(10) ? "Yes" : "No") << endl;  // No
    return 0;
}