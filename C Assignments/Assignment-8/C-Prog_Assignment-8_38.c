//Write a C program to print the reverse of a string. 

#include <stdio.h>
#include <string.h>

int main() {
    char inputString[100];

    printf("Enter a string: ");
    scanf("%s", inputString);

    int length = strlen(inputString);

    printf("Reverse of the string: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", inputString[i]);
    }

    printf("\n");

    return 0;
}
