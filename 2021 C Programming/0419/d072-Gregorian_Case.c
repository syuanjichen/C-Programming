//d072 - Gregorian: Case ver.
/*
    Sample Input: 4 (for times)
    Input:
    2000
    1999
    2100
    1000

    Sample Output:
    Case 1: a leap year
    Case 2: a normal year
    Case 3: a normal year
    Case 4: a normal year
*/

//Solution: Refer to 0418/d069-Gregorian_t.c

#include <stdio.h>

int main()
{
    int i,n,year;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&year);

        if(year%400==0)
            printf("Case %d: a leap year\n",i);
        else if(year%4==0 && year%100!=0)
            printf("Case %d: a leap year\n",i);
        else
            printf("Case %d: a normal year\n",i);
    }

    return 0;
}