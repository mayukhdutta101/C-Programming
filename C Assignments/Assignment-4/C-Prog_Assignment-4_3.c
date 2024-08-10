//Check whether a person is eligible for voting or not

#include<stdio.h>
void main(){
    int age;
    printf("Enter the age: ");
    scanf("%d",&age);
    if(age>=18){
        printf("Eligible for voting!");
    }
    else{
        printf("Not eligible for voting");
    }
}