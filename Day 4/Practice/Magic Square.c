// Description:
// A magic square is an arrangement of numbers (usually integers) in a square grid, there are numbers in the forward and backward main diagonals, all add up to the same number. Write a program to find whether a given matrix is a magic square or not.

// Input Format:
// The input consists of (n*n+1) integers.
// The first integer corresponds to the number of rows/columns in the matrix.
// The remaining integers correspond to the elements in the matrix.
// The elements are read in row-wise order, the first row first, then the second row, and so on.

// Output Format:
// Print yes if it is a magic square.
// Print no if it is not a magic square.

// Sample Input 1:
// 2
// 4 5
// 5 4

// Sample Output 1:
// No

// Input (stdin):
// 4
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16

// Output (stdout):
// Yes

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int matrix[n][n];
    int sumDiag[2] = {0, 0};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            if (i == j) {
                sumDiag[0] += matrix[i][j];
            }
            if (i + j == n - 1) {
                sumDiag[1] += matrix[i][j];
            }
        }
    }

    if (sumDiag[0] != sumDiag[1]) {
        printf("No\n");
        return 0;
    }

    printf("Yes\n");
    return 0;
}
