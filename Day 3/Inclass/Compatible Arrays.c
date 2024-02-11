// Description:
// Two arrays are said to be compatible if they are of the same size and if the ith element in the first array is greater than or equal to the ith element in the second array for all the values of i. Write a program to find whether 2 arrays are compatible or not.

// Input Format:
// Input consists of 2n+2 integers. The first integer corresponds to ‘n1’, the size of the first array. The next ‘n1’ integers correspond to the elements in the first array. The next (n+1) integer corresponds to 'n2', the size of the second array. The last 'n2' integers correspond to the elements in the second array.

// Output Format:
// The output is any one of the two strings "Compatible" or "Incompatible"

// Sample Input 0:
// 5
// 2
// 3
// 6
// 8
// 1
// 5
// 1
// 1
// 1
// 1
// 1

// Sample Output 0:
// Compatible

// Input (stdin):
// 5
// 2
// 3
// 6
// 8
// 1
// 5
// 1
// 1
// 1
// 1
// 2

// Output (stdout):
// Incompatible

#include <stdio.h>
#include <stdbool.h>

bool areCompatible(int n1, int arr1[], int n2, int arr2[]) {
    if(n1 != n2) {
        return false;
    }
    for(int i = 0; i < n1; i++) {
        if(arr1[i] < arr2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n1;
    scanf("%d", &n1);
    int arr1[n1];
    for(int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    int n2;
    scanf("%d", &n2);
    int arr2[n2];
    for(int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    if(areCompatible(n1, arr1, n2, arr2)) {
        printf("Compatible\n");
    } else {
        printf("Incompatible\n");
    }

    return 0;
}
