// Description:
// There are 3 labs in the Chemical department(L1, L2, and L3) with a seating capacity of x, y, and z. A single lab needs to be allocated to a class of 'n' students. How many of the 3 labs can accommodate 'n' students?

// Input Format:
// Input consists of 4 integers.
// The first input is an integer which denotes the seating capacity of L1(x).
// The second input is an integer which denotes the seating capacity of L2(y).
// The third input is an integer which denotes the seating capacity of L3(z).
// The fourth input is an integer which denotes the number of students(n).

// Output Format:
// Print the number of labs that can accommodate the 'n' number of students.

// Sample Input 1:
// 30
// 40
// 20
// 25

// Sample Output 1:
// 2

// Explanation:
// We can accommodate 25 students in 1st two labs and so the output is 2.

// Sample Input 2:
// 30
// 40
// 20
// 15

// Sample Output 2:
// 3

// Explanation:
// We can accommodate 15 students in 1st two labs and so the output is 3.

#include <stdio.h>

int main() {
    int x, y, z, n;
    int count = 0;

    scanf("%d %d %d %d", &x, &y, &z, &n);

    if(x >= n)
        count++;
    if(y >= n)
        count++;
    if(z >= n)
        count++;

    printf("%d\n", count);

    return 0;
}
