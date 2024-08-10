//C program to find the factorial of a number
#include<stdio.h>
int main(){
   int n,i,fact=1;
   printf("Enter the no: ");
   scanf("%d",&n);
   if(n<0){
    printf("Factorial is not possible");
   }
   else {
   for(i=1; i<=n; ++i){
        fact *= i;
   }
   }
   printf("Factorial of %d is: %d",n,fact);
   return 0;
}
