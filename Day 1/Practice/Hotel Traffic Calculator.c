// Description:
// Jon Snow and the men in the north decided to open Castle Black for the northerners and the Castle was turned into a Hotel. The Hotel was flourishing and there was high demand for the rooms. So Jon Snow decided to modify the tariff accordingly. Write a program to calculate the hotel tariff. The room rent is 20% high during peak seasons [April-June and November-December].

// Input Format:
// The first input integer denotes the count of the month. The second input integer denotes the room rent per day. The third input integer denotes the number of days stayed in the hotel.

// Output Format:
// Print the hotel tariff to be paid. (Note: if the month value entered is not ranging from 1-12, print as Invalid Input)

// Sample Input:
// 3
// 1500
// 2

// Sample Output:
// 3000

// Input (stdin):
// 14
// 1500
// 2

// Output (stdout):
// Invalid Input

#include <stdio.h>

int main() {
    int month, room_rent, days;
    scanf("%d", &month);
    scanf("%d", &room_rent);
    scanf("%d", &days);

    if(month < 1 || month > 12) {
        printf("Invalid Input\n");
        return 0;
    }

    int total = room_rent * days;

    if((month >= 4 && month <= 6) || (month >= 11 && month <= 12)) {
        total += total * 0.2;
    }

    printf("%d\n", total);

    return 0;
}
