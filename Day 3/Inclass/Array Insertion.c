// Description:
// Arjuna and Karna were playing cards. Arjuna has 5 cards. Karna wants to insert a new card in between Arjuna's cards. Karna wants to find the position to insert the card. So help him to find the position to insert a certain card. If Karna inserts a card in a position other than the position of 5 cards, the game will be over. So play carefully.
// For example, consider an array having three elements in it initially and a[0] = 1, a[1] = 2 and a[2] = 3 and you want to insert a number 45 at location 1 i.e. a[0] = 45, so we have to move elements one step below after insertion a[1] = 1, and a[2] = 2 and a[3] = 3.

// Input Format:
// The input consists of four integers. The first input corresponds to the size of an array. The second input corresponds to the array elements. The third input corresponds to the location where you wish to insert an element. The fourth input corresponds to the element to be inserted.

// Output Format:
// The output consists of array elements in a format after insertion. If the position where the element has to be inserted is greater than size of the array, then print Invalid Input.

// Sample Input:
// 5
// 1
// 2
// 3
// 4
// 5
// 4
// 10

// Sample Output:
// Array after insertion is
// 1
// 2
// 3
// 10
// 4
// 5

// Input (stdin):
// 4
// 1
// 2
// 3
// 4
// 8

// Output (stdout):
// Invalid Input

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n+1];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int pos, x;
    scanf("%d %d", &pos, &x);

    if (pos > n) {
        printf("Invalid Input\n");
    } else {
        for (int i = n; i >= pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos - 1] = x;

        printf("Array after insertion is\n");
        for (int i = 0; i <= n; i++) {
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}
