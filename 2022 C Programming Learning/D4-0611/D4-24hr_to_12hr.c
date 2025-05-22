/* Convert 24-hour time into 12-hour time */

#include <stdio.h>

int main(void)
{
    int hh24,mm;

    printf("Enter a 24-hour time (hh:mm): ");
    scanf("%d:%d",&hh24,&mm);

    if(13 <= hh24 && hh24 <= 23)
        printf("Equivalent 12-hour time: %d:%d PM\n",hh24 - 12,mm);
    else if(1 <= hh24 && hh24 <= 11)
        printf("Equivalent 12-hour time: %d:%d AM\n",hh24,mm);
    else if(hh24 == 12)
        printf("Equivalent 12-hour time: %d:%d PM\n",hh24,mm);
    else if(hh24 == 0)
        printf("Equivalent 12-hour time: %d:%d AM\n",hh24 + 12,mm);
    else
        printf("Invalid input!\n");

    return 0;
}