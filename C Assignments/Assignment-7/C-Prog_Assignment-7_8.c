//Write a program for deleting duplicate elements in an array.

#include <stdio.h>

int removeDuplicates(int array[], int n) {
    if (n == 0 || n == 1) {
        return n; 
    }

    int temp[n]; 
    int j = 0;

    for (int i = 0; i < n - 1; i++) {
        if (array[i] != array[i + 1]) {
            temp[j++] = array[i];
        }
    }

    temp[j++] = array[n - 1];

    for (int i = 0; i < j; i++) {
        array[i] = temp[i];
    }

    return j; 
}

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int array[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int newSize = removeDuplicates(array, n);

    printf("Array after removing duplicates:\n");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
