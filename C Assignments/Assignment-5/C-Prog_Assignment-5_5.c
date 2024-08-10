//Write a C program to find LCM of two numbers.

#include<stdio.h>
void main(){
     int a,b,max,temp=1;
     printf("Enter two numbers: ");
     scanf("%d %d",&a,&b);
     max = (a>b)?a:b;
     while(temp){
        if(max%a==0 && max%b==0){
            printf("LCM of %d and %d is: %d",a,b,max);
            break;
        }
        ++max;
    } 
}