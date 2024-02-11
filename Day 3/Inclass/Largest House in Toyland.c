// Description:
// In the city of Toyland, there are N houses. Noddy is looking for a piece of land in the city to build his house. All the houses in the city lie in a straight line and all of them are given a house number and position of the house from the entry point of the city. Noddy wants to find the house numbers between which he can build the largest house. Write an algorithm to help Noddy to find the house numbers between which he can build his house.
// Hint: No two houses will have the same position in case of multiple such answers, print the one with the least distance from the reference point.

// Input Format:
// The first line of the input consists of an integer num, representing the number of houses (N). The next N lines consist of two space-separated integers – house Num and pos, representing the house number and the position of the houses.

// Constraints:
// 2 < num < 10^6
// 1 < house Num < num
// 0 < pos < 10^6

// Output Format:
// Print two space-separated integers representing the house numbers in ascending order between which the largest plot is available.

// Sample Input:
// 5
// 3 7
// 1 9
// 2 0
// 5 15
// 4 30

// Sample Output:
// 4 5

// Input (stdin):
// 4
// 1 2
// 2 3
// 3 1
// 4 20

// Output (stdout):
// 2 4

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int num;
    int pos;
} House;

int compare(const void *a, const void *b) {
    return ((House *)a)->pos - ((House *)b)->pos;
}

int main() {
    int n;
    scanf("%d", &n);

    House houses[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &houses[i].num, &houses[i].pos);
    }

    qsort(houses, n, sizeof(House), compare);

    int maxDist = 0, house1 = 0, house2 = 0;
    for (int i = 1; i < n; i++) {
        if (houses[i].pos - houses[i-1].pos > maxDist) {
            maxDist = houses[i].pos - houses[i-1].pos;
            house1 = houses[i-1].num;
            house2 = houses[i].num;
        }
    }

    if (house1 < house2) {
        printf("%d %d\n", house1, house2);
    } else {
        printf("%d %d\n", house2, house1);
    }

    return 0;
}
