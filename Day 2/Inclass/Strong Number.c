// Description:
// A number can be said as a strong number when the sum of the factorial of the individual digits is equal to the number.
// For example, 145 is a strong number. 1! + 4! + 5! = 145. Write a program to check whether a given number is a strong number or not.

// Input Format:
// Input consists of 1 integer.

// Output Format:
// If it is a strong number print "Yes" or print "No"

// Sample Input:
// 145

// Sample Output:
// Yes

// Explanation 0:
// = 1! + 4! +5! = 1+24+120 = 145

#include <stdio.h>

int main() {
    int num, sum = 0, temp, digit, fact, i;
    scanf("%d", &num);
  
    temp = num;
  
    while (temp > 0) {
        digit = temp % 10;
        fact = 1;
        for (i = digit; i >= 1; i--)
            fact *= i;
        sum += fact;
        temp /= 10;
    }
    if (sum == num)
        printf("Yes\n");
    else
        printf("No\n");  
  
    return 0;
}
