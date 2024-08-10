//Display a number and see if it is negative

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n<0){
        printf("%d is negative.",n);
    }
    else{
        printf("%d is positive.",n);
    }
    return 0;
}