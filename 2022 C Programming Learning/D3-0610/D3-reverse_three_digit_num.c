/* Reverse a three-digit number */

#include <stdio.h>

int main(void)
{
    int num1_e0,num1_e1,num1_e2,num2_e0,num2_e1,num2_e2;

    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d",&num1_e2,&num1_e1,&num1_e0);

    num2_e2 = num1_e0;
    num2_e1 = num1_e1;
    num2_e0 = num1_e2;

    printf("The reversal is %1d%1d%1d\n",num2_e2,num2_e1,num2_e0);

    return 0;
}