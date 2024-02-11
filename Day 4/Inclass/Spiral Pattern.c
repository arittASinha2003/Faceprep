// Description:
// Given an integer matrix of size n*n. n is the number of rows and columns. Traverse it in a spiral form.

// Input Format:
// The first line contains N, which represents the number of rows and columns of a matrix.
// The next N lines contain N values, each representing the values of the matrix.

// Output Format:
// A single line containing integers with space represents the desired traversal.

// Sample Input 1:
// 3
// 1 2 3
// 4 5 6
// 7 8 9

// Sample Output 1:
// 1 2 3 6 9 8 7 4 5

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int matrix[n][n];

    // Reading elements of the matrix
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    int top = 0, bottom = n-1, left = 0, right = n-1;

    while(top <= bottom && left <= right) {
        // Print top row
        for(int i = left; i <= right; i++)
            printf("%d ", matrix[top][i]);
        top++;

        // Print right column
        for(int i = top; i <= bottom; i++)
            printf("%d ", matrix[i][right]);
        right--;

        // Print bottom row
        if(top <= bottom){
            for(int i = right; i >= left; i--)
                printf("%d ", matrix[bottom][i]);
            bottom--;
        }

        // Print left column
        if(left <= right){
            for(int i = bottom; i >= top; i--)
                printf("%d ", matrix[i][left]);
            left++;
        }
    }

    return 0;
}
