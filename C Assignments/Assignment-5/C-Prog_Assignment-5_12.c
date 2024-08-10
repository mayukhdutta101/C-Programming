/*
C program to print the pattern
        1
      1 2 3
    1 2 3 4 5
  1 2 3 4 5 6 7
1 2 3 4 5 6 7 8 9
*/

#include<stdio.h>
void main(){
    int i,j,k,n=1;
    for(i=1;i<=5;i++){
        for(j=1;j<=5-i;j++){
            printf(" ");
        }
        for(k=1;k<=n;k++){
            printf("%d",k);
        }
        n += 2;
        printf("\n");
    }
}