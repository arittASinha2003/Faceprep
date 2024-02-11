// Description:

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
