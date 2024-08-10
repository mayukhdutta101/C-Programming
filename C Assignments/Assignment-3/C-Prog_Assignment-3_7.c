//C program to display multiplication table of a number

#include <stdio.h>
int main() {
    int n, i,l;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter the limit: ");
    scanf("%d",&l);

    printf("Multiplication table of %d:\n", n);

    for (i = 1; i <= l; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}