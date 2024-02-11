// Description:
// Write a program to find the sum of digits of a number until the sum becomes a single digit.

// Input Format:
// Input format consists of a number

// Output Format:
// Output format consists of an integer

// Sample Input 0:
// 78945623

// Sample Output 0:
// 8

#include <stdio.h>
int main()
{
  int num, sum;
  scanf("%d", &num);
  
  while(num >= 10)
  {
    sum = 0;
    while (num > 0)
    {
      sum += num % 10;
      num = num / 10;
    }
    num = sum;
  }
  printf("%d", num);
  
  return 0;
}
