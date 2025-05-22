/* Reduce a fraction to lowest terms */

#include <stdio.h>

int main(void)
{
    int numerator,denominator,number_nume,number_deno,gcd_nume_deno,temp;

    printf("Enter a fraction: ");
    scanf("%d/%d",&numerator,&denominator);

    number_nume = numerator;
    number_deno = denominator;

    if(number_nume > number_deno)
    {
        temp = number_deno;
        number_deno = number_nume;
        number_nume = temp;
    }

    while(number_nume != 0)
    {
        temp = number_nume;
        number_nume = number_deno % number_nume;
        number_deno = temp;
    }

    gcd_nume_deno = number_deno;
    
    numerator = numerator / gcd_nume_deno;
    denominator = denominator / gcd_nume_deno;

    printf("In lowest terms: %d/%d\n",numerator,denominator);

    return 0;
}