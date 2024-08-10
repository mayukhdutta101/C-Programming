//To check whether a year is a leap year or not.

#include<stdio.h>
void main(){
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);
    if(year%400 == 0){
        printf("%d is a leap year",year);
    }
    else if(year%100 == 0){
        printf("%d is not a leap year",year);
    }
    else if(year%4 == 0){
        printf("%d is a leap year",year);
    }
    else if(year<0){
        printf("Please enter a correct year.");
    }
    else{
        printf("%d is not a leap year",year);
    }
}