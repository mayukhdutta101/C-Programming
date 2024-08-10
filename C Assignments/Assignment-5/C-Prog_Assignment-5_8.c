//Write a C program to print all Armstrong numbers between 1 to n.

#include<stdio.h>
int armstrong(int n){
    int r,sum=0,temp;
    temp=n;
    while (temp>0){
        r=temp%10;
        sum += (r*r*r);
        temp=temp/10;
    }
    if(sum==n){
        return 1;
    }
    else{
        return 0;
    }
}
void main(){
    int limit,i;
    printf("Enter the limit: ");
    scanf("%d",&limit);
    printf("Armstrong numbers from 1 to %d are:- \n",limit);
    for(i=1;i<=limit;i++){
        if(armstrong(i)){
            printf("%d ",i);
        }
    }
}