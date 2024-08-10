//Write a C program to search an element in array using pointers.

#include <stdio.h>

int searchElement(int *arr, int size, int key);

int main() {
    int size, key;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; ++i) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    int index = searchElement(array, size, key);

    if (index != -1) {
        printf("%d found at index %d in the array.\n", key, index);
    } else {
        printf("%d not found in the array.\n", key);
    }

    return 0;
}

int searchElement(int *arr, int size, int key) {
    for (int i = 0; i < size; ++i) {
        if (*arr == key) {
            return i;  
        }
        ++arr;  
    }
    return -1;  
}
