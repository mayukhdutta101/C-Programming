//Write a C program to find all factors of a number

#include<stdio.h>
void main(){
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Factors of %d :- \n",n);
    for(i=1;i<n;i++){
        if(n%i == 0){
            printf("%d ",i);
        }
    }
}