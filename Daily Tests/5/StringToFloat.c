// Description:
// Write a C program to convert a string to a floating point number.
// Input consists of a single floating point embedded between alpha characters. Remove all non-digits and convert the resulting string to floating-point number and print 2*n.

// Sample Input:
// aes2sea2.A33x

// Sample Output:
// 44.660000

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char str[100], numStr[100];
    scanf("%s", str);

    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i]) || str[i] == '.') {
            numStr[j] = str[i];
            j++;
        }
    }
    numStr[j] = '\0';

    float num = atof(numStr);
    printf("%.6f\n", 2*num);

    return 0;
}
