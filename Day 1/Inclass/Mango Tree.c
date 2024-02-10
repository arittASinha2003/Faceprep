// Description:
// In the kingdom of Terebinthia, Leslie Burke is so much interested in gardening and hence she plants more trees in her garden. She plants trees in a rectangular fashion with the order of rows and columns and numbers the trees in a row-wise order. She planted the mango trees only in the 1st row, 1st column, and last column. So, given the tree number, your task is to find out whether the given tree is a mango tree or not. Now, write a program to check whether the given number denotes a mango tree or not.

// Input Format:
// Input consists of 3 integers. The first input denotes the number of rows. The second input denotes the number of columns. The third input denotes the tree number.

// Output Format:
// If the given number is a mango tree, print "Yes". Otherwise, print "No"

// Sample Input 1:
// 5
// 5
// 11

// Sample Output 1:
// Yes

// Input (stdin):
// 56
// 24
// 65

// Output (stdout):
// No

// Input (stdin):
// 2
// 5
// 3

// Output (stdout):
// Yes

#include <stdio.h>
int main()
{
  int row, col, trees;
  scanf("%d %d %d", &row, &col, &trees);
  
  if ((trees <= col) || (trees % col == 1) || (trees % col == 0))
    printf("Yes");
  else
    printf("No");
  return 0;
}
