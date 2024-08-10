/*
Write a C program to read and print an Employee’s Details using Structure.
*/

#include <stdio.h>

struct Employee {
    int empId;
    char name[50];
    char designation[50];
    float salary;
};

void readEmployeeDetails(struct Employee *employee) {
    printf("Enter Employee ID: ");
    scanf("%d", &employee->empId);

    printf("Enter Name: ");
    scanf("%s", employee->name);

    printf("Enter Designation: ");
    scanf("%s", employee->designation);

    printf("Enter Salary: ");
    scanf("%f", &employee->salary);
}

void printEmployeeDetails(const struct Employee *employee) {
    printf("\nEmployee Details:\n");
    printf("Employee ID: %d\n", employee->empId);
    printf("Name: %s\n", employee->name);
    printf("Designation: %s\n", employee->designation);
    printf("Salary: %.2f\n", employee->salary);
}

int main() {
    struct Employee employee;

    readEmployeeDetails(&employee);

    printEmployeeDetails(&employee);

    return 0;
}
