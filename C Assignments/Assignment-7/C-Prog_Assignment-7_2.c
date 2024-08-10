/*
Write a program which stores the marks of subject Mathematics and English of n number of students in an array and then prints their individual total marks.
*/

#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    int mathMarks[n];
    int englishMarks[n];

    for (int i = 0; i < n; i++) {
        printf("Enter Mathematics marks for student %d: ", i + 1);
        scanf("%d", &mathMarks[i]);

        printf("Enter English marks for student %d: ", i + 1);
        scanf("%d", &englishMarks[i]);
    }

    printf("\nTotal marks for students:\n");
    for (int i = 0; i < n; i++) {
        int totalMarks = mathMarks[i] + englishMarks[i];
        printf("Student %d: Total Marks = %d\n", i + 1, totalMarks);
    }

    return 0;
}
