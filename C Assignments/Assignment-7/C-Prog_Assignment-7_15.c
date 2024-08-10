//Write a program to perform multiplication of two matrices.

#include <stdio.h>

void multiplyMatrices(int mat1[][100], int mat2[][100], int result[][100], int rows1, int cols1, int cols2) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0; 

            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
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
    int mat1[100][100], mat2[100][100], result[100][100];
    int rows1, cols1, rows2, cols2;

    printf("Enter the number of rows for the first matrix: ");
    scanf("%d", &rows1);
    printf("Enter the number of columns for the first matrix: ");
    scanf("%d", &cols1);

    printf("Enter the number of rows for the second matrix: ");
    scanf("%d", &rows2);
    printf("Enter the number of columns for the second matrix: ");
    scanf("%d", &cols2);

    if (cols1 != rows2) {
        printf("Error: Matrix multiplication not possible. Number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return 1; 
    }

    printf("Enter elements for the first matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements for the second matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &mat2[i][j]);
        }
    }

    multiplyMatrices(mat1, mat2, result, rows1, cols1, cols2);

    printf("\nFirst Matrix:\n");
    displayMatrix(mat1, rows1, cols1);

    printf("\nSecond Matrix:\n");
    displayMatrix(mat2, rows2, cols2);

    printf("\nResult Matrix (Matrix Multiplication):\n");
    displayMatrix(result, rows1, cols2);

    return 0;
}
