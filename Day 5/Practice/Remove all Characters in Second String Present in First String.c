// Description:
// An online test was conducted for the students for taking up a new course. In the test, the students will be provided with two words. They need to remove the characters in the second word which is present in the first word and have to type the rest. Write a program to remove all characters in the second string which are present in the first string

// Input Format:
// Input consists of two strings.

// Output Format:
// The output consists of one string.

// Sample Input 0:
// Motor
// Motorcycle

// Sample Output 0:
// cycle

// Explanation:
// ﻿The characters which are not present in the first string but present in the second string are a cycle and hence the output is cycle.

#include <stdio.h>
#include <string.h>

void removeChars(char *str1, char *str2) {
    int hash[256] = {0};
    int ip_ind = 0, res_ind = 0;
    while (*(str1 + ip_ind)) {
        hash[*(str1 + ip_ind)] = 1;
        ip_ind++;
    }

    ip_ind = 0;
    while (*(str2 + ip_ind)) {
        char temp = *(str2 + ip_ind);
        if (hash[temp] == 0) {
            *(str2 + res_ind) = *(str2 + ip_ind);
            res_ind++;
        }
        ip_ind++;
    }
    *(str2 + res_ind) = '\0';
}

int main() {
    char str1[100], str2[100];
    scanf("%s", str1);
    scanf("%s", str2);
    removeChars(str1, str2);
    printf("%s\n", str2);
    return 0;
}
