// Description:
// Write a program to generate the following series 0,2,8,14,...,34.

// Input Format:
// The input is an integer that denotes 'n'.

// Output Format:
// Print the series and refer to the sample output for formatting.

// Sample Input 1:
// 10

// Sample Output 1:
// 0 2 8 14 24 34 48 62 80 98

// Input (stdin):
// 4

// Output (stdout):
// 0 2 8 14

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a = 0;
    int d = 2;
    for(int i = 1; i <= n; i++) {
        printf("%d ", a);
        if(i % 2 == 0) {
            d += 4;
        }
        a += d;
    }

    return 0;
}
