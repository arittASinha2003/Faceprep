// Description:
// Professor Kishore wanted the kids to learn about Special numbers. (A two-digit number is said to be a special number if the sum of sum of its digits and the product of its digits is equal to the number itself. For example, 19 is a special number. The digits in 19 are 1 and 9. The sum of the digits is 10 and the product of the digits is 9. 10+9 = 19.)
// Can you help Kishore to write a program to find all special numbers between 2 limits m and n (both inclusive)? Assume that m and n are two-digit numbers.

// Input Format:
// Input consists of 2 integers m and n.

// Output Format:
// Refer to the sample output for the output format.

// Sample Input 1:
// 11
// 19

// Sample Output 1:
// 19

// Input (stdin):
// 12
// 45

// Output (stdout):
// 19
// 29
// 39

#include <stdio.h>
int main()
{ 
  int m, n, i, num, first, last, sum, product, total;
  scanf("%d %d", &m, &n);

  for (i = m; i <= n; i++)
  {
    num = i;
    last = num % 10;
    first = num / 10;
    sum = last + first;
    product = last * first;
    total = sum + product;
    
    if (total == num)
      printf("%d\n", num);
  }
   return 0;
}
