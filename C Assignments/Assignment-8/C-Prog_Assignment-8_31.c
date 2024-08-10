//Write a C Program to count number of lines in a file.

#include <stdio.h>
#include <stdlib.h>

int countLines(const char *filename) {
    FILE *file = fopen(filename, "r");

    if (file == NULL) {
        perror("Unable to open file");
        exit(EXIT_FAILURE);
    }

    int lineCount = 0;
    char ch;

    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            lineCount++;
        }
    }

    fclose(file);

    return lineCount;
}

int main() {
    const char *filename = "example.txt"; 

    int lines = countLines(filename);

    printf("Number of lines in the file '%s': %d\n", filename, lines);

    return 0;
}
