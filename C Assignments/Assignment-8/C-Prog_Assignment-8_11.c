//Write a C program to find the sum of all the elements of an array using pointers.

#include <stdio.h>

int findSum(int *arr, int size);

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; ++i) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Sum of array elements: %d\n", findSum(arr, size));

    return 0;
}

int findSum(int *arr, int size) {
    int sum = 0;

    for (int i = 0; i < size; ++i) {
        sum += *(arr + i);  
    }

    return sum;
}
