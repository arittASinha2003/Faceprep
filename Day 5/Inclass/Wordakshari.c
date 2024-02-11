// Description:
// Antakshari is a popular parlor game played in India. Many word games are similar to antakshari. One such game is wordakshari. The game can be played by two or more people. The first player has to recite a word. The last letter of the word is then used by the next player to recite another word starting with that letter. The winner or winning team is decided by a process of elimination. The person or the team that cannot come up with a word with the right consonant is eliminated. - The following rules need to be followed while playing this game. - (i) All other words except the first word have to begin with the last letter of the previous word - (ii) No words can be repeated. write a program to print the wordakshari chain.

// Input Format:
// Input consists of n+1 lines.
// The first n lines contain strings corresponding to the words in the chain.
// The last line of input contains the string #### to mark the end of the input.

// Output Format:
// The output consists of the valid wordakshari chain.

// Sample Input 0:
// oracle
// error
// rohit
// ####

// Sample Output 0:
// oracle
// error
// rohit

// Explanation:
// ﻿In oracle the last letter is e and so the next word will be error since it starts with e and it goes on like that and hence the output is
// - oracle
// - error
// - rohit

// Input (stdin):
// word
// diameter
// run
// nest
// high
// ####

// Output (stdout):
// word
// diameter
// run
// nest

#include <stdio.h>
#include <string.h>

int main() {
    char words[100][100];
    int i = 0;

    // Reading words until #### is encountered
    while(1) {
        scanf("%s", words[i]);
        if(strcmp(words[i], "####") == 0)
            break;
        i++;
    }

    // Printing the first word
    printf("%s\n", words[0]);

    // Printing the valid wordakshari chain
    for(int j = 1; j < i; j++) {
        if(words[j-1][strlen(words[j-1])-1] == words[j][0])
            printf("%s\n", words[j]);
    }

    return 0;
}
