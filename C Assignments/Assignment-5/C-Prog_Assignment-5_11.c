/*C program to print
    0   
   01
  010
 0101
01010
    */

#include<stdio.h>
void main(){
    int i,j,k;
    for(i=1;i<=5;i++){
        for(j=1;j<=5-i;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            if(k%2==1){
                printf("0");
            }
            else{
                printf("1");
            }
        }
        printf("\n");
    }
}