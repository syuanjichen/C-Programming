//d532 - How many leap years
/*
    Rule: Input a and b (as years), find how many leap years are in [a,b]

    Sample Input: 2012 2016
    Sample Output: 2
*/

/*Solution
    Step 1: Input 2 numbers a and b
    Step 2: run for loop from a to b
    Step 3: check if the year is a leap year
            If year%4==0
                if year%100!=0
                if year%400=0
                    count=count+1
    Step 4: Output count value
*/

#include <stdio.h>

int main()
{
    int a,b,count=0,year;

    scanf("%d %d",&a,&b);

    for(year=a;year<=b;year++)
    {
        if(year%4==0)
        {
            if(year%100!=0 || year%400==0)
                count++;
        }
        else
            continue;
    }

    printf("%d\n",count);

    return 0;
}