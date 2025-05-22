/* Find the largest and smallest number out of 4 numbers */

#include <stdio.h>

int main(void)
{
    int number_01,number_02,number_03,number_04,number_min,number_max;

    printf("Enter 4 integers: ");
    scanf("%d %d %d %d",&number_01,&number_02,&number_03,&number_04);

    number_max = number_01;
    number_min = number_01;

    if(number_02 > number_max || number_03 > number_max)
        number_max = number_02 > number_03 ? number_02 : number_03;
    number_max = number_04 > number_max ? number_04 : number_max;

    if(number_02 < number_min || number_03 < number_min)
        number_min = number_02 <= number_03 ? number_02 : number_03;
    number_min = number_04 < number_min ? number_04 : number_min;

    printf("Largest: %d\n",number_max);
    printf("Smallest: %d\n",number_min);

    return 0;    
}