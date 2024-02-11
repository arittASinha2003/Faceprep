// Description:
// Ram has a fruit shop. He has arranged some set of fruits in the column and row-wise. Ram needs to find which row and column have a maximum number of fruits. Help him to find out.

// Input Format:
// Input consists of 2 integers(size of rows and columns) and 1 2D array.

// Output Format:
// The output prints the sum of all rows and columns as well as print the row and column which has the maximum sum. Refer to the sample output.

// Sample Input 1:
// 3
// 3
// 1 6 8
// 2 5 1
// 3 8 2

// Sample Output 1:
// The Sum of rows is 15 8 13
// Row 1 has a maximum sum
// The Sum of columns is 6 19 11
// Column 2 has the maximum sum

// Input (stdin):
// 2
// 2
// 5 7
// 9 7

// Output (stdout):
// The Sum of rows is 12 16
// Row 2 has a maximum sum
// The Sum of columns is 14 14
// Column 1 has the maximum sum

#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int maxRowSum = 0, maxRow = 0;
    printf("The Sum of rows is");
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += matrix[i][j];
        }
        printf(" %d", rowSum);
        if (rowSum > maxRowSum) {
            maxRowSum = rowSum;
            maxRow = i + 1;
        }
    }
    printf("\nRow %d has a maximum sum\n", maxRow);

    int maxColSum = 0, maxCol = 0;
    printf("The Sum of columns is");
    for (int j = 0; j < cols; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += matrix[i][j];
        }
        printf(" %d", colSum);
        if (colSum > maxColSum) {
            maxColSum = colSum;
            maxCol = j + 1;
        }
    }
    printf("\nColumn %d has the maximum sum\n", maxCol);

    return 0;
}
