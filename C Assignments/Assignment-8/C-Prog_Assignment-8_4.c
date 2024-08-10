/*
Write a C program to swap two integers using call by value and call by reference methods of passing arguments to a function.
*/

#include <stdio.h>

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    printf("\nOriginal values:\n");
    printf("First integer: %d\n", num1);
    printf("Second integer: %d\n", num2);

    swapByValue(num1, num2);
    printf("\nAfter swap using call by value:\n");
    printf("First integer: %d\n", num1);
    printf("Second integer: %d\n", num2);

    swapByReference(&num1, &num2);
    printf("\nAfter swap using call by reference:\n");
    printf("First integer: %d\n", num1);
    printf("Second integer: %d\n", num2);

    return 0;
}

