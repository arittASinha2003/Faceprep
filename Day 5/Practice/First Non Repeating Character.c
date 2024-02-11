// Description:
// Lee conducted a word game for his colleagues. The game is everyone should say a word that should not have any repeating characters in it. If a single character is repeated then the particular person can't continue the game. Lee finds it difficult to disqualify the person from the game since he is not able to find the nonrepetitive character for all the words. Help him to find the winner of the game by writing a program to find the first element which is non -repetitive i.e that element must not be present anywhere else in the string.

// Input Format:
// The first line of the input consists of a string.

// Output Format:
// The output displays a character that is non-repetitive. If all the characters in an input string are repetitive, then display All characters are repetitive.

// Sample Input 0:
// teeterson 

// Sample Output 0:
// r

// Explanation:
// Here in the word teeterson the first non-repeating character is r and hence it prints r.

// Input (stdin):
// goog

// Output (stdout):
// All the characters are repetitive

#include <stdio.h>
#define NO_OF_CHARS 256

// Function to find the first non-repeating character in a string
char firstNonRepeating(char* str) {
    int count[NO_OF_CHARS] = {0};
    int index = -1, i;

    for (i = 0; *(str+i);  i++)
        count[*(str+i)]++;
    for (i = 0; *(str+i);  i++)
        if (count[*(str+i)] == 1) {
            index = i;
            break;
        }
   
    return str[index];
}

int main() {
    char str[100];
    scanf("%s", str);
    char res = firstNonRepeating(str);
    if (res != '\0')
        printf("%c\n", res);
    else
        printf("All the characters are repetitive\n");
    return 0;
}
