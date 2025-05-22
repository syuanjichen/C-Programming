/* Find the largest number input by user */

#include <stdio.h>

int main(void)
{
    double number,number_max;

    printf("Enter a number: ");
    scanf("%lf",&number);
    number_max = number;

    while(number > 0)
    {
        printf("Enter a number: ");
        scanf("%lf",&number);

        if(number > number_max)
            number_max = number;
    }

    printf("The largest number entered is %lf\n",number_max);

    return 0;
}