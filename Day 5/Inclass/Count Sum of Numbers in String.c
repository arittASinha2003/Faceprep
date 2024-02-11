// Description:
// A game has to be played by Varun whereas he is not supposed to take the characters into account. His task is to add the numbers given in a string containing alphanumeric characters. If he adds the character values he will die. Help him to win the game by writing a program to print the sum of numbers

// Input Format:
// Input consists of one string.

// Output Format:
// The Output consists of one integer that corresponds to the sum of all numbers present in the string.

// Sample Input 0:
// 1abc23

// Sample Output 0:
// 24

// Explanation:
// Here the numbers are 23 and 1 and so its sum is 24 that will get printed.

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    scanf("%s", str);

    int sum = 0;
    int num = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i])) {
            num = num * 10 + (str[i] - '0');
        } else {
            sum += num;
            num = 0;
        }
    }
    sum += num;

    printf("%d\n", sum);
    return 0;
}
