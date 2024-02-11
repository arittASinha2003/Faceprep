// Description:
// Write a program to multiply two matrices of the same dimensions together.

// Input Format:
// The first two integer inputs, m, and n represent the dimensions of both of the matrices that have to be multiplied. Next (m*n) integers represent the elements in the first matrix and followed by another (m*n) integer representing the elements in the second matrix

// Output Format:
// The output consists of (m*n) integers representing the values of the matrix that is the product of both the input matrices.

// Sample Input:
// 3 3
// 1 2 3
// 4 5 6
// 7 8 9

// 9 8 7
// 6 5 4
// 3 2 1

// Sample Output:

// 30 24 18
// 84 69 54
// 138 114 90

// Input (stdin):
// 3 3
// 4 5 1 
// 9 8 5
// 2 5 8

// 1 2 3
// 4 5 6
// 7 8 9

// Output (stdout):
// 31 41 51
// 76 98 120
// 78 93 108

#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int a[m][n], b[m][n], product[m][n];

    // Reading elements of first matrix
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    // Reading elements of second matrix
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &b[i][j]);

    // Initializing elements of product matrix to 0
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            product[i][j] = 0;

    // Multiplying a and b and storing in product
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            for(int k = 0; k < n; k++)
                product[i][j] += a[i][k] * b[k][j];

    // Displaying the product
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++)
            printf("%d ", product[i][j]);
        printf("\n");
    }

    return 0;
}
