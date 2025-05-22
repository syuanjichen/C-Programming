/* Check the validity of UPC */

#include <stdio.h>

int main(void)
{
    int digit_01,digit_02,digit_03,digit_04,digit_05,digit_06,digit_07,digit_08,digit_09,digit_10,digit_11,digit_12,check_digit,sum1,sum2,total;

    printf("Enter a Universal Product Code: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&digit_01,&digit_02,&digit_03,&digit_04,&digit_05,&digit_06,&digit_07,&digit_08,&digit_09,&digit_10,&digit_11,&digit_12);

    sum1 = digit_01 + digit_03 + digit_05 + digit_07 + digit_09 + digit_11;
    sum2 = digit_02 + digit_04 + digit_06 + digit_08 + digit_10;

    total = ((3 * sum1 + sum2) - 1) % 10;
    check_digit = 9 - total;

    if(check_digit == digit_12)
        printf("VALID UPC!\n");
    else
        printf("INVALID UPC!");
        
    return 0;
}