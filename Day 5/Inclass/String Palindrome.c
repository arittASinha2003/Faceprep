// Description:
// Write a program to find whether the given string is a palindrome or not without using string library functions.
// Note: The string reads the same backward and forward.

// Input Format:
// Input consists of 1 string.

// Output Format:
// If the given string is a Palindrome display “Palindrome”, else display “Not a Palindrome”.

// Sample Input 0:
// mam

// Sample Output 0:
// ﻿Palindrome

#include <stdio.h>
#include <string.h>

void isPalindrome(char ar[]) {
    int l = 0;
    int h = strlen(ar) - 1;

    while (h > l) {
        if (ar[l++] != ar[h--]) {
            printf("Not a Palindrome");
            return;
        }
    }
    printf("Palindrome");
}

int main() {
  char ar[100];
  scanf("%s", &ar);
  isPalindrome(ar);
  return 0;
}
