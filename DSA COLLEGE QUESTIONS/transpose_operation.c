// Write a c program that create two 2d arrays named arr1 and arr2 dynamically from user; perform array transpose operation on arr1 
//and display the result; perform both matrix multiplication and addition operation between arr1 and arr2 and display the results.
#include <stdio.h>
#include <stdlib.h>

// Function to allocate a 2D array dynamically
int** allocateMatrix(int rows, int cols) {
    int **matrix = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int*)malloc(cols * sizeof(int));
    }
    return matrix;
}

// Function to free allocated memory
void freeMatrix(int **matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

// Function to take matrix input
void inputMatrix(int **matrix, int rows, int cols, char name[]) {
    printf("Enter elements for %s (%d x %d):\n", name, rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%s[%d][%d]: ", name, i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display matrix
void displayMatrix(int **matrix, int rows, int cols, char msg[]) {
    printf("%s\n", msg);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to transpose a matrix
int** transposeMatrix(int **matrix, int rows, int cols) {
    int **transpose = allocateMatrix(cols, rows);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    return transpose;
}

// Function to add two matrices
int** addMatrices(int **a, int **b, int rows, int cols) {
    int **sum = allocateMatrix(rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    return sum;
}

// Function to multiply two matrices
int** multiplyMatrices(int **a, int **b, int r1, int c1, int c2) {
    int **product = allocateMatrix(r1, c2);
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            product[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return product;
}

int main() {
    int r1, c1, r2, c2;

    // Input dimensions
    printf("Enter rows and cols for arr1: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and cols for arr2: ");
    scanf("%d %d", &r2, &c2);

    // Allocate and input arr1
    int **arr1 = allocateMatrix(r1, c1);
    inputMatrix(arr1, r1, c1, "arr1");

    // Allocate and input arr2
    int **arr2 = allocateMatrix(r2, c2);
    inputMatrix(arr2, r2, c2, "arr2");

    // Transpose of arr1
    int **transpose = transposeMatrix(arr1, r1, c1);
    displayMatrix(transpose, c1, r1, "Transpose of arr1:");

    // Addition (only if dimensions match)
    if (r1 == r2 && c1 == c2) {
        int **sum = addMatrices(arr1, arr2, r1, c1);
        displayMatrix(sum, r1, c1, "Sum of arr1 and arr2:");
        freeMatrix(sum, r1);
    } else {
        printf("Addition not possible! Dimensions must be equal.\n");
    }

    // Multiplication (only if c1 == r2)
    if (c1 == r2) {
        int **product = multiplyMatrices(arr1, arr2, r1, c1, c2);
        displayMatrix(product, r1, c2, "Product of arr1 and arr2:");
        freeMatrix(product, r1);
    } else {
        printf("Multiplication not possible! Columns of arr1 must equal rows of arr2.\n");
    }

    // Free allocated memory
    freeMatrix(arr1, r1);
    freeMatrix(arr2, r2);
    freeMatrix(transpose, c1);

    return 0;
}
