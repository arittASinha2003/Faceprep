// Description:
// Write a program to reverse a 3-digit number.

// Input Format:
// Input consists of an integer.

// Output Format:
// The output will be the reverse of the input integers.

// Sample Input:
// 456

// Sample Output:
// 654

#include <stdio.h>
int main()
{
  int num, mid, last, new, f2, f21, f22;
  scanf("%d", &num);
  
  last = num % 10;
  f2 = num / 10;
  f22 = f2 % 10;
  f21 = f2 / 10;
  new = (last*100) + (f22*10) + f21;
  printf("%d", new);
  return 0;
}
