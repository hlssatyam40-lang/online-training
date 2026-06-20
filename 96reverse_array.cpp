#include <iostream>
using namespace std;

void reverseArray(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    
    while (start < end) {
        // Swap elements
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start++;
        end--;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
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
    printArray(arr, n);  // Output: 50 40 30 20 10
    
    return 0;
}