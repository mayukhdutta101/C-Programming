//To check whether a character is alphabet or not.

#include<stdio.h>
void main(){
    char s;
    printf("Enter a character: ");
    scanf("%s",&s);
    if((s>='a' && s<='z') || (s>='A' && s<='Z')){
        printf("%c is an aplphabet.",s);
    } 
    else{
        printf("%c is not an alphabet.",s);
    }
}