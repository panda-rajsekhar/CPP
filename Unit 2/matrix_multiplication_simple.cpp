#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;

    // Input dimensions of Matrix 1
    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;

    // Input dimensions of Matrix 2
    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;

    // Check if multiplication is possible
    if (c1 != r2) {
        cout << "Error: Matrix multiplication not possible (columns of A != rows of B)" << endl;
        return 0;
    }

    int A[r1][c1], B[r2][c2], result[r1][c2] = {0};

    // Input first matrix
    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> A[i][j];
        }
    }

    // Input second matrix
    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cin >> B[i][j];
        }
    }

    // Matrix Multiplication
    for (int i = 0; i < r1; i++) { 
        for (int j = 0; j < c2; j++) { 
            for (int k = 0; k < c1; k++) { 
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display result matrix
    cout << "Resultant Matrix after Multiplication:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;

    
}

