/* Find the earlier date of two dates */

#include <stdio.h>

int main(void)
{
    int year_01,month_01,day_01,year_02,month_02,day_02;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d",&month_01,&day_01,&year_01);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d",&month_02,&day_02,&year_02);

    if(year_01 > year_02)
        printf("%d/%d/%d is earlier than %d/%d/%d\n",month_02,day_02,year_02,month_01,day_01,year_01);
    else if(year_01 < year_02)
        printf("%d/%d/%d is earlier than %d/%d/%d\n",month_01,day_01,year_01,month_02,day_02,year_02);
    else
    {
        if(month_01 > month_02)
            printf("%d/%d/%d is earlier than %d/%d/%d\n",month_02,day_02,year_02,month_01,day_01,year_01);
        else if(month_01 < month_02)
            printf("%d/%d/%d is earlier than %d/%d/%d\n",month_01,day_01,year_01,month_02,day_02,year_02);
        else
        {
            if(day_01 > day_02)
                printf("%d/%d/%d is earlier than %d/%d/%d\n",month_02,day_02,year_02,month_01,day_01,year_01);
            else if(day_01 < day_02)
                printf("%d/%d/%d is earlier than %d/%d/%d\n",month_01,day_01,year_01,month_02,day_02,year_02);
            else
                printf("Two days are the same.\n");    
        }
    }

    return 0;
}