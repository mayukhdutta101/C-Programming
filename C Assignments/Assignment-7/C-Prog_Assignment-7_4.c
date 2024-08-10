/*
Write a program to delete an element from a particular position of an array.
*/

#include <stdio.h>

int main() {
    int array[100];  
    int size, position;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the position to delete (1 to %d): ", size);
    scanf("%d", &position);

    if (position < 1 || position > size) {
        printf("Invalid position.\n");
        return 1;  // Exit with an error code
    }

    for (int i = position - 1; i < size - 1; i++) {
        array[i] = array[i + 1];
    }

    size--;

    printf("Array after deletion:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
