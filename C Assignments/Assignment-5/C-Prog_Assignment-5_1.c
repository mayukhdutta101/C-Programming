//Write a C program to find power of a number using for loop.

#include<stdio.h>
void main(){
    int base,exponent,power=1,i;
    printf("Enter the base: ");
    scanf("%d",&base);
    printf("Enter the exponent: ");
    scanf("%d",&exponent);
    for(i=1;i<=exponent;i++){
        power=power*base;
    }
    printf("%d ^ %d is %d",base,exponent,power);
}