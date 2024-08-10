/*
Write a program to convert a decimal number taken as input from user to corresponding binary number and store the result in an array.
*/

#include <stdio.h>

void decimalToBinary(int decimalNumber, int binaryArray[], int *binarySize) {
    *binarySize = 0;

    while (decimalNumber > 0) {
        binaryArray[*binarySize] = decimalNumber % 2;
        decimalNumber /= 2;
        (*binarySize)++;
    }
}

int main() {
    int decimalNumber;
    int binaryArray[32];  
    int binarySize;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    decimalToBinary(decimalNumber, binaryArray, &binarySize);

    printf("Binary representation: ");
    for (int i = binarySize - 1; i >= 0; i--) {
        printf("%d", binaryArray[i]);
    }

    return 0;
}
