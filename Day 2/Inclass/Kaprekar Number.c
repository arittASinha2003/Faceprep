// Description:
// Jaffer wanted to excel in Math. He was learning about the Kaprekar number from Meena, his Maths teacher. She gave him a few random numbers and asked him to find out whether they are Kaprekar number or not.
// (Consider an n-digit number k. Square it and add the right n digits to the left n or n-1 digits. If the resultant sum is k, then k is called a Kaprekar number. For example, 9 is a Kaprekar number since 9^2 = 81 & 8 + 1 = 9, similarly, 297 is a Kaprekar number as 297^2 = 88209 & 88 + 209 = 297 ).
// Can you help Jaffer to write a program to find whether the given number is a Kaprekar number or not?

// Input Format:
// Input consists of a single integer.

// Output Format:
// If the output is a Kaprekar number print "Kaprekar Number" else "Not a Kaprekar Number".

// Sample Input 0:
// 45

// Sample Output 0:
// Kaprekar Number

// Input (stdin):
// 23

// Output (stdout):
// Not a Kaprekar Number

#include <stdio.h>
#include <math.h>
int main()
{
   // Try out your code here
  int num, count = 0, temp, i, sum = 0;
  scanf("%d", &num);
  
  temp = num;
  
  //Counting number of digits
  while (temp != 0)
  {
    count++;
    temp = temp / 10;
  }
  
  //Finding Power Value
  i = pow(10, count);
  temp = num * num;
  
  //First
  sum = sum + (temp / i);
  //Last
  sum += (temp % i);
  
  if (sum == num)
    printf("Kaprekar Number");
  else
    printf("Not a Kaprekar Number");
  
  return 0;
}
