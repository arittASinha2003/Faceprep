// Description:
// Praveen is crazy about IPL. He was watching Mumbai Indians vs. Chennai Super Kings final match. Mumbai won the toss and elected to bat first. They finished batting with a score of X. Next, Chennai started to bat and scored Y runs in N number of balls. Now, Praveen wants to calculate the run rate and check whether there is a probability for Chennai to win or not. Help him calculate the run rate and check the probability.

// Input Format:
// Input consists of 4 integers. The first input corresponds to the total number of balls. The second input corresponds to the total number of runs. The third input corresponds to the number of runs scored. The fourth input corresponds to the number of balls bowled.

// Output Format:
// The first output corresponds to the total number of overs. The second output corresponds to the total number of overs finished. The third output corresponds to the current run rate. The fourth output corresponds to the total run rate. The fifth output corresponds to the eligibility. If eligible print "Eligible to Win" else print "Not Eligible to Win"

// Sample Input 1:
// 300
// 375
// 78
// 45

// Sample Output 1:
// 50
// 7.3
// 10.7
// 7.5
// Eligible to Win

// Input (stdin):
// 300
// 268
// 23
// 45

// Output (stdout):
// 50
// 7.3
// 3.2
// 5.4
// Not Eligible to Win

#include <stdio.h>

int main() {
    int a, b, x, y;

    scanf("%d %d %d %d", &a, &b, &x, &y);

    float m = a / 6.0;
    int n = y / 6;
    int p = y % 6;
    float k = ((float)n + (float)p / 10);

    float d = x / k;
    float f = b / m;

    printf("%.0f\n", m);
    printf("%.1f\n", k);
    printf("%.1f\n", d);
    printf("%.1f\n", f);

    if (d > f)
        printf("Eligible to Win");
    else
        printf("Not Eligible to Win");

    return 0;
}
