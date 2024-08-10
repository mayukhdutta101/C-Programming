//Write a C program to swap value of two variables using pointer.

#include <stdio.h>

void swap(int *a, int *b);

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("\nOriginal values:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    swap(&num1, &num2);

    printf("\nAfter swapping using pointers:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    return 0;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
