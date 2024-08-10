//Write a C program to check whether a number is even or odd using functions.

#include <stdio.h>

int checkEvenOdd(int num);

int main() {
    int number;

    printf("Enter an integer number: ");
    scanf("%d", &number);

    if (checkEvenOdd(number) == 1) {
        printf("%d is an even number.\n", number);
    } else {
        printf("%d is an odd number.\n", number);
    }

    return 0;
}

int checkEvenOdd(int num) {
    return (num % 2 == 0) ? 1 : 0;
}
