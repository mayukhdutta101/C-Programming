//Write a C program to find all prime factors of a number.

#include <stdio.h>
void main(){
    int n,i,j,prime;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Prime Factors of %d are: ",n);
    for(i=2; i<=n; i++){
        if(n%i==0){
            prime=1;
            for(j=2; j<=i/2; j++){
                if(i%j==0){
                    prime=0;
                    break;
                }
            }
            if(prime==1){
                printf("%d ",i);
            }
        }
    }
}