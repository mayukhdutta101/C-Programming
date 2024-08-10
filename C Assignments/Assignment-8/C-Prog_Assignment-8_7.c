//Write a C program to find maximum and minimum between two numbers using functions.

#include <stdio.h>

int findMaximum(int a, int b);
int findMinimum(int a, int b);

int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Maximum: %d\n", findMaximum(num1, num2));
    printf("Minimum: %d\n", findMinimum(num1, num2));

    return 0;
}

int findMaximum(int a, int b) {
    return (a > b) ? a : b;
}

int findMinimum(int a, int b) {
    return (a < b) ? a : b;
}
