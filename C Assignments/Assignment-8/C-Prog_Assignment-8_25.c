/*
Write a C program to create a structure named company which has name, address, phone and noOfEmployee as member variables. Read name of company, its address, phone and noOfEmployee. Finally display these members‟ value.
*/

#include <stdio.h>

struct company {
    char name[50];
    char address[100];
    char phone[15];
    int noOfEmployee;
};

int main() {
    struct company myCompany;

    printf("Enter company name: ");
    scanf("%s", myCompany.name);

    printf("Enter company address: ");
    scanf("%s", myCompany.address);

    printf("Enter company phone: ");
    scanf("%s", myCompany.phone);

    printf("Enter number of employees: ");
    scanf("%d", &myCompany.noOfEmployee);

    printf("\nCompany Information:\n");
    printf("Name: %s\n", myCompany.name);
    printf("Address: %s\n", myCompany.address);
    printf("Phone: %s\n", myCompany.phone);
    printf("Number of Employees: %d\n", myCompany.noOfEmployee);

    return 0;
}
