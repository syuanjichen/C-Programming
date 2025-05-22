/* Pay loan for multiple payments */

#include <stdio.h>

int main(void)
{
    float loan,interest_rate,monthly_payment;
    int number_of_payments,loop_i;

    printf("Enter amount of loan: ");
    scanf("%f",&loan);
    printf("Enter interest rate: ");
    scanf("%f",&interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f",&monthly_payment);
    fflush(stdin);
    printf("Enter the number of payments: ");
    scanf("%d",&number_of_payments);

    for(loop_i = 1;loop_i <= number_of_payments;loop_i++)
    {
        loan = loan * (1.00f + ((interest_rate /12.00f) / 100.00f)) - monthly_payment;
        printf("Balance remaining after payment of month %d: %.2f\n",loop_i,loan);
    }

    return 0;
}