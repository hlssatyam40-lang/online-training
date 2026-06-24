#include <iostream>
using namespace std;

// Recursive function: fib(n) = fib(n-1) + fib(n-2)
int fibonacci(int n) {
    // Base Cases
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    
    // Recursive Case
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    cout << "Fibonacci Series: ";
    for (int i = 0; i < 7; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;  // Output: 0 1 1 2 3 5 8
    
    // Trace: fibonacci(5)
    // = fibonacci(4) + fibonacci(3)
    // = [fib(3) + fib(2)] + [fib(2) + fib(1)]
    // = ... eventually = 5
    
    return 0;
}