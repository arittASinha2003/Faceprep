Description:
Baek Sung Jo was teaching Oh Ha Ni about Special Numbers. Oh Ha Ni being a slow learner was taking more time to learn than he intended. Since he will not be able to help her all the time, he wanted to write a program to find whether the given number is a Harshad number or not.
Note that the Harshad number is an integer that is divisible by the sum of its digits.

Input Format:
Input consists of 1 integer.

Output Format:
If the given number is a Harshad Number, display "Harshad Number" or display "Not Harshad Number".

Sample Input 1:
1729

Sample Output 1:
Harshad Number

Explanation:
Here, the sum of digits is 19, and 1729 is completely divisible by 19. Hence the output is "Harshad Number".

Sample Input 2:
64

Sample Output 2:
Not Harshad Number

Explanation:
Here, the sum of digits is 10, and 64 is not completely divisible by 10. Hence the output is "Not Harshad Number".

#include <stdio.h>

int main() {
    int num, temp, sum = 0;
    scanf("%d", &num);

    temp = num;
    while(temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }

    if(num % sum == 0) {
        printf("Harshad Number\n");
    } else {
        printf("Not Harshad Number\n");
    }

    return 0;
}
