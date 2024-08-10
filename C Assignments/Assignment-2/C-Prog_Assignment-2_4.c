//Write a C Program to swap first and last digit of a number

#include <stdio.h>
#include <math.h>

int main() {
    int n, i, temp, firstdigit, lastdigit, count = 0, ans;
    printf("Enter the number: ");
    scanf("%d", &n); 
    lastdigit = n % 10;
    temp = n;
    while (n > 0) {
        n /= 10;
        count++;
    }
    firstdigit = temp / pow(10, count - 1);
    ans = lastdigit * pow(10, count - 1);
    ans += temp % (int)pow(10, count - 1);
    ans -= lastdigit;
    ans += firstdigit;
    printf("\n Number after swapping first and last digit: %d", ans);
    return 0;
}