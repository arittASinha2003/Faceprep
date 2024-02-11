// Description:
// Write a program to move all zeroes to the end of a given integer.

// Input Format:
// The first line of input contains a number of test cases T.
// For each test case, the first line of input contains a single integer of 0's and 1's.

// Constraints:
// 1 ≤ T ≤ 10
// 1 ≤ N ≤ 109

// Output Format:
// The output contains a single-line integer value.

// Sample Input:
// 2
// 1010101
// 1000111

// Sample Output:
// 1111000
// 1111000

// Input (stdin):
// 1
// 1100110

// Output (stdout):
// 1111000

#include <stdio.h>
#include <string.h>

void moveZeroesToEnd(char *num) {
    int count = 0;
    int n = strlen(num);

    for (int i = 0; i < n; i++) {
        if (num[i] != '0') {
            num[count++] = num[i];
        }
    }

    while (count < n) {
        num[count++] = '0';
    }
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        char num[11];
        scanf("%s", num);
        moveZeroesToEnd(num);
        printf("%s\n", num);
    }

    return 0;
}
