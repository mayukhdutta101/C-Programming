//Write a C program to swap two arrays using pointers.

#include <stdio.h>

void swapArrays(int *arr1, int *arr2, int size);

int main() {
    int size;

    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int array1[size];
    int array2[size];

    printf("Enter elements for the first array:\n");
    for (int i = 0; i < size; ++i) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array1[i]);
    }

    printf("\nEnter elements for the second array:\n");
    for (int i = 0; i < size; ++i) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array2[i]);
    }

    swapArrays(array1, array2, size);

    printf("\nArrays after swapping:\n");

    printf("\nFirst Array:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", array1[i]);
    }

    printf("\n\nSecond Array:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", array2[i]);
    }

    return 0;
}

void swapArrays(int *arr1, int *arr2, int size) {
    for (int i = 0; i < size; ++i) {
        int temp = *(arr1 + i);
        *(arr1 + i) = *(arr2 + i);
        *(arr2 + i) = temp;
    }
}
