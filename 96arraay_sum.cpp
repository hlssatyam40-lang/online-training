#include <iostream>
using namespace std;

int arraySum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {10, 25, 5, 40, 15};
    int n = 5;
    
    cout << "Sum of array: " << arraySum(arr, n) << endl;  // Output: 95
    return 0;
}