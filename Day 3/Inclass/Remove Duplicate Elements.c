// Description:
// Jack and John were investigating a murder and the murderer was Ms.Isha Adler. She wanted Jack to find her by solving the puzzles. Jack was able to solve all but one. The last task was to write a program to remove duplicate elements from an array. Can you help Jack?

// Input Format:
// Input consists of 1 integer and 1 array. The first integer corresponds to the size of the array. The next integers correspond to the elements in the array.

// Output Format:
// The output consists of an array with no duplicate elements.

// Sample Input:
// 5
// 1
// 2
// 2
// 3
// 4

// Sample Output:
// 1
// 2
// 3
// 4

// Input (stdin):
// 4
// 3
// 2
// 1
// 2

// Output (stdout):
// 3
// 2
// 1

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n], i, j, k;
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n;) {
            if (arr[j] == arr[i]) {
                for (k = j; k < n; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;
            } else {
                j++;
            }
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
