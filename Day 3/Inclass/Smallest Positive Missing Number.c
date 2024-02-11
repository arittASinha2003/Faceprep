// Description:
// You are given an array a[ ] of n integers. The task is to find the smallest positive number missing from the array.

// Input Format:
// First line - n, the size of an array Second line - all the n elements (a[i] can be positive, negative, zero)

// Output Format:
// Print the smallest positive number missing from the array.

// Sample Input:
// 6
// 4 2 0 -1 1 -3

// Sample Output:
// 3

// Input (stdin):
// 5
// 1 3 4 5 2

// Output (stdout):
// 6

#include <stdio.h>
#include <stdlib.h>

int compare(const void * a, const void * b) {
    return (*(int*)a - *(int*)b);
}

int smallestMissingPositive(int arr[], int n) {
    qsort(arr, n, sizeof(int), compare);

    int missing = 1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0 && arr[i] == missing) {
            missing++;
        }
    }

    return missing;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", smallestMissingPositive(arr, n));

    return 0;
}
