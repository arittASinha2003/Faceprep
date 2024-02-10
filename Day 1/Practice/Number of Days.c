Description:
The given are two positive integers Year and Month, the task is to find the number of days corresponding to each month of the given year where 1 is January, 2 is February, 3 is March, and so on.

Note: The Input range of year: Minimum Year = 1900 and Maximum Year = 9999 i.e (1900<=Year<=9999). The Input range of month: Minimum Month = 12 and Maximum Year = 12 i.e (1<=month<=12) If the given year does not lie between the given range, output 0.

Input Format:
The input consists of two lines. The first line contains an integer, which is the Year. The second line contains an integer, which is the Month.

Output Format:
The output prints the number of days. Refer to the sample output

Sample Input 1:
2000
2

Sample Output 1:
29 Days

#include <stdio.h>

int main() {
    int year, month;
    scanf("%d", &year);
    scanf("%d", &month);

    if(year < 1900 || year > 9999 || month < 1 || month > 12) {
        printf("0\n");
        return 0;
    }

    if(month == 2) {
        if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("29 Days\n");
        } else {
            printf("28 Days\n");
        }
    } else if(month == 4 || month == 6 || month == 9 || month == 11) {
        printf("30 Days\n");
    } else {
        printf("31 Days\n");
    }

    return 0;
}
