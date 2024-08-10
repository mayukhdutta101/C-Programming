//Write a C program to reverse an array using pointers.

#include <stdio.h>

void reverseArray(int *arr, int size);

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; ++i) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    reverseArray(array, size);

    printf("\nArray after reversing:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }

    return 0;
}

void reverseArray(int *arr, int size) {
    int *start = arr;        
    int *end = arr + size - 1;  
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;

        ++start;
        --end;
    }
}
