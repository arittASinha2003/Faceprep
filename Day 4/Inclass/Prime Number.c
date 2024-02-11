// Description:
// Write a program to find whether the given number is a prime number or not using recursion.

// Input Format:
// The Input consists of an integer.

// Output Format:
// Prints Prime Number or Not a Prime number.

// Sample Input 1:
// 13

// Sample Output 1:
// Prime Number

#include <stdio.h>

// Function to check prime number
int isPrime(int n, int i) {
    if(i == 1)
        return 1;
    else {
        if(n % i == 0)
            return 0;
        else
            return isPrime(n, i - 1);
    }
}

int main() {
    int num;
    scanf("%d", &num);

    if(num == 1)
        printf("Not a Prime Number\n");
    else {
        if(isPrime(num, num / 2))
            printf("Prime Number\n");
        else
            printf("Not a Prime Number\n");
    }

    return 0;
}
