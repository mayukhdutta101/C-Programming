//Write a program to add the elements of each row and each column of a matrix.

#include <stdio.h>
void sumOfRows(int mat[][100], int rowSums[], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        rowSums[i] = 0; \
        for (int j = 0; j < cols; j++) {
            rowSums[i] += mat[i][j];
        }
    }
}
void sumOfColumns(int mat[][100], int colSums[], int rows, int cols) {
    for (int j = 0; j < cols; j++) {
        colSums[j] = 0; \
        for (int i = 0; i < rows; i++) {
            colSums[j] += mat[i][j];
        }
    }
}
void displayRowSums(int rowSums[], int rows) {
    printf("Sum of each row:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d: %d\n", i + 1, rowSums[i]);
    }
}
void displayColumnSums(int colSums[], int cols) {
    printf("\nSum of each column:\n");
    for (int j = 0; j < cols; j++) {
        printf("Column %d: %d\n", j + 1, colSums[j]);
    }
}

int main() {
    int mat[100][100];
    int rowSums[100], colSums[100];
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
    sumOfRows(mat, rowSums, rows, cols);
    sumOfColumns(mat, colSums, rows, cols);
    displayRowSums(rowSums, rows);
    displayColumnSums(colSums, cols);
    return 0;
}
