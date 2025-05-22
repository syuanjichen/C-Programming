/* Calculate the digits a number contains */

#include <stdio.h>
#include <math.h>

int main(void)
{
    int number,digits;

    printf("Enter a number: ");
    scanf("%d",&number);

    digits = (int)log10(number) + 1;

    printf("The number %d has %d digits.\n",number,digits);

    return 0;
}