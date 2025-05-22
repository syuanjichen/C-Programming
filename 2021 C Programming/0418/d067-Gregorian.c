//d067 - Gregorian Calendar
/*
    Sample input 1:2000 (n for year)
    Sample output 1:a leap year (400|2000, so year 2000 is a leap year)

    Sample input 2: 1999 
    Sample output 2: a normal year (1999 cannot be divided by 4)

    Rule: if n can be divide by 4 or 400 (but not 100), then n is a leap year
*/

/*Solution
    Step 1:Type in the number n
    Step 2:If n can be divided by 400, then n is a leap year
           else if n can be divided by 4 but not 100, then n is a leap year
    Step 3:Print the String (a leap year or a normal year)
*/

#include <stdio.h>

int main()
{
    int year;
    scanf("%d",&year);

    if(year%400==0)
        printf("a leap year\n");
    else if(year%4==0 && year%100!=0)
        printf("a leap year\n");
    else
        printf("a normal year\n");

    return 0;
}