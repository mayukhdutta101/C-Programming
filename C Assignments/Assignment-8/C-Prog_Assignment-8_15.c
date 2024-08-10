//Write a C program to copy one array to another using pointer.

#include <stdio.h>

void copyArray(int *source, int *destination, int size);

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int sourceArray[size];
    int destinationArray[size];

    printf("Enter the elements of the source array:\n");
    for (int i = 0; i < size; ++i) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &sourceArray[i]);
    }

    copyArray(sourceArray, destinationArray, size);

    printf("\nSource Array:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", sourceArray[i]);
    }

    printf("\n\nCopied Array:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", destinationArray[i]);
    }

    return 0;
}

void copyArray(int *source, int *destination, int size) {
    for (int i = 0; i < size; ++i) {
        *(destination + i) = *(source + i);
    }
}
