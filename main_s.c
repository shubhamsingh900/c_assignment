#include "myfunction.h"

int main() {
    int option;
    printf("Choose an option:\n1. Adam Number Check\n2. Find Index in Array\n3. Add Two Matrices\n");
    scanf("%d", &option);

    switch (option) {
        case 1: {
            int num;
            printf("Enter a number: ");
            scanf("%d", &num);
            if (isAdamNumber(num)) {
                printf("%d is an Adam Number.\n", num);
            } else {
                printf("%d is not an Adam Number.\n", num);
            }
            break;
        }
        case 2: {
            int size, element,i;
            printf("Enter the size of the array: ");
            scanf("%d", &size);
            int arr[size];
            printf("Enter the elements of the array:\n");
            for ( i = 0; i < size; i++) {
                scanf("%d", &arr[i]);
            }
            printf("Enter the element to find: ");
            scanf("%d", &element);
            int index = findIndex(arr, size, element);
            if (index != -1) {
                printf("Element found at index: %d\n", index);
            } else {
                printf("Element not found in the array.\n");
            }
            break;
        }
        case 3: {
            int rows, cols,i;
            printf("Enter the number of rows and columns: ");
            scanf("%d %d", &rows, &cols);
            int size = rows * cols;
            int mat1[size], mat2[size];

            printf("Enter elements of first matrix:\n");
            for ( i = 0; i < size; i++) {
                scanf("%d", &mat1[i]);
            }

            printf("Enter elements of second matrix:\n");
            for (i = 0; i < size; i++) {
                scanf("%d", &mat2[i]);
            }

            addMatrices(mat1, mat2, rows, cols);
            break;
        }
        default:
            printf("Invalid option!\n");
    }

    return 0;
}

