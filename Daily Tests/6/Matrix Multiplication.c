// Description:
// Write a C program to multiply the given two matrices
// Multiply two matrices according to the rule of matrix multiplication.

// Sample Input:
// 3 2
// 1 2 3
// 3 4 5

// 3 2
// 1 2 3
// 3 4 5

// Sample Output:
// 9 12 15
// 15 21 27
// 24 33 42

// Test Case 1:

// Input:
// 2 2 1 2 3 4 2 2 1 2 3 4

// Output:
// 7 10
// 15 22

// Test Case 2:

// Input:
// 2 2 1 2 3 4 1 2 7 8

// Output:
// The matrices can't be multiplied with each other.

#include<stdio.h>

int main() {
    int a[10][10], b[10][10], result[10][10], r1, c1, r2, c2, i, j, k;

    scanf("%d %d", &r1, &c1);
    for(i=0; i<r1; ++i)
        for(j=0; j<c1; ++j)
            scanf("%d",&a[i][j]);

    scanf("%d %d",&r2, &c2);
    if(c1 != r2) {
        printf("The matrices can't be multiplied with each other.\n");
        return 0;
    }

    for(i=0; i<r2; ++i)
        for(j=0; j<c2; ++j)
            scanf("%d", &b[i][j]);

    for(i=0; i<r1; ++i)
        for(j=0; j<c2; ++j)
            result[i][j] = 0;

    for(i=0; i<r1; ++i)
        for(j=0; j<c2; ++j)
            for(k=0; k<c1; ++k)
                result[i][j] += a[i][k] * b[k][j];

    for(i=0; i<r1; ++i) {
        for(j=0; j<c2; ++j)
            printf("%d ", result[i][j]);
        printf("\n");
    }
    return 0;
}
