/* Calculate the Loan and Remaining Balance */

#include <stdio.h>

int main(void)
{
    float loan,interest_rate,monthly_payment,monthly_rate,remainder;

    printf("The amount of loan = ");
    scanf("%f",&loan);
    printf("The interest rate = ");
    scanf("%f",&interest_rate);
    printf("Monthly Payment = ");
    scanf("%f",&monthly_payment);

    monthly_rate = 1.00f + ((interest_rate / 100.0f) / 12.0f);
    remainder = loan * monthly_rate - monthly_payment;
    printf("Balance remaining after first payment: %.2f\n",remainder);

    remainder = remainder * monthly_rate - monthly_payment;
    printf("Balance remaining after second payment: %.2f\n",remainder);

    remainder = remainder * monthly_rate - monthly_payment;
    printf("Balance remaining after third payment: %.2f\n",remainder);

    return 0;
}