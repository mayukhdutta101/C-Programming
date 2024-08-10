/*
Write a program to insert an element in an array in a particular position.
*/

#include <stdio.h>

int main() {
    int array[100];  
    int size, position, newValue;

   
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the position to insert (1 to %d): ", size + 1);
    scanf("%d", &position);

    if (position < 1 || position > size + 1) {
        printf("Invalid position.\n");
        return 1;  
    }

    printf("Enter the value to insert: ");
    scanf("%d", &newValue);

    for (int i = size; i >= position; i--) {
        array[i] = array[i - 1];
    }

    array[position - 1] = newValue;

    size++;

    printf("Array after insertion:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
