//Write a C program to add two 2 X 2 matrix using pointers.

#include <stdio.h>

void addMatrices(int mat1[][2], int mat2[][2], int result[][2]);

int main() {
    int mat1[2][2], mat2[2][2], result[2][2];

    printf("Enter elements for the first matrix (2x2):\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("Enter element at position [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\nEnter elements for the second matrix (2x2):\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("Enter element at position [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat2[i][j]);
        }
    }

    addMatrices(mat1, mat2, result);

    printf("\nResultant Matrix (Sum of Matrices):\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void addMatrices(int mat1[][2], int mat2[][2], int result[][2]) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            *(*(result + i) + j) = *(*(mat1 + i) + j) + *(*(mat2 + i) + j);
        }
    }
}
