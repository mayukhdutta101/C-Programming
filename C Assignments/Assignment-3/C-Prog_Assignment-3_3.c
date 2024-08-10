//C program to relate two integers using =,<,> symbols

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("%d > %d",a,b);
    }
    else if(a<b){
        printf("%d < %d",a,b);
    }
    else if(a==b){
        printf("%d = %d",a,b);
    }
    return 0;
}