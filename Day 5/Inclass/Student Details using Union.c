// Description:
// Write a program to read and display student data using union.

// Input Format:
// - The first character input consists of the grade of the student
// - The second character array input consists of the roll number of student
// - The third float input consists of the mark of the student
// - The fourth integer input consists of the fees for student

// Output Format:
// Refer to the sample output

// Sample Input 0:
// A
// 15EC110
// 78.98
// 25000

// Sample Output 0:
// Grade is: A
// Rollno is: 15EC110
// Mark is: 78.98
// Fees paid is: 25000

// Input (stdin):
// C
// 15EC089
// 56
// 50000

// Output (stdout)
// Grade is: C
// Rollno is: 15EC089
// Mark is: 56
// Fees paid is: 50000

#include <stdio.h>
#include <ctype.h>

union Student {
    char grade[2];
    char rollno[10];
    float mark;
    int fees;
};

int main() {
    union Student s;

    scanf("%s", s.grade);
    printf("Grade is: %s\n", s.grade);

    scanf("%s", s.rollno);
    printf("Rollno is: %s\n", s.rollno);

    scanf("%f", &s.mark);
    if (s.mark == (int)s.mark) {
        printf("Mark is: %d\n", (int)s.mark);
    } else {
        printf("Mark is: %.2f\n", s.mark);
    }

    scanf("%d", &s.fees);
    printf("Fees paid is: %d\n", s.fees);

    return 0;
}
