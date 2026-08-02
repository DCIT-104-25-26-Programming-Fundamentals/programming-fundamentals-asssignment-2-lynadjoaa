#include <iostream>
#include <iomanip> // for setw()
#include <string>
using namespace std;

// Function to print a matrix neatly
void printMatrix(int matrix[10][10], int rows, int cols, string title) {
    cout << title << ":" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << setw(5) << matrix[i][j]; // 5 spaces wide
        }
        cout << endl;
    }
    cout << endl;
}

// PART A: Transpose a Matrix
void transposeMatrix() {
    int matrix[10][10], transpose[10][10];
    int rows, cols;

    cout << "=== PART A: TRANSPOSE ===" << endl;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    // Read matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    // Compute transpose: transpose[j][i] = matrix[i][j]
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    printMatrix(matrix, rows, cols, "Original Matrix");
    printMatrix(transpose, cols, rows, "Transposed Matrix"); // rows and cols swap
}

// PART B: Add Two Matrices
void addMatrices() {
    int A[10][10], B[10][10], sum[10][10];
    int rows, cols;

    cout << "=== PART B: ADDITION ===" << endl;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    cout << "Enter elements for Matrix A:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    cout << "Enter elements for Matrix B:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> B[i][j];
        }
    }

    // Add: sum[i][j] = A[i][j] + B[i][j]
    for (
