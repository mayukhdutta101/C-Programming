//Write a C program to add two numbers using pointers.

#include <stdio.h>

int addNumbers(int *a, int *b);

int main() {
    int num1, num2, sum;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    sum = addNumbers(&num1, &num2);

    printf("Sum: %d\n", sum);

    return 0;
}


int addNumbers(int *a, int *b) {
    return (*a) + (*b);
}
