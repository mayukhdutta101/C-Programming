/*
Write a program to print the fibonacci series using recursion.
*/

#include <stdio.h>

int fibo(int n)
{
    if (n <= 1)
        return n;
    else
        return fibo(n - 1) + fibo(n - 2);
}

void printfibo(int n)
{
    if (n <= 0)
    {
        printf("Invalid input. Please enter a positive number.\n");
        return;
    }

    printf("fibo series up to %d terms: ", n);

    for (int i = 0; i < n; ++i)
    {
        printf("%d ", fibo(i));
    }

    printf("\n");
}

int main()
{
    int terms;

    printf("Enter the number of terms for the fibo series: ");
    scanf("%d", &terms);

    printfibo(terms);

    return 0;
}
