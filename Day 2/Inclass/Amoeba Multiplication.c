// Description:
// The Research team led by Bernadette Wolowitz at Cal-tech University has discovered a new Amoeba that grows in the order of a Fibonacci series every month. They are exhibiting this amoeba at a national conference. They want to know the size of the amoeba at a particular time instant. If a particular month’s index is given, write a program to display the amoeba’s size.
// For Example, the size of the amoeba in months 1, 2, 3, 4, 5, 6,... will be 0, 1, 1, 2, 3, 5, 8.... respectively.

// Input Format:
// The input is an integer that denotes the count of the month.

// Output Format:
// The output is an integer denoting the amoeba size.

// Sample Input 1:
// 13

// Sample Output 1:
// 144

// Input (stdin):
// 9

// Output (stdout):
// 21

#include <stdio.h>
int main()
{
  int n1 = 0, n2 = 1, num, i, n3;
  scanf("%d", &num);
  
  if (num == 1)
    printf("%d", n1);
  else if (num == 2)
    printf("%d", n2);
  else
  {
    for (i = 3; i <= num; i++)
    {
      n3 = n1 + n2;
      n1 = n2;
      n2 = n3;
    }
    printf("%d", n3);
  }
  return 0;
}
