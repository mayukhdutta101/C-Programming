//C Program to print all the prime numbers between 1 and N 

#include<stdio.h>

int checkprime(int num)    //Checking if the number is a prime number or not
{  
    if(num<=1){
        return 0;
    }
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}

void printprime(int n)     //Printing the prime numbers from 1 to N
{ 
    printf("The prime numbers between 1 and %d are: ",n);
    for(int i=2;i<=n;i++){
        if(checkprime(i)){
                printf(" %d ",i);
        }
    }
    printf("\n");
}

int main(){
    int n;
    printf("Enter the limit: ");
    scanf("%d",&n);
    printprime(n);
    return 0;
}