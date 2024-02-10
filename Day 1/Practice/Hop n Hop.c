Description:
Peter Rabbit lives in a colony. He is the only rabbit in his colony who is not able to hop. On his 5th birthday, his father Rabbit gifted him a pogo stick as he could not jump like the other rabbits. He is so excited to play with the pogo stick. The pogo stick hops one unit per jump. He wanders around his house jumping with pogo sticks. He wants to show the pogo stick to his friend and decides to go using his pogo stick. Write a program to find the number of hops needed to reach his friends' house (x,y). Assume that Peter Rabbit's house is in the coordinates (3,4).

Input Format:
Input consists of two integers x and y.

Output Format:
The output is an integer. It corresponds to the number of hops needed to reach his friend's house.

Sample Input:
5 
10 

Sample Output:
6

Input (stdin):
4
6

Output (stdout):
2

#include <stdio.h>

int main() {
    int a = 3, b = 4, c, d, x, y;
    
    // Input
    scanf("%d", &x);
    scanf("%d", &y);

    // Calculate the differences
    c = x - a;
    d = y - b;

    // Compare and print the greater value
    (c > d) ? printf("%d\n", c) : printf("%d\n", d);

    return 0;
}
