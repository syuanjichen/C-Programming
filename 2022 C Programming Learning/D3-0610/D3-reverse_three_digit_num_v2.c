/* Reverse three-digit numbers */

#include <stdio.h>

int main(void)
{
    int num1,num1r_e2,num1r_e1,num1r_e0;

    printf("Enter a three-digit number: ");
    scanf("%3d",&num1);

    num1r_e2 = (num1 % 100) % 10;
    num1r_e1 = (num1 % 100) / 10;
    num1r_e0 = num1 / 100;

    printf("The reversal is %1d%1d%1d\n",num1r_e2,num1r_e1,num1r_e0);

    return 0;
}