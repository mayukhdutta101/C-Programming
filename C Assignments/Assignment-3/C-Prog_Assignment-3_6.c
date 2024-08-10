//C program to add numbers until the user enters 0

#include<stdio.h>
int main(){
    int n,sum=0;
    while(1){
        printf("\nEnter a number:");
        scanf("%d",&n);
        sum += n;
        if(n == 0){
            break;
        }
    }
    printf("\nSum: %d",sum);
    return 0;
}