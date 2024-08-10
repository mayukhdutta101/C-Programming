/*
Write a C program to read RollNo, Name, Address, Age & average-marks of 12 students in the
BCT class and display the details from function.
*/

#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    char address[100];
    int age;
    float averageMarks;
};

void readAndDisplayStudentDetails(struct Student students[], int numStudents) {
    for (int i = 0; i < numStudents; ++i) {
        printf("\nStudent %d details:\n", i + 1);

        printf("Enter Roll No: ");
        scanf("%d", &students[i].rollNo);

        printf("Enter Name: ");
        scanf("%s", students[i].name);

        printf("Enter Address: ");
        scanf("%s", students[i].address);

        printf("Enter Age: ");
        scanf("%d", &students[i].age);

        printf("Enter Average Marks: ");
        scanf("%f", &students[i].averageMarks);
    }

    printf("\nStudent Details:\n");
    for (int i = 0; i < numStudents; ++i) {
        printf("\nRoll No: %d\n", students[i].rollNo);
        printf("Name: %s\n", students[i].name);
        printf("Address: %s\n", students[i].address);
        printf("Age: %d\n", students[i].age);
        printf("Average Marks: %.2f\n", students[i].averageMarks);
        printf("------------------------------\n");
    }
}

int main() {
    struct Student students[12];

    readAndDisplayStudentDetails(students, 12);

    return 0;
}
