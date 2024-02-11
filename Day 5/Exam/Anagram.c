// Description:
// In the magical world of Harry Potter, Hermione Granger is known for her intelligence and quick wit. She is often seen with a book in her hand, learning new spells and enchantments. One day, she comes across an ancient spell that can determine if two words are anagrams of each other. Intrigued by this, she decides to write a C program to check if two given strings are anagrams. Can you help Hermione write this program?

// Input Format:
// Two strings, each on a new line.

// Output Format:
// Prints “Anagram” if the two strings are anagrams of each other, otherwise prints “Not Anagram”.

// Sample Input 1:
// listen
// silent

// Sample Output 1:
// Anagram

// Explanation:
// The strings “listen” and “silent” are anagrams as they contain the same characters but in a different order.

// Note: This program is case-sensitive and does not ignore spaces or punctuation. For example, it would consider “Listen” and “Silent” as not anagrams because of the difference in case. Similarly, “Tom Marvolo Riddle” and “I am Lord Voldemort” would also be considered not anagrams because the program does not ignore spaces or punctuation.

#include <stdio.h>
#include <string.h>

int areAnagrams(const char *str1, const char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) {
        return 0;
    }

    int freq[256] = {0};

    for (int i = 0; i < len1; i++) {
        freq[str1[i]]++;
    }

    for (int i = 0; i < len2; i++) {
        freq[str2[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char str1[100], str2[100];

    scanf("%s", str1);
    scanf("%s", str2);

    if (areAnagrams(str1, str2)) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }

    return 0;
}
