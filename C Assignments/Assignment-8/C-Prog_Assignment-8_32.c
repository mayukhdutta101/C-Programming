//Write a C Program to print contents of file.

#include <stdio.h>
#include <stdlib.h>

void printFileContents(const char *filename) {
    FILE *file = fopen(filename, "r");

    if (file == NULL) {
        perror("Unable to open file");
        exit(EXIT_FAILURE);
    }

    char ch;

    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);
}

int main() {
    const char *filename = "example.txt"; 

    printFileContents(filename);

    return 0;
}
