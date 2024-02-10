// Fencing the Ground
// In Westeros, the fighting ground is rectangular in shape. The King of Westeros, Bran Stark decides to build a fence around the ground. In order to help the construction workers to build a straight fence, he planned to place a thick rope around the ground. He decided to buy a rope of length that exactly fits the boundary. He also wanted to cover the entire ground with a thick carpet during the rainy season. The carpet should also be bought in such a way that it exactly covers the entire ground. Being the three-eyed Raven, he was lost in his thoughts and requested your help. Can you please help King Bran by writing a program to find the exact length of the rope and the exact area of the carpet that is required?

// Hint:
// Area of rectangle = length * breadth
// perimeter of a rectangle = 2* (length + breadth)

// Input Format:
// Input consists of 2 integers. 
// The first integer corresponds to the length of the ground. 
// The second integer corresponds to the breadth of the ground.

// Output Format:
// Refer to the sample Input and Output for exact formatting specifications.

// Sample Input 1:
// 50
// 20

// Sample Output 1:
// The required length is 140 m
// The required area of carpet is 1000 sqm

// Sample Input 2:
// 20
// 90

// Sample Output 2:
// The required length is 220 m
// The required area of carpet is 1800 sqm

#include <stdio.h>

int main() {
    int length, breadth;

    // Input
    scanf("%d %d", &length, &breadth);

    // Calculate the required length of the rope (perimeter of the rectangle)
    int requiredLength = 2 * (length + breadth);

    // Calculate the required area of the carpet (area of the rectangle)
    int requiredArea = length * breadth;

    // Output
    printf("The required length is %d m\n", requiredLength);
    printf("The required area of carpet is %d sqm\n", requiredArea);

    return 0;
}
