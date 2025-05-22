//Day 5 - Calculate time in Utah, US (UTC -7)
#include <stdio.h>

int main()
{
    int twtime,ustime;
    scanf("%d",&twtime);
    ustime=twtime-15;

    if(ustime>=0)
        printf("%d",ustime);
    else
        printf("%d",ustime+24);
    
    return 0;
}