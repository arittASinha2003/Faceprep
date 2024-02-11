// Description:
// A company transfers an encrypted code to one of its clients. The code needs to be decrypted so that it can be used for accessing all the required information. The code can be decrypted by interchanging each consecutive digit and once a digit has been interchanged then it cannot be used again. If at a certain point there is no digit to be interchanged with, then the single digit must be left as it is.
// Write an algorithm to decrypt the code so that it can be used to access the required information.

// Input Format:
// The first line of the input consists of an integer - encrypted code, representing the encrypted code given to the client.

// Output Format:
// Print an integer representing the decrypted code that can be used for accessing the required information

// Sample Input 0:
// 39631

// Sample Output 0:
// 93361

// Explanation:
// Step 1 - Interchange the first two digits, 3 and 9, which form 93631.
// Step 2 - Interchange the third and fourth digits, 6 and 3 which form 93361,
// Step 3 - For the fifth digit as there is no digit to be interchanged with, it is left it is so it will be kept as 93361.
// So, the output is 93361.

// Input (stdin):
// 1234

// Output (stdout):
// 2143

#include <stdio.h>
#include <string.h>

int main() {
    char code[100];
    scanf("%s", code);

    int len = strlen(code);
    for(int i = 0; i < len - 1; i += 2) {
        // Swap code[i] and code[i+1]
        char temp = code[i];
        code[i] = code[i+1];
        code[i+1] = temp;
    }

    printf("%s\n", code);

    return 0;
}
