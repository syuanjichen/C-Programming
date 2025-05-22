#include <stdio.h>

int main(void)
{
    int i, nope = 0, total_sugar = 0, total_caffeine = 0, dailycup[3];
    char drinktype[3];
    const int sugar_daily_max = 60, sugar_3days_max = 150, caf_daily_max = 300, caf_3days_max = 700;
    const int sugar_milk = 30, caf_milk = 20, sugar_black = 10, caf_black = 50;

    for(i = 0 ; i < 3 ; i++)
    {
        scanf(" %c%d",&drinktype[i], &dailycup[i]);
    }

    for(i = 0 ; i < 3 ; i++)
    {
        if(drinktype[i] == 'B')
        {
            if(sugar_black * dailycup[i] > sugar_daily_max || caf_black * dailycup[i] > caf_daily_max)
            {
                printf("Nope!");
                nope = 1;
                break;
            }
            else
            {
                total_sugar += sugar_black * dailycup[i];
                total_caffeine += caf_black * dailycup[i];
            }
        }
        else if(drinktype[i] == 'M')
        {
            if(sugar_milk * dailycup[i] > sugar_daily_max || caf_milk * dailycup[i] > caf_daily_max)
            {
                printf("Nope!");
                nope = 1;
                break;
            }
            else
            {
                total_sugar += sugar_milk * dailycup[i];
                total_caffeine += caf_milk * dailycup[i];
            }
        }

    }

    if(nope == 0)
    {
        if(total_sugar > sugar_3days_max || total_caffeine > caf_3days_max)
            printf("Nope!");
        else
            printf("Yes!");
    }    

    return 0;
}