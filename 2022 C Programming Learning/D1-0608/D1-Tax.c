#include <stdio.h>

int main(void)
{
    float amount_of_dollar,amount_with_tax_added;

    printf("The amount of dollar : ");
    scanf("%f",&amount_of_dollar);

    amount_with_tax_added = 1.05f * amount_of_dollar;

    printf("The amount with tax added is ");
    printf("%.2f\n",amount_with_tax_added);

    return 0;
}