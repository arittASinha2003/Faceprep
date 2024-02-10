// Description:
// John Watson just started to work as a programming trainer for Bart's Placement Cell. He is paid Rs.100 an hour, with a few exceptions. He earns an extra Rs.15 an hour for any part of a day where he works for more than 8 hours. Also, he earns a 25% bonus for working on Saturdays and a 50% bonus for working on Sundays. The bonuses for Saturday and Sunday are computed based on the hours worked on those days. You'll be given the number of hours John Watson worked on each day in a week (Sunday, Monday, ..., Saturday), and you need to compute his salary for the week.

// Input Format:
// Input consists of 7 integers

// Output Format:
// Print John's salary for a week.

// Sample Input 1:
// 0
// 8
// 8
// 8
// 10
// 6
// 0

// Sample Output 1:
// 4030

// Input (stdin):
// 4
// 5
// 0
// 8
// 0
// 6
// 0

// Output (stdout):
// 2500

#include <stdio.h>

int main() {
    int hours[7];
    for(int i = 0; i < 7; i++) {
        scanf("%d", &hours[i]);
    }

    double salary = 0;
    for(int i = 0; i < 7; i++) {
        double daily_salary = hours[i] * 100;
        if(hours[i] > 8) {
            daily_salary += (hours[i] - 8) * 15;
        }
        if(i == 0) { // Sunday
            daily_salary += daily_salary * 0.5;
        } else if(i == 6) { // Saturday
            daily_salary += daily_salary * 0.25;
        }
        salary += daily_salary;
    }

    printf("%.0f\n", salary);

    return 0;
}
