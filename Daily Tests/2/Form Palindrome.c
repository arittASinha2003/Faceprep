// Description:
// You are given a string str as input. Determine whether any anagram of str is a palindrome or not.
// Note: The string str will contain only lowercase English alphabets.

// Input Format:
// The input consists of a single line.
// The line contains the string Str.
// Input will be read from the STDIN by the candidate.

// Output Format:
// A single integer, i.e. 1 or 0.
// The output will be matched to the candidate's output printed on the STDOUT.

// Constraints:
// 0 < number of characters in string str < 15000

// Input:
// cdcdcdcdeeeef

// Output:
// 1

// Explanation:
// The output is 1 since "cdcdeefeedcdc", an anagram of the original string is a palindrome.

// Sample Input:
// aaaaabb

// Sample Output:
// 1

#include <stdio.h>
#include <string.h>
#define NO_OF_CHARS 256

int canFormPalindrome(char* str) {
    int count[NO_OF_CHARS] = {0};
    int i;

    for (i = 0; str[i];  i++)
        count[str[i]]++;

    int odd = 0;
    for (i = 0; i < NO_OF_CHARS; i++) {
        if (count[i] & 1)
            odd++;

        if (odd > 1)
            return 0;
    }
    return 1;
}

int main() {
    char str[15000];
    scanf("%s", str);
    if (canFormPalindrome(str))
        printf("1\n");
    else
        printf("0\n");
    return 0;
}
