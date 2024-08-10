//Write a C program to multiply two 2 X 2 matrix using pointers.

#include <stdio.h>

void multiplyMatrices(int mat1[][2], int mat2[][2], int result[][2]);

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

    multiplyMatrices(mat1, mat2, result);

    printf("\nResultant Matrix (Product of Matrices):\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void multiplyMatrices(int mat1[][2], int mat2[][2], int result[][2]) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            *(*(result + i) + j) = (*(*(mat1 + i) + 0) * *(*(mat2 + 0) + j)) +
                                   (*(*(mat1 + i) + 1) * *(*(mat2 + 1) + j));
        }
    }
}
