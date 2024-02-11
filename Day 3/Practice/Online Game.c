// Description:
// You are playing an online game. In the game, a list of N numbers is given. The player has to arrange the numbers so that all the odd numbers on the list come after the even numbers. Write an algorithm to arrange the given list such that all the odd numbers of the list come after the even numbers.

// Input Format:
// The first line of the input consists of an integer num, representing the size of the list(N). The second line of the input consists of N space-separated integers representing the values of the list.

// Output Format:
// Print N space-separated integers such that all the odd numbers of the list comes after the even numbers

// Sample Input:
// 8
// 10 98 3 33 12 22 21 11

// Sample Output:
// Array after Segregation
// 10 98 22 12 33 3 21 11

// Input (stdin):
// 5
// 73 4 63 23 65

// Output (stdout):
// Array after Segregation
// 4 73 63 23 65

#include <stdio.h>
int main()
{
  int num, i, j, temp;
  scanf("%d", &num);
  int a[num];
  
  for (i = 0; i < num; i++)
    scanf("%d", &a[i]);
  
  i = 0;
  j = num - 1;
  
  while (i < j)
  {
    while (a[i] % 2 == 0 && i < j)
      i++;
    while (a[j] % 2 != 0 && i < j)
      j--;
    if (i < j)
    {
      temp = a[i];
      a[i] = a[j];
      a[j] = temp;
      i++;
      j--;
    }
  }
  printf("Array after Segregation\n");
  for (i = 0; i < num; i++)
    printf("%d ", a[i]);
  return 0;
}
