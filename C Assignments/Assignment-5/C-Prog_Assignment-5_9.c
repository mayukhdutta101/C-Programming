/*C program to print the following pattern
*****
****
***
**
*                                           */

#include<stdio.h>
void main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5-i+1;j++){
            printf("*");
        }
        printf("\n");
    }
}