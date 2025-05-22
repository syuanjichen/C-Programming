//d060 - Waiting Time
/*
    Rule: Give a number min (represent minute)
          Find how many minutes is it away from 25

    Sample Input 1: 20
    Sample Output 1: 5 (25-20=5)

    Sample Input 2: 45
    Sample Output 2: 40 (25-45=-20, 60+(-20)=40)
*/

/*Solution
    Step 1: Input the number n (for minutes)
    Step 2: Calculate 25-n
    Step 3: If 25-n>0, then print 25-n
            Else print 60+(25-n)
*/

#include <stdio.h>

int main()
{
    int minutes;
    scanf("%d",&minutes);

    if(25-minutes>=0)
        printf("%d\n",25-minutes);
    else
        printf("%d\n",60+25-minutes);

    return 0;
}