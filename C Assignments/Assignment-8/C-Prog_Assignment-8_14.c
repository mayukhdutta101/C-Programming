//Write a C program to input and print array elements using pointer.

#include <stdio.h>

void inputArray(int *arr, int size);
void printArray(int *arr, int size);

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    inputArray(arr, size);

    printf("\nArray elements:\n");
    printArray(arr, size);

    return 0;
}

void inputArray(int *arr, int size) {
    for (int i = 0; i < size; ++i) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", arr + i);  
    }
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d ", *(arr + i));  
    }
    printf("\n");
}
