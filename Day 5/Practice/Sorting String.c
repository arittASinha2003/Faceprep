// Description:
// Write a program to sort a string in ascending order. Note: Do not use inbuilt functions.

// Input Format:
// The input consists of the string s in a single line.

// Output Format:
// Display the sorted string in ascending order.

// Sample Input 0:
// faceprep

// Sample Output 0:
// ﻿aceefppr

#include <stdio.h>
#include <string.h>

void sort_string(char* s) {
    int c, i = 0, j = 0, length;
    char *p, *q, temp;

    length = strlen(s);

    for (i = 0; i < length - 1; i++) {
        for (j = i + 1; j < length; j++) {
            if (*(s + i) > *(s + j)) {
                temp = *(s + i);
                *(s + i) = *(s + j);
                *(s + j) = temp;
            }
        }
    }
}

int main() {
    char s[100];
    scanf("%s", s);
    sort_string(s);
    printf("%s\n", s);
    return 0;
}
