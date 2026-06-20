#include <iostream>
using namespace std;

void addMatrices(int A[3][3], int B[3][3], int C[3][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void printMatrix(int matrix[3][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    int B[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };
    
    int C[3][3];  // Result matrix
    
    cout << "Matrix A:" << endl;
    printMatrix(A, 3, 3);
    
    cout << "\nMatrix B:" << endl;
    printMatrix(B, 3, 3);
    
    addMatrices(A, B, C, 3, 3);
    
    cout << "\nMatrix C (A + B):" << endl;
    printMatrix(C, 3, 3);
    
    return 0;
}