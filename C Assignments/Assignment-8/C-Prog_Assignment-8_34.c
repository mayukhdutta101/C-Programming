//Write a C Program to merge contents of two files into a third file.

#include <stdio.h>
#include <stdlib.h>

void mergeFiles(const char *file1, const char *file2, const char *mergedFile) {
    FILE *sourceFile1 = fopen(file1, "r");
    FILE *sourceFile2 = fopen(file2, "r");
    FILE *mergedFilePtr = fopen(mergedFile, "w");

    if (sourceFile1 == NULL || sourceFile2 == NULL || mergedFilePtr == NULL) {
        perror("Unable to open file");
        exit(EXIT_FAILURE);
    }

    char ch;

    while ((ch = fgetc(sourceFile1)) != EOF) {
        fputc(ch, mergedFilePtr);
    }

    while ((ch = fgetc(sourceFile2)) != EOF) {
        fputc(ch, mergedFilePtr);
    }

    fclose(sourceFile1);
    fclose(sourceFile2);
    fclose(mergedFilePtr);
}

int main() {
    const char *file1 = "file1.txt";        
    const char *file2 = "file2.txt";        
    const char *mergedFile = "merged.txt";  

    mergeFiles(file1, file2, mergedFile);

    printf("Files merged successfully.\n");

    return 0;
}
