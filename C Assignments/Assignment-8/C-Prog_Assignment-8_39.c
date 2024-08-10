//Write a C program to find the 3rd element of a string

#include <stdio.h>

int main() {
    char inputString[100];

    printf("Enter a string: ");
    scanf("%s", inputString);

    if (strlen(inputString) < 3) {
        printf("The string is too short to find the 3rd element.\n");
    } else {
        char thirdElement = inputString[2];
        printf("The 3rd element of the string is: %c\n", thirdElement);
    }

    return 0;
}
