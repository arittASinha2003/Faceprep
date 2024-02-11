// Description:
// Write a program to find the sum of array elements using recursion.

// Input Format:
// The Input consists of one integer and a set of integers.
// The first integer corresponds to the number of array elements.
// The second Input corresponds to the array elements.

// Output Format:
// The output consists of one integer that corresponds to the sum of the array elements.

// Sample Input 1:
// 5
// 1
// 2
// 3
// 4
// 5

// Sample Output 1:
// 15

// Input (stdin):
// 2
// 1 
// 2

// Output (stdout):
// 3

#include <stdio.h>

// Recursive function to find the sum of an array
int sum(int arr[], int n) {
    if (n <= 0)
        return 0;
    return (sum(arr, n - 1) + arr[n - 1]);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%d\n", sum(arr, n));
    return 0;
}
