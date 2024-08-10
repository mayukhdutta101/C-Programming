//Write a program to transpose a matrix.

#include <stdio.h>

void transposeMatrix(int mat[][100], int transposedMat[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposedMat[j][i] = mat[i][j];
        }
    }
}

void displayMatrix(int mat[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat[100][100], transposedMat[100][100];
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    printf("Enter elements for the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }

    transposeMatrix(mat, transposedMat, rows, cols);

    printf("\nOriginal Matrix:\n");
    displayMatrix(mat, rows, cols);

    printf("\nTransposed Matrix:\n");
    displayMatrix(transposedMat, cols, rows);

    return 0;
}
