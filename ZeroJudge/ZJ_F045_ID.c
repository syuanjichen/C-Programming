#include <stdio.h>

int main(void)
{
    char numstr[10];
    int num[9];
    int maxpos1, maxpos2, maxnum1, maxnum2, id_check, sum;
    int i, j;

    scanf("%s", numstr);

    for(i = 0 ; i < 9 ; i++)
        num[i] = numstr[i] - 48;

    id_check = (100 * num[6]) + (10 * num[7]) + (num[8]);

    /*maxnum1 = num[0];
    maxpos1 = 0;

    for(i = 0 ; i < 9 ; i++)
    {
        if(num[i] >= maxnum1)
        {
            maxnum1 = num[i];
            maxpos1 = i;
        }
    }

    maxnum2 = num[0];
    maxpos2 = 0;

    for(i = 0 ; i < 9 ; i++)
    {
        if(i == maxpos1)
            continue;
        else
        {
            if(num[i] >= maxnum2)
            {
                maxnum2 = num[i];
                maxpos2 = i;
            }
        }
    }*/

    int temp;

    for(i = 8 ; i >= 0 ; i--)
    {
        for(j = 0 ; j < i ; j++)
        {
            if(num[j] > num[j + 1])
            {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

    maxnum1 = num[8];
    maxnum2 = num[7];

    sum = (maxnum1 * maxnum1) + (maxnum2 * maxnum2);

    if(sum == id_check)
        printf("Good Morning!\n");
    else
        printf("SPY!\n");

    return 0;
}