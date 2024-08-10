//Write a C Program to copy contents of one file to another file.

#include <stdio.h>
#include <stdlib.h>

void copyFile(const char *sourceFilename, const char *destinationFilename) {
    FILE *sourceFile = fopen(sourceFilename, "r");
    FILE *destinationFile = fopen(destinationFilename, "w");

    if (sourceFile == NULL || destinationFile == NULL) {
        perror("Unable to open file");
        exit(EXIT_FAILURE);
    }

    char ch;

    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    fclose(sourceFile);
    fclose(destinationFile);
}

int main() {
    const char *sourceFilename = "source.txt";       
    const char *destinationFilename = "destination.txt";  

    copyFile(sourceFilename, destinationFilename);

    printf("File copied successfully.\n");

    return 0;
}
