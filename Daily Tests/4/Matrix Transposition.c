// Description:
// Write a C program to Implement Matrix Transposition.

// Input Format:
// Input consists of Integer.

// Output Format:
// Output consists of Integer.

// Sample Input:
// 3 3
// 1 2 3
// 4 6 7
// 8 9 11

// Sample Output:
// 1 4 8
// 2 6 9
// 3 7 11

// Note:
// Get number of rows and columns. Get the elements one by one and then transpose it.

#include <stdio.h>

int main() {
    int matrix[10][10], transpose[10][10], row, col, i, j;
    scanf("%d %d", &row, &col);

    // Reading the matrix elements
    for (i = 0; i < row; ++i) {
        for (j = 0; j < col; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Transposing the matrix
    for (i = 0; i < row; ++i)
        for (j = 0; j < col; ++j) {
            transpose[j][i] = matrix[i][j];
        }

    // Printing the transpose
    for (i = 0; i < col; ++i)
        for (j = 0; j < row; ++j) {
            printf("%d  ", transpose[i][j]);
            if (j == row - 1)
                printf("\n");
        }

    return 0;
}
