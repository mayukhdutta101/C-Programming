//Write a C program to find power of any number using recursion.

#include <stdio.h>

double power(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    } else if (exponent > 0) {
        return base * power(base, exponent - 1);
    } else {
        return 1.0 / (base * power(base, -exponent - 1));
    }
}

int main() {
    int base, exponent;

    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    printf("%d^%d = %.2lf\n", base, exponent, power(base, exponent));

    return 0;
}

