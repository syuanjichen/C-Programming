//d070 - Gregorian: 0 end ver
/*
    Sample Input:
    2000
    1999
    2004
    2020
    0

    Sample Output:
    a leap year
    a normal year
    a leap year
    a leap year

    Rule: 0 is the end of input
*/

//Solution:Refer to 0419/Gregorian_EOF.c, but add the if(year==0) in it

#include <stdio.h>

int main()
{
    int year;

    while(scanf("%d",&year)!=EOF)
    {
        if(year==0)
            break;
        else if(year%400==0)
            printf("a leap year\n");
        else if(year%4==0 && year%100!=0)
            printf("a leap year\n");
        else
            printf("a normal year\n");
    }

    return 0;
}