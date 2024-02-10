// Description:
// Richard Castle wants to buy a shirt. As he is very lazy, he decided to buy the shirt online. He chooses a shirt on Flipkart and is surprised to see the same shirt on Snapdeal, and Amazon as well. So he decided to buy the shirt from the website which offers the least price. The price of the shirt, the discount percentage, and the shipping charges of all three websites have been given as input. Help him in calculating the price of the shirt on each website and decide which website has the lowest price.If the price in all the three websites are same then first priority goes to Flipkart, then Snapdeal and finally Amazon.

// Input Format:
// Input consists of 9 integers. The first three input corresponds to Flipkart details such as the price of the shirt, discount offered, and shipping charges. The next three input corresponds to Snapdeal details such as the price of the shirt, discount offered, and shipping charge. The last three input corresponds to Amazon details such as the price of the shirt, discount offered, and shipping charge.

// Output Format:
// The Output consists of three integers that denote the prices on Flipkart, Snapdeal, and Amazon and should suggest the website that has the lowest price.

// Sample Input:
// 1000
// 50
// 50
// 900
// 50
// 70
// 800
// 10
// 200

// Sample Output:
// In Flipkart: Rs.550
// In Snapdeal: Rs.520
// In Amazon: Rs.920
// Choose Snapdeal

// Input (stdin):
// 1000
// 60
// 80
// 900
// 50
// 30
// 1000
// 10
// 200

// Output (stdout):
// In Flipkart: Rs.480
// In Snapdeal: Rs.480
// In Amazon: Rs.1100
// Choose Flipkart

#include <stdio.h>

int main() {
    int flipkart_price, flipkart_discount, flipkart_shipping;
    int snapdeal_price, snapdeal_discount, snapdeal_shipping;
    int amazon_price, amazon_discount, amazon_shipping;

    scanf("%d %d %d", &flipkart_price, &flipkart_discount, &flipkart_shipping);
    scanf("%d %d %d", &snapdeal_price, &snapdeal_discount, &snapdeal_shipping);
    scanf("%d %d %d", &amazon_price, &amazon_discount, &amazon_shipping);

    int flipkart_final_price = flipkart_price - (flipkart_price * flipkart_discount / 100) + flipkart_shipping;
    int snapdeal_final_price = snapdeal_price - (snapdeal_price * snapdeal_discount / 100) + snapdeal_shipping;
    int amazon_final_price = amazon_price - (amazon_price * amazon_discount / 100) + amazon_shipping;

    printf("In Flipkart: Rs.%d\n", flipkart_final_price);
    printf("In Snapdeal: Rs.%d\n", snapdeal_final_price);
    printf("In Amazon: Rs.%d\n", amazon_final_price);

    if(flipkart_final_price <= snapdeal_final_price && flipkart_final_price <= amazon_final_price) {
        printf("Choose Flipkart\n");
    } else if(snapdeal_final_price <= amazon_final_price) {
        printf("Choose Snapdeal\n");
    } else {
        printf("Choose Amazon\n");
    }

    return 0;
}
