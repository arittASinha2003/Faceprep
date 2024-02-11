// Description:
// Write a program to compute the GCD of 2 numbers using recursion.

// Input Format:
// Input consists of 2 integers.

// Output Format:
// Output consists of one integer that represents the GCD of two numbers.

// Sample Input 1:
// 36
// 27

// Sample Output 1:
// 9

#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("%d\n", gcd(num1, num2));
    return 0;
}
