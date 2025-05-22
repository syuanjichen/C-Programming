/* Print a calendar */

#include <stdio.h>

int main(void)
{
    int number_of_days,start_day,daycount,weekdaycount;
    
    printf("Enter the number of days in month: ");
    scanf("%d",&number_of_days);
    printf("Enter the starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d",&start_day);

    for(weekdaycount = 1;weekdaycount < start_day;weekdaycount++)
            printf("   ");

    for(daycount = 1;daycount <= number_of_days;daycount++)
    {
        printf("%2d ",daycount);
        weekdaycount++;

        if(weekdaycount % 7 == 1)
            printf("\n");
    }

    return 0;
}