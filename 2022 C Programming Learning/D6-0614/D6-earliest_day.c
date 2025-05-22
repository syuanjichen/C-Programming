/* Find the earliest day */

#include <stdio.h>

int main(void)
{
    int year,month,day,early_yr,early_mo,early_day;

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d",&month,&day,&year);
    early_yr = year;
    early_mo = month;
    early_day = day;

    while(year != 0 && month != 0 && day != 0)
    {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d",&month,&day,&year);

        if(year == 0 && month == 0 && day == 0)
            break;

        if(year < early_yr)
            early_yr = year;
        if(year == early_yr)
        {
            if(month < early_mo)
                early_mo = month;
            if(month == early_mo)
            {
                if(day < early_day)
                    early_day = day;
            }
        }
    }

    printf("%d/%d/%d is the earliest date\n",early_mo,early_day,early_yr);

    return 0;
}