Description:

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
