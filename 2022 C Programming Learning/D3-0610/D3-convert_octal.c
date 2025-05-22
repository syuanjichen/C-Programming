/* Convert a number to base 8 */

#include <stdio.h>

int main(void)
{
    int number,octal_e4,octal_e3,octal_e2,octal_e1,octal_e0;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d",&number);

    octal_e0 = number % 8;
    octal_e1 = (number / 8) % 8;
    octal_e2 = (number / 64) % 8;
    octal_e3 = (number / 512) % 8;
    octal_e4 = (number / 4096);

    printf("In octal (base 8), your number is %1d%1d%1d%1d%1d\n",octal_e4,octal_e3,octal_e2,octal_e1,octal_e0);

    return 0;
}