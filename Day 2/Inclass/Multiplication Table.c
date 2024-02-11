// Description:
// Penny wanted to complete her graduation from the Community College of California. But being the newbee she is , she does not how to multiply two numbers. Sheldon being a good friend wanted to help Penny by writing a program to print the multiplication table of an integer n.

// Input Format:
// Input consists of 2 integers. The first integer corresponds to n. The second integer corresponds to m(rows).

// Output Format:
// Refer to the sample output for formatting specifications.

// Sample Input 1:
// 5
// 4

// Sample Output 1:
// Enter n
// Enter m
// The multiplication table of 5 is
// 1*5=5
// 2*5=10
// 3*5=15
// 4*5=20

#include <stdio.h>
int main()
{ 
  int n, m, i;
  
  printf("Enter n\n");
  scanf("%d", &n);
  
  printf("Enter m\n");
  scanf("%d", &m);
  
  printf("The multiplication table of %d is\n", n);
  
  for (i = 1; i <= m; i++)
    printf("%d*%d=%d\n", i, n, i*n);
  
  return 0;
}
