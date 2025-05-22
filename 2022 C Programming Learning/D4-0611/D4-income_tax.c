/* Calculate income tax */

#include <stdio.h>

int main(void)
{
    float income,tax;

    printf("Enter the tax income: ");
    scanf("%f",&income);

    if(0.00f <= income && income < 750.00f)
    {
        tax = income * 0.01f;
        printf("Amount of tax = $%.2f\n",tax);
    }
    else if(income < 2250.00f)
    {
        tax = 7.50f + 0.02f * (income - 750.00f);
        printf("Amount of tax = $%.2f\n",tax);
    }
    else if(income < 3750.00f)
    {
        tax = 37.50f + 0.03f * (income - 2250.00f);
        printf("Amount of tax = $%.2f\n",tax);
    }
    else if(income < 5250.00f)
    {
        tax = 82.50f + 0.04f * (income - 3750.00f);
        printf("Amount of tax = $%.2f\n",tax);
    }
    else if(income < 7000.00f)
    {
        tax = 142.50f + 0.05f * (income - 5250.00f);
        printf("Amount of tax = $%.2f\n",tax);
    }
    else
    {
        tax = 230.00f + 0.06f * (income - 7000.00f);
        printf("Amount of tax = $%.2f\n",tax);
    }

    return 0;
}