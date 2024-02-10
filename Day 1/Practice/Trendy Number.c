// Description:
// Joey Tribbiani wanted to buy a meatball Sandwich and went to the nearby sandwich shop. There was a poster that said if anyone comes up with a program for Trendy Number they can get free Sandwiches for a lifetime as a gift. Can you help Joey to write a program to check whether the given number is a trendy number or not?
// A number is said to be a trendy number if it has 3 digits and the middle digit is divisible by 3.

// Input Format:
// The input is an integer 'n' which denotes the given number.

// Output Format:
// If the given number is a trendy number, then print "Trendy Number". Otherwise, print "Not a Trendy Number". If the given number is not a 3 digit number, then print "Invalid Number"

// Sample Input:
// 791

// Sample Output:
// Trendy Number

// Explanation:
// Here, 791 is a three-digit number, as well as the middle digit(9), which is divisible by 3. Hence the output is a "Trendy Number".

// Input (stdin):
// 275

// Output (stdout):
// Not a Trendy Number

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if(n < 100 || n > 999) {
        printf("Invalid Number\n");
        return 0;
    }

    int middle_digit = (n / 10) % 10;

    if(middle_digit % 3 == 0) {
        printf("Trendy Number\n");
    } else {
        printf("Not a Trendy Number\n");
    }

    return 0;
}
