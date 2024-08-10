//Write a program to check whether a matrix is identity matrix or not.

#include <stdio.h>

int isIdentityMatrix(int mat[][100], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if ((i == j && mat[i][j] != 1) || (i != j && mat[i][j] != 0)) {
                return 0; 
            }
        }
    }
    return 1; 
}

void displayMatrix(int mat[][100], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat[100][100];
    int size;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    printf("Enter elements for the matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }

    if (isIdentityMatrix(mat, size)) {
        printf("\nThe given matrix is an Identity Matrix.\n");
    } else {
        printf("\nThe given matrix is not an Identity Matrix.\n");
    }

    printf("\nThe matrix entered is:\n");
    displayMatrix(mat, size);

    return 0;
}
