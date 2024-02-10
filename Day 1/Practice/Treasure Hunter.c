// Description:
// Though there have been more successful pirates, Blackbeard is one of the best-known and widely feared of his time. He commanded four ships and had a pirate army of 300 at the height of his career and defeated the famous warship, HMS “Scarborough” in a sea battle. He was known for barreling into the battle clutching two swords with several knives and pistols at the ready. He captured over forty merchant ships in the Caribbean and without flinching killed many prisoners. Now, Blackbeard and his three pirates found a treasure of gold coins. Long Ben too joined them. They decided to share the treasure. Blackbeard agreed to give x% share for Long Ben. He then decided to take y% share from the remaining treasure. His other pirates will share the remaining gold coins equally. Write a program to compute their shares. After sharing the gold coins in this manner, if there are any leftover coins they decided to throw them into the sea.

// Input Format:
// Input consists of 3 integers. The first input corresponds to the number of gold coins in the treasure. The second input corresponds to Ben's share percentage. The last input corresponds to Blackbeard's share percentage.

// Output Format:
// The output consists of three integers. The first output integer corresponds to Long Ben's share. The second output integer corresponds to Blackbeard's share. The third output should correspond to the other 3 pirates' equally divided shares.

// Sample Input:
// 729
// 65
// 87

// Sample Input:
// 473
// 222
// 11

// Input (stdin):
// 654
// 87
// 65

// Output (stdout):
// 568
// 55
// 10

#include <stdio.h>

int main() {
    int total_coins, ben_share_percent, blackbeard_share_percent;
    scanf("%d", &total_coins);
    scanf("%d", &ben_share_percent);
    scanf("%d", &blackbeard_share_percent);

    int ben_share = total_coins * ben_share_percent / 100;
    total_coins -= ben_share;

    int blackbeard_share = total_coins * blackbeard_share_percent / 100;
    total_coins -= blackbeard_share;

    int other_pirates_share = total_coins / 3;

    printf("%d\n", ben_share);
    printf("%d\n", blackbeard_share);
    printf("%d\n", other_pirates_share);

    return 0;
}
