//Write a C program to check whether a number is prime, Armstrong or perfect number using functions.

#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num < 2) {
        return 0; 
    }
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1;
}

int isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int n = 0;
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }
    originalNum = num;
    while (originalNum != 0) {
        int remainder = originalNum % 10;
        sum += pow(remainder, n);
        originalNum /= 10;
    }
    return (sum == num);
}


int isPerfect(int num) {
    int sum = 1;  
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return (sum == num);
}

int main() {
    int number;
    printf("Enter an integer number: ");
    scanf("%d", &number);

    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    if (isPerfect(number)) {
        printf("%d is a perfect number.\n", number);
    } else {
        printf("%d is not a perfect number.\n", number);
    }

    return 0;
}


