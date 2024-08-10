//Write a C program to delete a file.

#include <stdio.h>
#include <stdlib.h>

int main() {
    const char *filename = "fileToDelete.txt";  

    if (remove(filename) == 0) {
        printf("File '%s' deleted successfully.\n", filename);
    } else {
        perror("Unable to delete file");
        exit(EXIT_FAILURE);
    }

    return 0;
}
