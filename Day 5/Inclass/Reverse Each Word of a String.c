// Description:
// Write the program to reverse each word of a string.

// Input Format:
// Input consists of one string

// Output Format:
// The output consists of one string (reverse of the input string)

// Sample Input 0:
// Hello World

// Sample Output 0:
// ﻿World Hello

#include <stdio.h>
#include <string.h>

void reverse_word(char *str, int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

void reverse_words(char *str) {
    int n = strlen(str);
    int start = 0, end = n - 1;

    // Reverse the whole string first
    reverse_word(str, start, end);

    // Reverse individual words
    start = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] == ' ') {
            reverse_word(str, start, i - 1);
            start = i + 1;
        }
    }
    reverse_word(str, start, n - 1);
}

int main() {
    char str[100];
    //printf("Enter a string: ");
    fgets(str, 100, stdin);

    reverse_words(str);

    printf("%s", str);

    return 0;
}
