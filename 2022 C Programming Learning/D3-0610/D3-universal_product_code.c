/* Compute the check digit of UPC */

#include <stdio.h>

int main(void)
{
    int digit_01,digit_02,digit_03,digit_04,digit_05,digit_06,digit_07,digit_08,digit_09,digit_10,digit_11,check_digit,sum1,sum2,total;

    printf("Enter the first 11 digits of a Universal Product Code: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&digit_01,&digit_02,&digit_03,&digit_04,&digit_05,&digit_06,&digit_07,&digit_08,&digit_09,&digit_10,&digit_11);

    sum1 = digit_01 + digit_03 + digit_05 + digit_07 + digit_09 + digit_11;
    sum2 = digit_02 + digit_04 + digit_06 + digit_08 + digit_10;

    total = ((3 * sum1 + sum2) - 1) % 10;
    check_digit = 9 - total;

    printf("Check digit = %1d\n",check_digit);

    return 0;
}