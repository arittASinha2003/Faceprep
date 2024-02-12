// Description:
// Tyrion Lannister, Chandler Bing, and Sheldon Cooper went on a tour to Zanzibar with their friends. As a part of the tour, you went boating with them. For the boat to remain stable, the number of people on one boat is restricted based on the weight of the people. You find that the boatman who is sailing your boat is so much greedy of money. For earning more, he takes too many people to travel in the boat at a time. So you want to check how many people can travel in the boat at a time so that the boat will not drown. Calculate the weight by considering the number of adults and number of children. Assume that an adult weighs 75 kg and children weighing 30 kg each. If the weight is normal, then display Boat is stable, else display Boat will sink.

// Input Format:
// Input consists of 3 integers.
// The first input corresponds to the weight that the boat can handle.
// The second input corresponds to the number of adults.
// The third input corresponds to the number of children.

// Output Format:
// The output should be any one of the below-given strings.
// Boat is stable or Boat will sink

// Sample Input 1:
// 340
// 2
// 3

// Sample Output 1:
// Boat is stable

// Explanation:
// Here, the weight that the boat can handle is greater than the weight of adults and children. Hence the output is Boat is stable.

// Sample Input 2:
// 600
// 7
// 4

// Sample Output 2:
// Boat will sink

// Explanation:
// Here, the weight that the boat can handle is less than the weight of adults and children. Hence the output is Boat will sink.

#include <stdio.h>

int main() {
    int maxWeight, numAdults, numChildren;
    scanf("%d", &maxWeight);
    scanf("%d", &numAdults);
    scanf("%d", &numChildren);

    int totalWeight = numAdults * 75 + numChildren * 30;

    if (totalWeight <= maxWeight)
        printf("Boat is stable\n");
    else
        printf("Boat will sink\n");

    return 0;
}
