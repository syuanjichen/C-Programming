//d071 - Gregorian EOF ver.
/*
    Sample input:
    1920
    2000
    2020
    1999
    ...

    Sample Output:
    a leap year
    a leap year
    a leap year
    a normal year 
    ...
*/

/*Solution
    Step 1:While loop: Input the year (!=EOF)
    Step 2:If n can be divided by 400, then n is a leap year
           else if n can be divided by 4 but not 100, then n is a leap year
           else number is a normal year
    Step 3:Print the String (a leap year or a normal year)
    Step 4:Loop again until EOF
*/

#include <stdio.h>

int main()
{
    int year;

    while(scanf("%d",&year)!=EOF)
    {
        if(year%400==0)
            printf("a leap year\n");
        else if(year%4==0 && year%100!=0)
            printf("a leap year\n");
        else
            printf("a normal year\n");
    }

    return 0;
}