//Write a C program to compare two strings using pointers.

#include <stdio.h>

int compareStrings(const char *str1, const char *str2);

int main() {
    char firstString[100], secondString[100];

    printf("Enter the first string: ");
    gets(firstString);

    printf("Enter the second string: ");
    gets(secondString);

    int result = compareStrings(firstString, secondString);

    if (result == 0) {
        printf("Both strings are equal.\n");
    } else if (result < 0) {
        printf("First string is lexicographically smaller than the second string.\n");
    } else {
        printf("First string is lexicographically larger than the second string.\n");
    }

    return 0;
}

int compareStrings(const char *str1, const char *str2) {
    while (*str1 != '\0' && *str2 != '\0' && *str1 == *str2) {
        ++str1;
        ++str2;
    }

    return *str1 - *str2;
}
