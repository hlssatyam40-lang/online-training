#include <iostream>
using namespace std;

int findSecondLargest(int arr[], int n) {
    if (n < 2) {
        cout << "Array should have at least 2 elements" << endl;
        return -1;
    }
    
    int largest = arr[0];
    int secondLargest = -1;
    
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;  // Previous largest becomes second
            largest = arr[i];
        } 
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    
    return secondLargest;
}

int main() {
    int arr[] = {10, 25, 5, 40, 15};
    int n = 5;
    
    cout << "Second largest element: " << findSecondLargest(arr, n) << endl;  
    // Output: 25
    
    return 0;
}