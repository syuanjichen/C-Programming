/* Reverse a two-digit number */

#include <stdio.h>

int main(void)
{
    int num1_e0,num1_e1,num2_e0,num2_e1;

    printf("Enter a two-digit number: ");
    scanf("%1d%1d",&num1_e1,&num1_e0);

    num2_e1 = num1_e0;
    num2_e0 = num2_e1;

    printf("The reversal is %1d%1d\n",num2_e1,num2_e0);

    return 0;
}