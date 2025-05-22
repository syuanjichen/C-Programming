//d073 - Grouping
/*
    Rule:(1,2,3) are group 1, (4,5,6) are group 2...
    Input: 7 (for number)
    Output: 3

    Input: 15
    Output:5
*/

/*Solution
    Step 1: input the number n
    Step 2: if 3|n, then output n/3
            else output (n/3)+1
    Step 3: print the number
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    if(n%3==0)
        printf("%d\n",n/3);
    else
        printf("%d\n",(n/3)+1);

    return 0;
}