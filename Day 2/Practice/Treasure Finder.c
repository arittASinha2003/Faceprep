// Description:
// Nikitha and Danny are close friends. They both are studying in the same school. Now they are on summer vacation. As they are bored, they ask their parents to take them to an exhibition. Nikitha and Danny play a game. In this game, there are three boxes with some number written on top. There is a treasure in one of the three boxes and it is present in the box with the second largest number on top. Also, to open the box, they need to decode the correct code of this box. The clue given to them to find the code is that it is the largest number that divides all three given numbers. So, now help Nikitha and Danny to decode the code.

// Input Format:
// Input consists of three integers. The first input corresponds to the number of the first box. The second input corresponds to the number of the second box. The third input corresponds to the number of the third box.

// Output Format:
// Refer to the sample output.

// Sample Input 1:
// 2
// 4
// 6

// Sample Output 1:
// The treasure is in the box which has the number 4
// The code to open the box is 2

// Input (stdin):
// 7
// 5
// 6

// Output (stdout):
// The treasure is in the box which has the number 6
// The code to open the box is 1

#include <stdio.h>
#include <math.h>
int main()
{
  int b1, b2, b3;
  scanf("%d %d %d", &b1, &b2, &b3);
  
  int second_largest(b1, b2, b3)
  {
    if ((b1 > b2 && b1 < b3) || (b1 < b2 && b1 > b3))
        return b1;
    else if ((b2 > b1 && b2 < b3) || (b2 < b1 && b2 > b3))
        return b2;
    else
        return b3;
  }
  
  int l2 = second_largest(b1, b2, b3);
  printf("The treasure is in the box which has the number %d\n", l2);
  
  int gcd(b1, b2)
  {
    if (b2 == 0)
        return b1;
    return gcd(b2, b1 % b2);
  }
  
  int gcd_of_three(int b1, int b2, int b3)
  {
    return gcd(gcd(b1, b2), b3);
  }
  
  int code = gcd_of_three(b1, b2, b3);
  printf("The code to open the box is %d", code);
  
  return 0;
}
