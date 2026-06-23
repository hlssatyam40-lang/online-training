#include <iostream>
using namespace std;

void reverseArray(int *arr, int n) {
    int *start = arr;              // Pointer to first element
    int *end = arr + (n - 1);      // Pointer to last element
    
    while (start < end) {
        // Swap using pointers
        int temp = *start;
        *start = *end;
        *end = temp;
        
        start++;   // Move start forward
        end--;     // Move end backward
    }
}

void printArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    
    cout << "Original array: ";
    printArray(arr, n);
    
    reverseArray(arr, n);
    
    cout << "Reversed array: ";
    printArray(arr, n);
    
    return 0;
}