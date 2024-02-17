// Description:
// Write a C program to return the nearest 10 multiple of any given number.

// Input Format:
// Input consist of integer.
// 1 <= n <= 1000000

// Output Format:
// Output consist of integer.

// Sample Input:
// 6

// Sample Output:
// 10

// Test Case 1:

// Input:
// 4
// Output:
// 10

// Test Case 2:

// Input:
// 19
// Output:
// 20

#include <stdio.h>

int nearestMultipleOfTen(int n) {
    if (n % 10 == 0) {
        return n;
    } else {
        int div = n / 10;
        return (div + 1) * 10;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", nearestMultipleOfTen(n));
    return 0;
}
