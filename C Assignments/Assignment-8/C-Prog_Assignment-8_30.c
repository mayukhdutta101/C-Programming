//Write a C Program to list all files and sub-directories in a directory.

#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

void listFilesAndSubdirectories(const char *path) {
    DIR *dir = opendir(path);

    if (dir == NULL) {
        perror("Unable to open directory");
        exit(EXIT_FAILURE);
    }

    struct dirent *entry;
    while ((entry = readdir(dir)) != NULL) {
        if (entry->d_type == DT_DIR && strcmp(entry->d_name, ".") != 0 && strcmp(entry->d_name, "..") != 0) {
            printf("Subdirectory: %s\n", entry->d_name);
        } else if (entry->d_type == DT_REG) {
            printf("File: %s\n", entry->d_name);
        }
    }

    // Close the directory
    closedir(dir);
}

int main() {
    const char *directoryPath = ".";  

    listFilesAndSubdirectories(directoryPath);

    return 0;
}
