//Write a program to check whether a matrix is sparse matrix or not

#include <stdio.h>

int isSparseMatrix(int mat[][100], int rows, int cols) {
    int countZeros = 0;
    int threshold = (rows * cols) / 2; 

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (mat[i][j] == 0) {
                countZeros++;
            }
        }
    }

    return countZeros > threshold;
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
    int mat[100][100];
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

    if (isSparseMatrix(mat, rows, cols)) {
        printf("\nThe given matrix is a Sparse Matrix.\n");
    } else {
        printf("\nThe given matrix is not a Sparse Matrix.\n");
    }

    printf("\nThe matrix entered is:\n");
    displayMatrix(mat, rows, cols);

    return 0;
}
