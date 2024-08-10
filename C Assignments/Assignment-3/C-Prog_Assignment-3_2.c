//To find a number is odd or Even

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%2 == 1){
        printf("%d is odd.",n);
    }
    else if(n%2 == 0){
        printf("%d is even.",n);
    }
    return 0;
}