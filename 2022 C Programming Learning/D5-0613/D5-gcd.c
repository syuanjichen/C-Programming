/* Find the greatest common divisor of two integers */

#include <stdio.h>

int main(void)
{
    int number_1,number_2,temp;

    printf("Enter two integers: ");
    scanf("%d %d",&number_1,&number_2);

    if(number_1 > number_2)
    {
        temp = number_2;
        number_2 = number_1;
        number_1 = temp;
    }

    if(number_2 == 0)
        printf("Greatest common divisor: %d\n",number_1);
    else
    {
        while(number_1 != 0)
        {
            temp = number_1;
            number_1 = number_2 % number_1;
            number_2 = temp;
        }
        
        printf("Greatest common divisor: %d\n",number_2);
    }

    return 0;
}