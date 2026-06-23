#include <iostream>
using namespace std;

int findMax(int *arr, int n) {
    int max = *arr;  // Dereference first element
    
    for (int i = 1; i < n; i++) {
        if (*(arr + i) > max) {  // Compare using pointer arithmetic
            max = *(arr + i);
        }
    }
    return max;
}

int main() {
    int arr[] = {15, 35, 20, 50, 10};
    int n = 5;
    
    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cout << "Largest element: " << findMax(arr, n) << endl;  // Output: 50
    
    return 0;
}