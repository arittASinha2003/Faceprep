// Description:
// Write a C program to find the maximum sum increasing sub_sequence in the given array.

// Input Format:
// Input consist of integers
// 1st Input: Size of the array
// 2nd Input: Number of array elements

// Output Format:
// Output is an Integer

// Sample Input:
// 5
// 5 50 10 20 30

// Sample Output:
// 60

// Explanation:
// Here Increasing sub-sequence are
// 5 50
// 10 20 30
// 5 + 50 = 55
// 10 + 20 + 30 = 60. So 60 is greater than 55.

// Test Case 1:

// Input:
// 5 5 50 10 20 30
// Output:
// 60

// Test Case 2:

// Input:
// 5 10 30 23 56 78
// Output:
// 157

#include<stdio.h>

int maxSumIS(int arr[], int n) {
    int max = arr[0], curr = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i-1])
            curr = curr + arr[i];
        else
            curr = arr[i];

        if (curr > max)
            max = curr;
    }
    return max;
}

int main() {
    int arr[100], n, i;
    scanf("%d", &n);

    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("%d\n", maxSumIS(arr, n));
    return 0;
}
