// Round Off

// Write a program to get a float value from the user and display it in the below-mentioned format.
// HINT: Use ceil() and floor() functions from the header file.

// Input & Output Format:

// Input consists of one float value.
// The output consists of one integer, its rounded-up value, and its rounded-down value.

// Sample Input 1:
// 54.5

// Sample Output 1:
// 54
// 55
// 54

// Sample Input 2:
// 66.7

// Sample Output 2:
// 66
// 67
// 66

#include <stdio.h>
#include <math.h>
int main()
{
  float a;
  scanf("%f", &a);
  
  int b,c;
  b = ceil(a);
  c = floor(a);
  
  printf("%d", (int)a);
  printf("\n%d", b);
  printf("\n%d", c);
  return 0;
}
