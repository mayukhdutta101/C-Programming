//Write a C program to read an integer number and print the reverse of that number using recursion.

#include <stdio.h>

int reverseNumber(int n);

int main() {
    int number;

    printf("Enter an integer number: ");
    scanf("%d", &number);

    printf("Reverse of the number: %d\n", reverseNumber(number));

    return 0;
}

int reverseNumber(int n) {
    if (n == 0) {
        return 0;
    } else {
        return (n % 10) + reverseNumber(n / 10) * 10;
    }
}
