// Description:
// The Modern World Cinderella was happy to meet Prince Charming at the ballroom and she danced with him happily. While she was dancing, Prince wanted to check whether Cinderella is a perfect match for him. He asked her a question to check her knowledge of Arrays. Can you help Cinderella to write a program to find whether the two arrays are the same or not?
// Note: Two arrays are said to be the same if the sum of both arrays is the same and the size of the arrays is the same.

// Input Format:
// Input consists of 2 integers and 2 arrays. The integers should correspond to the size of the arrays.

// Output Format:
// If two arrays are the same, display "Same" else display "Not Same"

// Sample Input 0:
// 4
// 4
// 1
// 2
// 3
// 4
// 1
// 2
// 3
// 4

// Sample Output 0:
// Same

// Input (stdin):
// 3
// 3
// 1
// 2
// 1
// 2
// 3
// 6

// Output (stdout):
// Not Same

#include <stdio.h>

int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    if (n1 != n2) {
        printf("Not Same\n");
        return 0;
    }

    int sum1 = 0, sum2 = 0;
    int temp;
    for (int i = 0; i < n1; i++) {
        scanf("%d", &temp);
        sum1 += temp;
    }
    for (int i = 0; i < n2; i++) {
        scanf("%d", &temp);
        sum2 += temp;
    }

    if (sum1 == sum2) {
        printf("Same\n");
    } else {
        printf("Not Same\n");
    }

    return 0;
}
