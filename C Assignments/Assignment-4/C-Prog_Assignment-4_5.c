//To find maximum between two numbers

#include<stdio.h>
void main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("%d is largest.",a);
    }
    else{
        printf("%d is largest.",b);
    }
}