#include <iostream>
using namespace std;

void traverseArray(int *arr, int n) {
    cout << "Array elements using pointers: ";
    
    // Method 1: Using pointer arithmetic
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
    
    // Method 2: Using pointer increment
    int *ptr = arr;
    cout << "Using pointer increment: ";
    for (int i = 0; i < n; i++) {
        cout << *ptr << " ";
        ptr++;  // Move to next element
    }
    cout << endl;
}

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int n = 5;
    
    traverseArray(arr, n);
    
    return 0;
}