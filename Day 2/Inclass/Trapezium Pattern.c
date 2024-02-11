// Description:
// Write a program to print the trapezium pattern.

// Sample Input 1:
// 4

// Sample Output 1:

// 1*2*3*4*17*18*19*20
// --5*6*7*14*15*16
// ----8*9*12*13
// ------10*11

// Sample Input 2:
// 2

// Sample Output 2:

// 1*2*5*6
// --3*4

#include <stdio.h>
int main()
{
  int num, i, j, a = 1, b;
  scanf("%d", &num);
  b = num * num + 1;
  for (i = num; i > 0; i--)
  {
    for (j = 1; j <= num - i; j++)
      printf("--");
    for (j = 1; j <= i; j++)
      printf("%d*", a++);
    for (j = 1; j < i; j++)
      printf("%d*", b++);
    printf("%d", b);
    b = b - 2 * (i - 1);
    printf("\n");
  }
  return 0;
}
