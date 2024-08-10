//Write a C program to find the frequency of each digit in a given number

#include<stdio.h>

int main(){
    int freq[10] = {0};
    int n,i;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n>0){
        freq[n%10]++;
        n /= 10;
    }
    printf("\n Frequency of each digit is: \n");
    for(i=0;i<10;i++){
        printf("\n Frequency of %d = %d",i,freq[i]);
    }
    return 0;
}