// Description:
// Write a C program to rotate matrix by 90 degree.

// Input Format:
// The first line corresponds to rows size.
// The second line corresponds to column size.
// The third line corresponds to the rotation of matrix (if flag is 1, it rotates to right. If it is 0 then rotates in left direction).
// The remaining corresponds to the elements of the matrix.

// Output Format:
// Displays the rotated matrix by 90 degree.

// Sample Input:
// 3
// 3
// 1
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9

// Sample Output:
// 7 4 1
// 8 5 2
// 9 6 3

// Input:
// 2 2 0 1 2 3 4

// Output:
// 2 4
// 1 3

#include <stdio.h>

void rotateMatrix(int n, int m, int mat[n][m], int flag) {
    if (flag == 1) {
        for (int i = 0; i < m; i++) {
            for (int j = n - 1; j >= 0; j--) {
                printf("%d ", mat[j][i]);
            }
            printf("\n");
        }
    } else {
        for (int i = m - 1; i >= 0; i--) {
            for (int j = 0; j < n; j++) {
                printf("%d ", mat[j][i]);
            }
            printf("\n");
        }
    }
}

int main() {
    int n, m, flag;
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &flag);
    int mat[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    rotateMatrix(n, m, mat, flag);
    return 0;
}
