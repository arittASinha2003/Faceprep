// Description:
// Write a program to calculate the difference between two time periods using structure.

// Input Format:
// The first input consists of hours of time1
// The second input consists of minutes of time1
// The third input consists of seconds of time1
// The fourth input consists of hours of time2
// The fifth input consists of minutes of time2
// The sixth input consists of seconds of time2
// Note: hours, minutes, and seconds are denoted as structure variables.

// Output Format:
// Refer sample output format

// Sample Input 0:
// 12
// 45
// 56
// 2
// 39
// 45

// Sample Output 0:
// ﻿TIME DIFFERENCE: 12:45:56 - 2:39:45 = 10:6:11

// Input (stdin):
// 4
// 56
// 60
// 5
// 4
// 10

// Output (stdout):
// TIME DIFFERENCE: 4:56:60 - 5:4:10 = -1:52:50

#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

int main() {
    struct Time t1, t2, diff;

    scanf("%d %d %d", &t1.hours, &t1.minutes, &t1.seconds);
    scanf("%d %d %d", &t2.hours, &t2.minutes, &t2.seconds);

    if(t2.seconds > t1.seconds){
        --t1.minutes;
        t1.seconds += 60;
    }

    diff.seconds = t1.seconds - t2.seconds;
    if(t2.minutes > t1.minutes){
        --t1.hours;
        t1.minutes += 60;
    }

    diff.minutes = t1.minutes - t2.minutes;
    diff.hours = t1.hours - t2.hours;

    printf("TIME DIFFERENCE: %d:%d:%d - %d:%d:%d = %d:%d:%d\n", t1.hours, t1.minutes, t1.seconds, t2.hours, t2.minutes, t2.seconds, diff.hours, diff.minutes, diff.seconds);

    return 0;
}
