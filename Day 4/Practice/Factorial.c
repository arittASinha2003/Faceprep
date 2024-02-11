// Description:
// Write a program to compute the factorial of a number using recursion.

// Input Format:
// Input consists of an integer.

// Output Format:
// The output consists of an integer that corresponds to the factorial value.

// Sample Input 1:
// 5

// Sample Output 1:
// The factorial of 5 is 120

#include <stdio.h>

long long factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;
    scanf("%d", &num);

    printf("The factorial of %d is %lld\n", num, factorial(num));

    return 0;
}
