Description:
Jeni and her brothers Joseph and John found themselves in Narnia, the land of magic during World War III. Narnia was completely filled with gentle people and also it is where the trees sing, the fauns dance, and animals talk. Being from England, Jeni wanted to teach the kids the English language. She started teaching them the alphabet but then she remembered that she might have to go to London and felt sad. John and Joseph discussed with each other and suggested an idea to Jeni to come up with a program so that the kids can learn on their own when she was not there. Can you help Jeni to write a program to check whether the given character is a vowel or consonant or alphabet?

Input Format:
The input consists of a character.

Output Format:
The output should be any one of the below-given strings. Vowel or Consonant or Not an alphabet.

Sample Input:
e

Sample Output:
Vowel

Explanation:
﻿The input character e is a vowel and hence it prints Vowel.

#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    scanf("%c", &c);

    if(!isalpha(c)) {
        printf("Not an alphabet\n");
        return 0;
    }

    c = tolower(c);

    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        printf("Vowel\n");
    } else {
        printf("Consonant\n");
    }

    return 0;
}
