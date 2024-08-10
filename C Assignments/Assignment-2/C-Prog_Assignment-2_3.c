//C program to print the first digit and the last digit of a number

#include<stdio.h>

int main(){
    int i, num=0, firstdigit, lastdigit;
    printf("Enter the number: ");
    scanf("%d",&i);
    lastdigit= i % 10;
    while(i>=10){
        firstdigit=i / 10;
    }
    firstdigit=i;
    printf("First digit is %d\n Last Digit is %d\n",firstdigit,lastdigit);
    return 0;
}