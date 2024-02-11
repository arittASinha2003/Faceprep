// Description:
// Measurements continue to play an important role throughout everybody's life. Hari who is a sportsman has studied how to add two distances in inch feet system. Now he needs to do the programming for the same. Help him to write a program to add two distances in inch feet system using Structure
// Note: 1feet = 12inch

// Input Format:
// Input 1: feet1 and Inch1
// Input 2: feet2 and Inch2
// Feet is in integer data type and inch is in float data type

// Output Format:
// The output prints the Sum of Distance.

// Sample Input 0:
// 22
// 4.7
// 23
// 7.9

// Sample Output 0:
// ﻿46'-0.6"

// Input (stdin):
// 14
// 4.5
// 22
// 4.5

// Output (stdout):
// 36'-9"

#include <stdio.h>

// Define the structure for distance
typedef struct Distance {
    int feet;
    float inch;
} Distance;

Distance addDistances(Distance d1, Distance d2) {
    Distance sum;
    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;

    // If inch is greater than 12, changing it to feet.
    if(sum.inch >= 12.0) {
        sum.inch -= 12.0;
        ++sum.feet;
    }
    return sum;
}

int main() {
    Distance d1, d2, sum;
    scanf("%d", &d1.feet);
    scanf("%f", &d1.inch);
    scanf("%d", &d2.feet);
    scanf("%f", &d2.inch);

    sum = addDistances(d1, d2);

    // Check if the inches part is an integer
    if(sum.inch == (int)sum.inch)
        printf("%d'-%d\"\n", sum.feet, (int)sum.inch);
    else
        printf("%d'-%.1f\"\n", sum.feet, sum.inch);
    return 0;
}
