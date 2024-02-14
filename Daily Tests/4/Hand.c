// Description:
// The catering staff in the Dothraki Sece Hostel, in the Kingdom of Essos, are known for their good cooking skills as well as hospitality. We all know that the dining table arrangement needs to be different for left-handed and right-handed persons. So whenever any VIP guest visits Dothraki, theywould make the table arrangements based on whether he/she is left-handed or right-handed. The mess is situated on the 15th floor of the hostel building. Dothraki hostel building has super-fast elevators to help travel from one floor to another. Each elevator has 2 doors, the front one and the rear one. If a person enters the elevator through the front door, he goes out through the rear door and vice-versa. The elevator has 2 rails numbered 1 and 2. Rail 1 is located to the left of the entrance of the front door (or correspondingly, to the right of the entrance of the rear door). Rail 2 is located opposite it, to the right of the entrance of the front door and to the left of the entrance of the rear door. We know that each person holds on the rail with his/her strongest hand. There is an IP camera in the elevator and based on the camera output, the catering staff will be easily able to identify whether a guest is left-handed or right-handed. They have decided to automate this task and they asked for the help of the Image Processing Group. The Image Processing Group has written a program to perform this task and the program will output the door through which the person entered and the rail number which the person held. Based on this input, write a program to determine whether a person is left-handed or right-handed.

// Input Format:
// The first input is a string to denote the door as "front" or "rear" or "FRONT" or " REAR".
// The second input is an integer to denote the rail as 1 or 2.

// Output Format:
// Print the string "Left Handed" or "Right Handed".

// Sample Input 1:
// front
// 1

// Sample Output 1:
// Left Handed

// Explanation:
// Here, the door is "front" and the rail is 1 and hence the output is "Left Handed".

// Sample Input 2:
// REAR
// 1

// Sample Output 2:
// Right Handed

// Explanation:
// Here, the door is "REAR" and the rail is 1 and hence the output is "Right Handed".

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char door[10];
    int rail;

    scanf("%s", door);
    scanf("%d", &rail);

    // Convert the door string to lowercase for easier comparison
    for(int i = 0; door[i]; i++){
        door[i] = tolower(door[i]);
    }

    if ((strcmp(door, "front") == 0 && rail == 1) || (strcmp(door, "rear") == 0 && rail == 2)) {
        printf("Left Handed\n");
    } else if ((strcmp(door, "front") == 0 && rail == 2) || (strcmp(door, "rear") == 0 && rail == 1)) {
        printf("Right Handed\n");
    } else {
        printf("Invalid input\n");
    }
    return 0;
}
