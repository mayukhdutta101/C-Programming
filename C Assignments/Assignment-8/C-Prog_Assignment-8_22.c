//Write a C program to copy one string to another using pointer.

#include <stdio.h>

void copyString(char *dest, const char *src);

int main() {
    char source[100], destination[100];

    printf("Enter a string: ");
    gets(source);

    copyString(destination, source);

    printf("Original String: %s\n", source);
    printf("Copied String: %s\n", destination);

    return 0;
}

void copyString(char *dest, const char *src) {
    while (*src != '\0') {
        *dest = *src;
        ++dest;
        ++src;
    }

    *dest = '\0';
}
