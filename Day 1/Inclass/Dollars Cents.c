// Description:
// Kamal was traveling from Korea to USA and he was not aware of the currency system of USA. Can you please help him to add two dollars and cents?

// Note: 1 dollar = 100 cents

// Input Format:
// Input consists of 4 integers. The first two inputs correspond to the value of the first dollar and cent. The next two inputs correspond to the value of the second dollar and cent.

// Output Format:
// The output should print the sum of dollars and cents.

// Sample Input:
// 30
// 10
// 140
// 99

// Sample Output:
// 171
// 9

// Input (stdin):
// 99
// 99
// 99
// 99

// Output (stdout):
// 199
// 98

#include<stdio.h>
int main()
{
  int totalcent;
  int dollar1, cent1, dollar2, cent2, totaldollar;
  scanf("%d", &dollar1);
  scanf("%d", &cent1);
  scanf("%d", &dollar2);
  scanf("%d", &cent2);

  totalcent = cent1 + cent2;
  totaldollar = dollar1 + dollar2 + totalcent / 100; 
  totalcent = totalcent - (totalcent / 100) * 100;
  printf("%d\n", totaldollar);
  printf("%d", totalcent); 


  return 0;
}
