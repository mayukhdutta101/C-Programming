//Write a C program to concatenate two strings using pointers.

#include <stdio.h>

void concatenateStrings(char *dest, const char *src);

int main() {
    char firstString[100], secondString[100];

    printf("Enter the first string: ");
    gets(firstString);

    printf("Enter the second string: ");
    gets(secondString);

    concatenateStrings(firstString, secondString);

    printf("Concatenated String: %s\n", firstString);

    return 0;
}

void concatenateStrings(char *dest, const char *src) {
    while (*dest != '\0') {
        ++dest;
    }

    while (*src != '\0') {
        *dest = *src;
        ++dest;
        ++src;
    }

    *dest = '\0';
}
