// Description:
// Write a C program to decode the given string.

// Input Format:
// Input consists of String

// Output Format:
// Output consists of String

// Sample Input:
// i2n3s4t3a2

// Sample Output:
// iinnnsssstttaa

#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[100], ch;
    int num;
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i+=2) {
        ch = str[i];
        num = str[i+1] - '0';
        for (int j = 0; j < num; j++) {
            printf("%c", ch);
        }
    }
    printf("\n");

    return 0;
}
