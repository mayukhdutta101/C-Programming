//Write a C program to find length of string using pointers

#include <stdio.h>

int findStringLength(const char *str);

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);

    printf("Length of the string: %d\n", findStringLength(str));

    return 0;
}

int findStringLength(const char *str) {
    const char *ptr = str; 

    while (*ptr != '\0') {
        ++ptr;
    }
    return (int)(ptr - str);
}
