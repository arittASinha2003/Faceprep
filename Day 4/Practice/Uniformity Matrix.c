// Description:
// Rohit likes to play with numbers. He started to frame a matrix called uniformity matrix where he will be using either completely odd numbers or completely even numbers but not both. Write a program to check whether he has framed the matrix in the correct order or not.

// Input Format:
// The input consists of (n*n+1) integers.
// The first integer corresponds to the number of rows/columns in the matrix.
// The remaining integers correspond to the elements in the matrix.
// The elements are read in row-wise order, the first row first, then the second row, and so on.

// Output Format:
// Print Yes if it is a uniformity matrix.
// Print No if it is not a uniformity matrix.

// Sample Input:
// 2
// 4 5
// 5 4

// Sample Output:
// No

// Input (stdin):
// 3
// 2 4 6
// 8 10 12
// 14 16 18

// Output (stdout):
// Yes

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int matrix[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int isEven = matrix[0][0] % 2 == 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((matrix[i][j] % 2 == 0) != isEven) {
                printf("No\n");
                return 0;
            }
        }
    }

    printf("Yes\n");
    return 0;
}
