/* Reverse two-digit numbers */

#include <stdio.h>

int main(void)
{
    int num1,num1r_e1,num1r_e0;

    printf("Enter a two-digit number: ");
    scanf("%2d",&num1);

    num1r_e1 = num1 % 10;
    num1r_e0 = num1 / 10;

    printf("The reversal is: %1d%1d\n",num1r_e1,num1r_e0);

    return 0;
}