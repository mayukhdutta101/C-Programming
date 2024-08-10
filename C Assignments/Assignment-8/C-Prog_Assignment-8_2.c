//Write a C program to calculate sum of first 20 natural numbers using recursive function.

#include <stdio.h>

int sumOfNaturalNumbers(int n);

int main() {
    int result = sumOfNaturalNumbers(20);

    printf("Sum of first 20 natural numbers: %d\n", result);

    return 0;
}

int sumOfNaturalNumbers(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + sumOfNaturalNumbers(n - 1);
    }
}
