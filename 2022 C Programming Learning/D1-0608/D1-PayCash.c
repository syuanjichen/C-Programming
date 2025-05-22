/* Pay Cash in $20,$10,$5,$1 bills */

#include <stdio.h>

int main(void)
{
    int amount_of_money,bills_20,bills_10,bills_05,bills_01;

    printf("The amount of money = ");
    scanf("%d",&amount_of_money);

    bills_20 = amount_of_money / 20;
    bills_10 = (amount_of_money - 20 * bills_20) / 10;
    bills_05 = (amount_of_money - 20 * bills_20 - 10 * bills_10) / 5;
    bills_01 = (amount_of_money - 20 * bills_20 - 10 * bills_10 - 5 * bills_05);

    printf("$20 bills: %d\n",bills_20);
    printf("$10 bills: %d\n",bills_10);
    printf(" $5 bills: %d\n",bills_05);
    printf(" $1 bills: %d\n",bills_01);

    return 0;
}