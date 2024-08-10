/*
Write a program to input a binary number in an array and convert into corresponding decimal number.
*/

#include <stdio.h>

int binaryToDecimal(int binaryArray[], int binarySize) {
    int decimalNumber = 0;
    int base = 1;

    for (int i = binarySize - 1; i >= 0; i--) {
        decimalNumber += binaryArray[i] * base;
        base *= 2;
    }

    return decimalNumber;
}

int main() {
    int binaryArray[32];  
    int binarySize;

    printf("Enter the binary number (up to 32 bits): ");
    
    while (1) {
        if (scanf("%1d", &binaryArray[binarySize]) != 1) {
            break;  
        }
        binarySize++;
    }

    int decimalNumber = binaryToDecimal(binaryArray, binarySize);

    printf("Decimal representation: %d\n", decimalNumber);

    return 0;
}
