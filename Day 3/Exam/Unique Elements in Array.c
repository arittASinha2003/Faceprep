// Description:
// Write a program in C to print all the unique elements in the given array.

// Input Format:
// The first line of input denotes the size of an array(N)
// The remaining line of input denotes the 'N' elements.

// Output Format:
// Print all the unique elements

// Sample Input:
// 5
// 1
// 1
// 2
// 2
// 3

// Sample Output:
// 3

#include <stdio.h>
#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int N, i, j;

    // Input size of array
    scanf("%d", &N);

    // Input elements in array
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and print unique elements
    for (i = 0; i < N; i++) {
        int isUnique = 1; // Assume the element is unique initially
        for (j = 0; j < N; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = 0; // Found a duplicate, not unique
                break;
            }
        }
        if (isUnique) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
