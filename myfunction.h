
#ifndef MYFUNCTION_H
#define MYFUNCTION_H

#include <stdio.h>
#include <stdbool.h>

// Function declarations
bool isAdamNumber(int n);
int findIndex(int arr[], int size, int element);
void addMatrices(int mat1[], int mat2[], int rows, int cols);

// Function to reverse a number
int reverse(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

// Adam's Number Check
bool isAdamNumber(int n) {
    int originalSquare = n * n;
    int reversedNumber = reverse(n);
    int reversedSquare = reversedNumber * reversedNumber;

    return originalSquare == reverse(reversedSquare);
}

// Finding index in a one-dimensional array
int findIndex(int arr[], int size, int element) {
	int i=0;
    for ( i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i;
        }
    }
    return -1; // Element not found
}

// Addition of two matrices stored as one-dimensional arrays
void addMatrices(int mat1[], int mat2[], int rows, int cols) {
	int i=0,j,size;
    int result[rows * cols];
    for (i=0; i < rows * cols; i++) {
        result[i] = mat1[i] + mat2[i];
    }

    printf("Resultant Matrix:\n");
    for (i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            printf("%d ", result[i * cols + j]);
        }
        printf("\n");
    }
}

#endif

