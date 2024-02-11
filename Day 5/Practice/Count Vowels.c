// Description:
// Write a program to count the number of vowels in the given string.

// Input Format:
// Input consists of 1 string.

// Output Format:
// Output print the number of Vowels.

// Sample Input 0:
// face 

// Sample Output 0:
// Number of vowels: 2

#include <stdio.h>

// Recursive function to count the number of vowels in a string
int count_vowels(char *str) {
    if(*str == '\0')
        return 0;
    else if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' || 
            *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
        return 1 + count_vowels(str + 1);
    else
        return count_vowels(str + 1);
}

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin); // read string
    printf("Number of vowels: %d\n", count_vowels(str));
    return 0;
}
