// Description:
// Write a program to find the sum of the positive odd numbers present in an array using recursion.

// Input Format:
// The first integer input represents the size of the array (n), next n lines consist of values present in the array.

// Output Format:
// The output prints the sum of positive odd numbers in an array. Refer to the sample output for formatting specifications.

// Sample Input 1:
// 3
// 1
// 1
// 1

// Sample Output 1:
// Sum = 3

// Input (stdin):
// 5
// 1
// 2
// 3
// 4
// 5

// Output (stdout):
// Sum = 9

#include <stdio.h>

// Recursive function to find the sum of positive odd numbers in an array
int sum_positive_odd(int arr[], int n) {
    if(n <= 0)
        return 0;
    else if(arr[n-1] > 0 && arr[n-1] % 2 == 1)
        return arr[n-1] + sum_positive_odd(arr, n-1);
    else
        return sum_positive_odd(arr, n-1);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Sum = %d\n", sum_positive_odd(arr, n));
    return 0;
}
