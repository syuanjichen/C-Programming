/* Find the even square number less than n */

#include <stdio.h>

int main(void)
{
    int goal,number = 1;
    printf("Enter a number: ");
    scanf("%d",&goal);

    while(number * number <= goal)
    {
        if(number * number % 2 == 0)
            printf("%d\n",number * number);
        number++;
    }

    return 0;
}