//d069 - Gregorian t lines
/*
    Input: 3 (n for times)
    Sample input:
    2000
    2001
    1999
    Sample output:
    a leap year
    a normal year
    a normal year
*/

/*Solution
    Step 1: input n for times
    Step 2: use for loop to run n times
    Step 3: (Inside the loop)
            Input the years
    Step 4:If year can be divided by 400, then year is a leap year
           else if year can be divided by 4 but not 100, then year is a leap year
           any number else is a normal year
    Step 5:Print the String (a leap year or a normal year)
*/

#include <stdio.h>

int main()
{
    int i,n,year;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&year);

        if(year%400==0)
            printf("a leap year\n");
        else if(year%4==0 && year%100!=0)
            printf("a leap year\n");
        else
            printf("a normal year\n");
    }

    return 0;
}