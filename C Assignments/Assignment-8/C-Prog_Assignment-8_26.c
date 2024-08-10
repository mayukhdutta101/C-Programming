/*
Define a structure “complex” (typedef) to read two complex numbers and perform addition, subtraction of these two complex numbers and display the result.
*/

#include <stdio.h>

typedef struct {
    float real;
    float imag;
} complex;

complex addComplex(complex num1, complex num2) {
    complex result;
    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;
    return result;
}

complex subtractComplex(complex num1, complex num2) {
    complex result;
    result.real = num1.real - num2.real;
    result.imag = num1.imag - num2.imag;
    return result;
}

int main() {
    complex num1, num2, sum, difference;

    printf("Enter real and imaginary parts for the first complex number:\n");
    printf("Real: ");
    scanf("%f", &num1.real);
    printf("Imaginary: ");
    scanf("%f", &num1.imag);

    printf("\nEnter real and imaginary parts for the second complex number:\n");
    printf("Real: ");
    scanf("%f", &num2.real);
    printf("Imaginary: ");
    scanf("%f", &num2.imag);

    sum = addComplex(num1, num2);
    difference = subtractComplex(num1, num2);

    printf("\nSum: %.2f + %.2fi\n", sum.real, sum.imag);
    printf("Difference: %.2f - %.2fi\n", difference.real, difference.imag);

    return 0;
}
