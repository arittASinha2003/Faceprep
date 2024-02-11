// Description:
// Write a program to find the number of digits in a number using recursion.

// Input Format:
// Input consists of a non-negative integer.

// Output Format:
// Refer sample output for formatting specifications.

// Sample Input 1:
// 432

// Sample Output 1:
// The number of digits in 432 is 3

// Input (stdin):
// 6723978

// Output (stdout):
// The number of digits in 6723978 is 7

#include <stdio.h>

int countDigits(int num) {
    if (num == 0)
        return 0;
    return 1 + countDigits(num / 10);
}

int main() {
    int num;
    scanf("%d", &num);

    printf("The number of digits in %d is %d\n", num, countDigits(num));

    return 0;
}
