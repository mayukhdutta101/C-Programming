// C program to calculate the sum first n numbers

#include<stdio.h>
void main(){
    int n,i,ans=0;
    printf("Enter the limit: ");
    scanf("%d",&n);
    for(i = 0; i< n; i++){
        ans += i + 1;
    }
    printf("sum of natural numbers upto %d is: %d",n,ans);
    
}