// Description:
// Dolores Abarnathy and Maeve Millay were playing a puzzle game with a given set of numbers. They need to find the odd and even numbers and find the sum of the odd numbers and the sum of the even numbers. Write a program to help them to solve the puzzle game and to win the mobile phone.

// Input Format:
// Input consists of n+1 integers. 
// The first integer corresponds to ‘n’, the size of the array. 
// The next ‘n’ integers correspond to the elements in the array. 
// Assume that the maximum value of n is 15.

// Output Format:
// Refer to sample output for details.

// Sample Input:
// 5
// 2
// 3
// 6
// 8
// -1

// Sample Output:
// The sum of the even numbers in the array is 16
// The sum of the odd numbers in the array is 2

// Input (stdin):
// 4
// 1
// 2
// 3
// -1

// Output (stdout):
// The sum of the even numbers in the array is 2
// The sum of the odd numbers in the array is 3

// Input (stdin):
// 3
// 1
// 2
// 3

// Output (stdout):
// The sum of the even numbers in the array is 2
// The sum of the odd numbers in the array is 4

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sumOdd = 0, sumEven = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            sumEven += arr[i];
        } else {
            sumOdd += arr[i];
        }
    }

    printf("The sum of the even numbers in the array is %d\n", sumEven);
    printf("The sum of the odd numbers in the array is %d\n", sumOdd);

    return 0;
}
