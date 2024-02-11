// Description:
// Sheldon Cooper has a square-shaped puzzle made up of small square pieces containing numbers on them. He wants to rearrange the puzzle by changing the elements of a row into a column element and the column element into a row element without altering the shape of the puzzle. Help Sheldon solves this puzzle. Write a program to find the transpose of the given 2D matrix.

// Input Format:
// The first line consists of an integer which represents the number of rows and columns. The next line consists of the elements in the matrix.

// Output Format:
// Output prints the transpose of the input matrix.

// Sample Input:
// 3

// 1 2 3
// 4 5 6
// 7 8 9

// Sample Output:

// 1 2 3
// 4 5 6
// 7 8 9

// Transpose matrix is:

// 1 4 7
// 2 5 8
// 3 6 9

#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  
  int matrix[n][n];
  
  // Read the matrix elements from the input
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      scanf("%d", &matrix[i][j]);
  
  // Print the original matrix
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
      printf("%d ", matrix[i][j]);
    printf("\n");
  }
  
  printf("Transpose matrix is:\n");
  
  // Print the transpose of the matrix
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
      printf("%d ", matrix[j][i]);
    printf("\n");
  }
  return 0;
}
