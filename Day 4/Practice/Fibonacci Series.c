// Description:
// Write a program to find the nth term in the Fibonacci series using recursion. Note that the first 2 terms in the Fibonacci Series are 0 and 1.

// Input Format:
// Input consists of an integer.

// Output Format:
// The output consists of an integer(nth term of the Fibonacci series).

// Sample Input 1:
// 5

// Sample Output 1:
// The term 5 in the Fibonacci series is 3

// Input (stdin):
// 8

// Output (stdout):
// The term 8 in the Fibonacci series is 13

#include <stdio.h>

// Recursive function to find the nth term in the Fibonacci series
int fibonacci(int n) {
    if(n == 0)
        return 0;
    else if(n == 1)
        return 0;
    else if(n == 2)
        return 1;
    else
        return (fibonacci(n - 1) + fibonacci(n - 2));
}

int main() {
    int n;
    scanf("%d", &n);
    printf("The term %d in the Fibonacci series is %d\n", n, fibonacci(n));
    return 0;
}
