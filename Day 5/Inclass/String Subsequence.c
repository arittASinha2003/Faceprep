// Description:
// Given two strings s and t, return 1 if s is a subsequence of t, or 0 otherwise.
// A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "abe" is a subsequence of "abcde" while "aed" is not).

// Input Format:
// Two strings t and s in order.

// Output Format:
// A single integer(1 or 0)

// Sample Input 0:
// abcde
// abe

// Sample Output 0:
// ﻿1

// Input (stdin):
// faceprep
// aprf

// Output (stdout):
// 0

#include <stdio.h>
#include <string.h>

// Function to check if s is a subsequence of t
int isSubsequence(char s[], char t[]) {
    int m = strlen(s);
    int n = strlen(t);

    int i = 0; // Index of s
    int j = 0; // Index of t

    while (i < m && j < n) {
        if (s[i] == t[j])
            i++;
        j++;
    }

    return (i == m);
}

int main() {
    char t[100], s[100];
    scanf("%s", t);
    scanf("%s", s);

    if(isSubsequence(s, t))
        printf("1\n");
    else
        printf("0\n");

    return 0;
}
