// Description:
// Write a program to print the hollow square pattern.

// Input Format:
// Input consists of one integer that corresponds to the number of rows and columns.

// Output Format:
// Output prints the hollow square pattern for the given number of rows and columns.

// Sample Input 1:
// 5

// Sample Output 1:

// *****
// *   *
// *   *
// *   *
// *****

#include <stdio.h>
int main()
{
  int num, i, j;
  scanf("%d", &num);
  
  for (i = 1; i <= num; i++)
  {
    for (j = 1; j <= num; j++)
    {
      if (i == 1 || j == 1 || i == num || j == num)
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
  return 0;
}
