// Description:

// Daenerys is very much interested in watching car racing. Once while doing so, this is what she observes that Car 1 is coming so fast. The road on which the car comes is divided into three. There are three roads A, B, and C. Each road is given some number. Before the car reaches the end of the road, she wants to know the road on which the car will travel. Help her in finding in which road the car will travel?

// Input Format:
// Input consists of 4 integers.
// The first input corresponds to the number of road A
// The second input corresponds to the number of road B.
// The third input corresponds to the number of road C
// The fourth input corresponds to the number of cars.

// Output Format:
// The output should be one of the given strings.
// Car 1 goes into road A or Car 1 goes into road B or Car 1 goes into road C
// If the car cannot travel on any road, display No path exists.

// Sample Input 1:
// 243
// 136
// 567
// 17

// Sample Output 1:
// Car 1 goes into road B

// Explanation:
// Here, the number of road B is completely divisible by the number of cars, and hence the output is Car 1 goes into road B.

// Sample Input 2:
// 248
// 337
// 235
// 4

// Sample Output 2:
// Car 1 goes into road A

// Explanation:
// Here, the number of road A is completely divisible by the number of cars, and hence the output is Car 1 goes into road A.

#include <stdio.h>

int main() {
    int roadA, roadB, roadC, cars;
    scanf("%d %d %d %d", &roadA, &roadB, &roadC, &cars);

    if (roadA % cars == 0) {
        printf("Car 1 goes into road A\n");
    } else if (roadB % cars == 0) {
        printf("Car 1 goes into road B\n");
    } else if (roadC % cars == 0) {
        printf("Car 1 goes into road C\n");
    } else {
        printf("No path exists\n");
    }

    return 0;
}
