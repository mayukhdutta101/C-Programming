//Write a program to find second highest number from the array without using sorting.

#include <stdio.h>

int main() {
    int n, array[n];;
    int highest = array[0];
    int secondHighest = array[1];
    printf("Enter the size of the array(min:2): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    for (int i = 2; i < n; i++) {
        if (array[i] > highest) {
            secondHighest = highest;
            highest = array[i];
        } else if (array[i] > secondHighest && array[i] != highest) {
            secondHighest = array[i];
        }
    }
    printf("Second highest number in the array: %d\n", secondHighest);
    return 0;
}
