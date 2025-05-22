/* Calculate the commissions of two brokers */

#include <stdio.h>

int main(void)
{
    int number_of_share;
    float price_per_share,commission_original,commission_rival,total;

    printf("Enter the price per share: ");
    scanf("%f",&price_per_share);
    printf("Enter the number of shares: ");
    scanf("%d",&number_of_share);

    total = price_per_share * number_of_share;

    if(total < 2500.00f)
        commission_original = 30.00f + 0.017 * total;
    else if(total < 6250.00f)
        commission_original = 56.00f + 0.0066 * total;
    else if(total < 20000.00f)
        commission_original = 76.00f + 0.0034 * total;
    else if(total < 50000.00f)
        commission_original = 100.00f + 0.0022 * total;
    else if(total < 500000.00f)
        commission_original = 155.00f + 0.0011 * total;
    else
        commission_original = 255.00f + 0.0009 * total;

    if(commission_original < 39.00f)
        commission_original = 39.00f;

    if(number_of_share < 2000)
        commission_rival = 33.00f + 0.03 * number_of_share;
    else
        commission_rival = 33.00f + 0.02 * number_of_share;

    printf("Commission of the original broker: $%.2f\n",commission_original);
    printf("Commission of the rival broker: $%.2f\n",commission_rival);

    return 0;
}