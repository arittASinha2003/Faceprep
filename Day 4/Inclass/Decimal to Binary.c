// Description:
// Write a program to convert a decimal number to a binary number by recursion.

// Input Format:
// The Input consists of an Integer

// Output Format:
// The Output consists of the input binary form

// Sample Input 0:
// 10

// Sample Output 0:
// 1010

#include <stdio.h>

int binary(int n)
{
    if (n == 0)
        return 0;
    
    return n%2+10*binary(n/2);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", binary(n));

    return 0;
}
