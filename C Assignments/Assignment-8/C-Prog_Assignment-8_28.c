/*
Write a C program to add two distances in feet and inches using structure
*/

#include <stdio.h>

struct Distance {
    int feet;
    float inches;
};

struct Distance addDistances(struct Distance dist1, struct Distance dist2) {
    struct Distance result;

    result.feet = dist1.feet + dist2.feet;
    result.inches = dist1.inches + dist2.inches;

    while (result.inches >= 12.0) {
        result.inches -= 12.0;
        result.feet++;
    }

    return result;
}

int main() {
    struct Distance distance1, distance2, sum;

    printf("Enter distance 1:\n");
    printf("Feet: ");
    scanf("%d", &distance1.feet);
    printf("Inches: ");
    scanf("%f", &distance1.inches);

    printf("\nEnter distance 2:\n");
    printf("Feet: ");
    scanf("%d", &distance2.feet);
    printf("Inches: ");
    scanf("%f", &distance2.inches);

    sum = addDistances(distance1, distance2);

    printf("\nSum of distances: %d feet %.2f inches\n", sum.feet, sum.inches);

    return 0;
}
