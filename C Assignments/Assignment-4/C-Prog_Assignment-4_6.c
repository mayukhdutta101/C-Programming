//To check whether a number negative,positive or zero

#include<stdio.h>
void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n<0){
        printf("%d is negative.",n);
    }
    else if(n==0)
    {
        printf("%d is zero.",n);
    }
    else{
        printf("%d is positive.",n);
    }
}