// Description:
// Ravi is not able to figure out the method to calculate the sum of the Zig-Zag pattern in the Matrix. Can you help Ravi to write a program to find the sum of Zig-Zag patterns in a given matrix?

// Input Format:
// Input consists of 2 integers and 1 2D array.
// Integers corresponding to the size of rows and columns.

// Output Format:
// The output prints the sum of the zig-zag pattern.
// Refer to the sample output.
// Note: Size of row and column should be same

// Sample Input:
// 3
// 3
// 1 2 3
// 4 5 6
// 7 8 9

// Sample Output:
// Sum of Zig-Zag pattern is 35

// Explanation:
// The sum of zig-zag pattern is 1+2+3+5+7+8+9=35 and hence its prints 35

#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    // Check if the number of rows is equal to the number of columns
    if(m != n) {
        printf("Size of row and column should be same.\n");
        return 0;
    }

    int matrix[m][n];

    // Reading elements of the matrix
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    int sum = 0;

    // Sum of the first row
    for(int j = 0; j < n; j++)
        sum += matrix[0][j];

    // Sum of the last row
    for(int j = 0; j < n; j++)
        sum += matrix[n-1][j];

    // Sum of the diagonal
    for(int i = 0; i < n; i++)
        sum += matrix[i][n-i-1];

    // Subtracting the corners
  	sum = sum - matrix[0][n-1] - matrix[n-1][0];

    printf("Sum of Zig-Zag pattern is %d\n", sum);

    return 0;
}
