// Description:
// A prime number is divisible only by 1 and itself. You are given a positive integer. Write an algorithm to find all the prime numbers from 2 to the given positive number

// Input Format:
// The input consists of an integer.

// Output Format:
// Print space-separated integers representing the prime numbers till the given positive number.

// Sample Input 1:
// 11

// Sample Output 1:
// 2 3 5 7 11

#include <stdio.h>
int main()
{
  int num, i, j, fact;
  scanf("%d", &num);
  
  for (i = 2; i <= num; i++)
  {
    fact = 0;
    for (j = 2; j <= i/2; j++)
    {
      if (i % j == 0)
      {
        fact++;
        break;
      }
    }
    if (fact == 0)
      printf("%d ", i);
  }
  
  return 0;
}
