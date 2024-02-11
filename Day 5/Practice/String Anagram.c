// Description:
// Write a program to find whether the given string is the anagram of the first string.
// Note: An anagram of a string is another string that contains the same characters, only the order of characters can be different.

// Input Format:
// The input consists of two strings.

// Output Format:
// The output Print "Anagram", if strings are Anagram otherwise print "Not Anagram"

// Sample Input 0:
// eat
// ate

// Sample Output 0:
// Anagram

// Input (stdin):
// eat
// abc

// Output (stdout):
// Not Anagram

#include <stdio.h>
#include <string.h>

#define NO_OF_CHARS 256

// Function to check whether two strings are anagram of each other
int areAnagram(char* str1, char* str2) {
    int count[NO_OF_CHARS] = {0};
    int i;

    for (i = 0; str1[i] && str2[i];  i++) {
        count[str1[i]]++;
        count[str2[i]]--;
    }

    if (str1[i] || str2[i])
        return 0;

    for (i = 0; i < NO_OF_CHARS; i++)
        if (count[i])
            return 0;

    return 1;
}

int main() {
    char str1[100], str2[100];
    scanf("%s", str1);
    scanf("%s", str2);

    if (areAnagram(str1, str2))
        printf("Anagram\n");
    else
        printf("Not Anagram\n");

    return 0;
}
